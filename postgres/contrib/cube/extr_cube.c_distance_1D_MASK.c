
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double,double) ;
 double FUNC_1 (double,double) ;

__attribute__((used)) static double
FUNC_2(double VAR_0, double VAR_1, double VAR_2, double VAR_3)
{

 if ((VAR_0 <= VAR_2) && (VAR_1 <= VAR_2) && (VAR_0 <= VAR_3) && (VAR_1 <= VAR_3))
  return (FUNC_1(VAR_2, VAR_3) - FUNC_0(VAR_0, VAR_1));


 if ((VAR_0 > VAR_2) && (VAR_1 > VAR_2) && (VAR_0 > VAR_3) && (VAR_1 > VAR_3))
  return (FUNC_1(VAR_0, VAR_1) - FUNC_0(VAR_2, VAR_3));


 return 0.0;
}
