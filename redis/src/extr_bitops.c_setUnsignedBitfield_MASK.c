
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;



void FUNC_0(unsigned char *VAR_0, uint64_t VAR_1, uint64_t VAR_2, uint64_t VAR_3) {
    uint64_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
        VAR_7 = (VAR_3 & ((uint64_t)1<<(VAR_2-1-VAR_8))) != 0;
        VAR_4 = VAR_1 >> 3;
        VAR_5 = 7 - (VAR_1 & 0x7);
        VAR_6 = VAR_0[VAR_4];
        VAR_6 &= ~(1 << VAR_5);
        VAR_6 |= VAR_7 << VAR_5;
        VAR_0[VAR_4] = VAR_6 & 0xff;
        VAR_1++;
    }
}
