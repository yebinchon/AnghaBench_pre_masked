
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static uint64_t FUNC_0(uint8_t *VAR_0, size_t VAR_1, int *VAR_2)
{
    *VAR_2 = -1;
    uint8_t *VAR_3 = VAR_0 + VAR_1;
    if (VAR_0 == VAR_3)
        return -1;
    uint64_t VAR_4 = *VAR_0++;
    int VAR_5 = 1;
    int VAR_6;
    for (VAR_6 = 0x80; !(VAR_4 & VAR_6); VAR_6 >>= 1) {
        VAR_5++;
        if (VAR_5 > 8)
            return -1;
    }
    VAR_4 &= VAR_6 - 1;

    int VAR_7 = 0;
    if (VAR_4 == VAR_6 - 1)
        VAR_7++;
    for (int VAR_8 = 1; VAR_8 < VAR_5; VAR_8++) {
        if (VAR_0 == VAR_3)
            return -1;
        if (*VAR_0 == 255)
            VAR_7++;
        VAR_4 = (VAR_4 << 8) | *VAR_0++;
    }


    if (VAR_7 == VAR_5)
        return -1;
    *VAR_2 = VAR_5;
    return VAR_4;
}
