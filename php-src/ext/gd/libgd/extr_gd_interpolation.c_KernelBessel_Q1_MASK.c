
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double FUNC_0(const double VAR_0)
{
 double VAR_1, VAR_2;

 register long VAR_3;

 static const double
 VAR_4[] =
 {
  0.3511751914303552822533318e+3,
  0.7210391804904475039280863e+3,
  0.4259873011654442389886993e+3,
  0.831898957673850827325226e+2,
  0.45681716295512267064405e+1,
  0.3532840052740123642735e-1
 },
 VAR_5[] =
 {
  0.74917374171809127714519505e+4,
  0.154141773392650970499848051e+5,
  0.91522317015169922705904727e+4,
  0.18111867005523513506724158e+4,
  0.1038187585462133728776636e+3,
  0.1e+1
 };

 VAR_1 = VAR_4[5];
 VAR_2 = VAR_5[5];
 for (VAR_3=4; VAR_3 >= 0; VAR_3--)
 {
  VAR_1 = VAR_1*(8.0/VAR_0)*(8.0/VAR_0)+VAR_4[VAR_3];
  VAR_2 = VAR_2*(8.0/VAR_0)*(8.0/VAR_0)+VAR_5[VAR_3];
 }
 return (double)(VAR_1/VAR_2);
}
