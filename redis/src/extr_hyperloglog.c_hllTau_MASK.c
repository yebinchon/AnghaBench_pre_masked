
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (int,int) ;
 double FUNC_1 (double) ;

double FUNC_2(double VAR_0) {
    if (VAR_0 == 0. || VAR_0 == 1.) return 0.;
    double VAR_1;
    double VAR_2 = 1.0;
    double VAR_3 = 1 - VAR_0;
    do {
        VAR_0 = FUNC_1(VAR_0);
        VAR_1 = VAR_3;
        VAR_2 *= 0.5;
        VAR_3 -= FUNC_0(1 - VAR_0, 2)*VAR_2;
    } while(VAR_1 != VAR_3);
    return VAR_3 / 3;
}
