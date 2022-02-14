
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double,double,double) ;
 double FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (double) ;
 double FUNC_5 (double) ;

__attribute__((used)) static double
FUNC_6(double VAR_0, double VAR_1,
   double VAR_2, double VAR_3, double VAR_4)
{


 double VAR_5 = FUNC_1(VAR_1);
 double VAR_6 = FUNC_5(VAR_1);
 double VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_4);
 double VAR_8 = 720 - 4*(VAR_3 + FUNC_0(VAR_7)) - VAR_5;


 double VAR_9 = FUNC_3(FUNC_4(VAR_0) + VAR_8/1440.0);
 VAR_5 = FUNC_1(VAR_9);
 VAR_6 = FUNC_5(VAR_9);
 VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_4);
 VAR_8 = 720 - 4*(VAR_3 + FUNC_0(VAR_7)) - VAR_5;


 return VAR_8;
}
