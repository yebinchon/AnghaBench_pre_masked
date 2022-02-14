
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(uint8_t *VAR_1, size_t VAR_2, int *VAR_3)
{
    *VAR_3 = -1;
    uint8_t *VAR_4 = VAR_1 + VAR_2;
    if (VAR_1 == VAR_4)
        return VAR_0;
    int VAR_5 = 1;
    uint32_t VAR_6 = *VAR_1++;
    for (int VAR_7 = 0x80; !(VAR_6 & VAR_7); VAR_7 >>= 1) {
        VAR_5++;
        if (VAR_5 > 4)
            return VAR_0;
    }
    *VAR_3 = VAR_5;
    while (--VAR_5 && VAR_1 < VAR_4)
        VAR_6 = (VAR_6 << 8) | *VAR_1++;
    return VAR_6;
}
