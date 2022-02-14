
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;

double FUNC_0(double VAR_1) {
    if (VAR_1 == 1.) return VAR_0;
    double VAR_2;
    double VAR_3 = 1;
    double VAR_4 = VAR_1;
    do {
        VAR_1 *= VAR_1;
        VAR_2 = VAR_4;
        VAR_4 += VAR_1 * VAR_3;
        VAR_3 += VAR_3;
    } while(VAR_2 != VAR_4);
    return VAR_4;
}
