
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (int ) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 int FUNC_4 (double) ;

double FUNC_5(double VAR_1, double VAR_2, double VAR_3, double VAR_4) {
    double VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    VAR_5 = FUNC_2(VAR_2);
    VAR_6 = FUNC_2(VAR_1);
    VAR_7 = FUNC_2(VAR_4);
    VAR_8 = FUNC_2(VAR_3);
    VAR_9 = FUNC_3((VAR_7 - VAR_5) / 2);
    VAR_10 = FUNC_3((VAR_8 - VAR_6) / 2);
    return 2.0 * VAR_0 *
           FUNC_0(FUNC_4(VAR_9 * VAR_9 + FUNC_1(VAR_5) * FUNC_1(VAR_7) * VAR_10 * VAR_10));
}
