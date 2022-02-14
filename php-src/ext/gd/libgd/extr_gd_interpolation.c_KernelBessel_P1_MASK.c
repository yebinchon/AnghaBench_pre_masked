
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
  0.352246649133679798341724373e+5,
  0.62758845247161281269005675e+5,
  0.313539631109159574238669888e+5,
  0.49854832060594338434500455e+4,
  0.2111529182853962382105718e+3,
  0.12571716929145341558495e+1
 },
 VAR_5[] =
 {
  0.352246649133679798068390431e+5,
  0.626943469593560511888833731e+5,
  0.312404063819041039923015703e+5,
  0.4930396490181088979386097e+4,
  0.2030775189134759322293574e+3,
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
