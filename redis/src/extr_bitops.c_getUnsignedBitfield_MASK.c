
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;



uint64_t FUNC_0(unsigned char *VAR_0, uint64_t VAR_1, uint64_t VAR_2) {
    uint64_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
        VAR_3 = VAR_1 >> 3;
        VAR_4 = 7 - (VAR_1 & 0x7);
        VAR_5 = VAR_0[VAR_3];
        VAR_6 = (VAR_5 >> VAR_4) & 1;
        VAR_8 = (VAR_8<<1) | VAR_6;
        VAR_1++;
    }
    return VAR_8;
}
