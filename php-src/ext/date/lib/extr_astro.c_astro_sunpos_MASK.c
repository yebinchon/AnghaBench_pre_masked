
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double,double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;

__attribute__((used)) static void FUNC_5(double VAR_1, double *VAR_2, double *VAR_3)
{
 double VAR_4,
        VAR_5,

        VAR_6,
        VAR_7,
        VAR_8, VAR_9,
        VAR_10;


 VAR_4 = FUNC_0(356.0470 + 0.9856002585 * VAR_1);
 VAR_5 = 282.9404 + 4.70935E-5 * VAR_1;
 VAR_6 = 0.016709 - 1.151E-9 * VAR_1;


 VAR_7 = VAR_4 + VAR_6 * VAR_0 * FUNC_3(VAR_4) * (1.0 + VAR_6 * FUNC_2(VAR_4));
 VAR_8 = FUNC_2(VAR_7) - VAR_6;
 VAR_9 = FUNC_4(1.0 - VAR_6*VAR_6) * FUNC_3(VAR_7);
 *VAR_3 = FUNC_4(VAR_8*VAR_8 + VAR_9*VAR_9);
 VAR_10 = FUNC_1(VAR_9, VAR_8);
 *VAR_2 = VAR_10 + VAR_5;
 if (*VAR_2 >= 360.0) {
  *VAR_2 -= 360.0;
 }
}
