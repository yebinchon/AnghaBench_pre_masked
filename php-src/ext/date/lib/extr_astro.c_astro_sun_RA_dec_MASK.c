
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double,double*,double*) ;
 double FUNC_1 (double,double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;

__attribute__((used)) static void FUNC_5(double VAR_0, double *VAR_1, double *VAR_2, double *VAR_3)
{
 double VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;


 FUNC_0(VAR_0, &VAR_4, VAR_3);


 VAR_6 = *VAR_3 * FUNC_2(VAR_4);
 VAR_7 = *VAR_3 * FUNC_3(VAR_4);


 VAR_5 = 23.4393 - 3.563E-7 * VAR_0;


 VAR_8 = VAR_7 * FUNC_3(VAR_5);
 VAR_7 = VAR_7 * FUNC_2(VAR_5);


 *VAR_1 = FUNC_1(VAR_7, VAR_6);
 *VAR_2 = FUNC_1(VAR_8, FUNC_4(VAR_6*VAR_6 + VAR_7*VAR_7));
}
