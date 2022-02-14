
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double,int ) ;
 double FUNC_1 (double,int ,int ) ;
 double FUNC_2 (double) ;
 double VAR_0 ;

__attribute__((used)) static double FUNC_3(double VAR_1)
{
 int VAR_2;



 VAR_1 = VAR_1 * 0.5;
 VAR_1 = 2 * (VAR_1 - FUNC_2(VAR_1));


 VAR_2 = 4 * VAR_1;
 VAR_2 = (VAR_2+1)/2;
 VAR_1 -= VAR_2 * 0.5;

 VAR_1 *= VAR_0;
 switch (VAR_2) {
 default:
 case 0:
  return FUNC_1(VAR_1, 0, 0);
 case 1:
  return FUNC_0(VAR_1, 0);
 case 2:
  return FUNC_1(-VAR_1, 0, 0);
 case 3:
  return -FUNC_0(VAR_1, 0);
 }
}
