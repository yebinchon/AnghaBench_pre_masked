
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int** VAR_0 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    unsigned int VAR_4, VAR_5 = 32;
    uint32_t VAR_6, VAR_7, VAR_8=0, VAR_9=0x9E3779B9;
    uint32_t const *VAR_10;

    VAR_6 = VAR_1[0] | (VAR_1[1] << 8) | (VAR_1[2] << 16) | (VAR_1[3] << 24);
    VAR_7 = VAR_1[4] | (VAR_1[5] << 8) | (VAR_1[6] << 16) | (VAR_1[7] << 24);
    VAR_10 = VAR_0[VAR_3];

    for (VAR_4=0; VAR_4 < VAR_5; VAR_4++)
    {
        VAR_6 += (((VAR_7 << 4) ^ (VAR_7 >> 5)) + VAR_7) ^ (VAR_8 + VAR_10[VAR_8 & 3]);
        VAR_8 += VAR_9;
        VAR_7 += (((VAR_6 << 4) ^ (VAR_6 >> 5)) + VAR_6) ^ (VAR_8 + VAR_10[(VAR_8>>11) & 3]);
    }

    VAR_2[0] = VAR_6;
    VAR_6 >>= 8;
    VAR_2[1] = VAR_6;
    VAR_6 >>= 8;
    VAR_2[2] = VAR_6;
    VAR_6 >>= 8;
    VAR_2[3] = VAR_6;

    VAR_2[4] = VAR_7;
    VAR_7 >>= 8;
    VAR_2[5] = VAR_7;
    VAR_7 >>= 8;
    VAR_2[6] = VAR_7;
    VAR_7 >>= 8;
    VAR_2[7] = VAR_7;
}
