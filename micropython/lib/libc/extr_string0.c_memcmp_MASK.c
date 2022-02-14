
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



int FUNC_0(const void *VAR_0, const void *VAR_1, size_t VAR_2) {
    const uint8_t *VAR_3 = VAR_0;
    const uint8_t *VAR_4 = VAR_1;
    while (VAR_2--) {
        char VAR_5 = *VAR_3++;
        char VAR_6 = *VAR_4++;
        if (VAR_5 < VAR_6) return -1;
        else if (VAR_5 > VAR_6) return 1;
    }
    return 0;
}
