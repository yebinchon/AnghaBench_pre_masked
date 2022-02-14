
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef int byte ;



long long FUNC_0(size_t VAR_0, bool VAR_1, bool VAR_2, const byte *VAR_3) {
    int VAR_4;
    if (!VAR_2) {
        VAR_4 = -1;
        VAR_3 += VAR_0 - 1;
    } else {
        VAR_4 = 1;
    }

    long long VAR_5 = 0;
    if (VAR_1 && *VAR_3 & 0x80) {
        VAR_5 = -1;
    }
    for (uint VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        VAR_5 <<= 8;
        VAR_5 |= *VAR_3;
        VAR_3 += VAR_4;
    }

    return VAR_5;
}
