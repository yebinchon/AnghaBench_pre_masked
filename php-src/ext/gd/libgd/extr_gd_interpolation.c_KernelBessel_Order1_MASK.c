
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 float FUNC_1 (double) ;
 float FUNC_2 (double) ;
 double VAR_0 ;
 float FUNC_3 (double) ;
 float FUNC_4 (double) ;
 float FUNC_5 (float) ;

__attribute__((used)) static double FUNC_6(double VAR_1)
{
 double VAR_2, VAR_3;

 if (VAR_1 == 0.0)
  return (0.0f);
 VAR_2 = VAR_1;
 if (VAR_1 < 0.0)
  VAR_1=(-VAR_1);
 if (VAR_1 < 8.0)
  return (VAR_2*FUNC_0(VAR_1));
 VAR_3 = (double)FUNC_5(2.0f/(VAR_0*VAR_1))*(double)(FUNC_1(VAR_1)*(1.0f/FUNC_5(2.0f)*(FUNC_4(VAR_1)-FUNC_3(VAR_1)))-8.0f/VAR_1*FUNC_2(VAR_1)*
  (-1.0f/FUNC_5(2.0f)*(FUNC_4(VAR_1)+FUNC_3(VAR_1))));
 if (VAR_2 < 0.0f)
  VAR_3 = (-VAR_3);
 return (VAR_3);
}
