
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 double VAR_0 ;

uint8_t FUNC_0(double VAR_1, double VAR_2) {
    if (VAR_1 == 0) return 26;
    int VAR_3 = 1;
    while (VAR_1 < VAR_0) {
        VAR_1 *= 2;
        VAR_3++;
    }
    VAR_3 -= 2;




    if (VAR_2 > 66 || VAR_2 < -66) {
        VAR_3--;
        if (VAR_2 > 80 || VAR_2 < -80) VAR_3--;
    }


    if (VAR_3 < 1) VAR_3 = 1;
    if (VAR_3 > 26) VAR_3 = 26;
    return VAR_3;
}
