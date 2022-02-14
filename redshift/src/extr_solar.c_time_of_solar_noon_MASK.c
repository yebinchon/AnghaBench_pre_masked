
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;

__attribute__((used)) static double
FUNC_3(double VAR_0, double VAR_1)
{


 double VAR_2 = FUNC_1(FUNC_2(VAR_0) - VAR_1/360.0);
 double VAR_3 = FUNC_0(VAR_2);
 double VAR_4 = 720 - 4*VAR_1 - VAR_3;


 VAR_2 = FUNC_1(FUNC_2(VAR_0) - 0.5 + VAR_4/1440.0);
 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = 720 - 4*VAR_1 - VAR_3;


 return VAR_4;
}
