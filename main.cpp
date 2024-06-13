#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <iostream>
using namespace std;

template <typename Type1,typename Type2>

class ClassName{
public:
	//�����o�ϐ�
	Type1 a;
	Type2 b;

	//�R���X�g���N�^
	ClassName(Type1 a,Type2 b) : a(a),b(b) {}

	//min�֐�
	Type min() {
		if (a < b) {
			return static_cast<Type1>(a);
		}
		else {
			return static_cast<Type2>(b);
		}
	}
};

int main() {
	ClassName<int,float> num1(10,20.0f);
	ClassName<float,double> num2(30.0f,40.0);
	ClassName<double,int> num3(50.0,60);

	printf("%d\n", (int)num1.min());
	printf("%f\n", (int)num2.min());
	printf("%lf\n", (int)num3.min());
	//cout�ŏo�͂ɏ���������
	
	//printf("%d\n", min(num1.a,(int) num2.a));

	/*cout << ("%d\n",num1.min(),num2.min()) << endl;
	cout << ("%f\n",num2.min(),num3.min()) << endl;
	cout << ("%lf\n",num1.min(),num3.min()) << endl;*/

	return 0;
}