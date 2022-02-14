
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;
 int VAR_1 ;

uint32_t FUNC_0(uint32_t VAR_2, const unsigned char *VAR_3, size_t VAR_4)
{
    if (!VAR_1) {
        uint32_t VAR_5, VAR_6;
        uint32_t VAR_7 = 1;
        VAR_0[0] = 0;
        for (VAR_5 = 128; VAR_5; VAR_5 >>= 1) {
            VAR_7 = (VAR_7 >> 1) ^ ((VAR_7 & 1) ? 0xEDB88320 : 0);
            for (VAR_6 = 0; VAR_6 < 256; VAR_6 += 2 * VAR_5) {
                VAR_0[VAR_5 + VAR_6] = VAR_0[VAR_6] ^ VAR_7;
            }
        }
        VAR_1 = 1;
    }

    VAR_2 = VAR_2 ^ 0xFFFFFFFF;
    while (VAR_4-- > 0) {
        VAR_2 = (VAR_2 >> 8) ^ VAR_0[(VAR_2 ^ *VAR_3++) & 0xFF];
    }
    return VAR_2 ^ 0xFFFFFFFF;
}
