
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;



__attribute__((used)) static unsigned
FUNC_0(const unsigned char *VAR_0, unsigned VAR_1,
              unsigned VAR_2, size_t VAR_3)
{
    uint64_t VAR_4 = 0;
    unsigned VAR_5;


    VAR_4 = 6;
    VAR_4 += VAR_3;
    VAR_4 += VAR_0[VAR_1 + 12] << 8 | VAR_0[VAR_1 + 13];
    VAR_4 += VAR_0[VAR_1 + 14] << 8 | VAR_0[VAR_1 + 15];
    VAR_4 += VAR_0[VAR_1 + 16] << 8 | VAR_0[VAR_1 + 17];
    VAR_4 += VAR_0[VAR_1 + 18] << 8 | VAR_0[VAR_1 + 19];


    for (VAR_5=0; VAR_5<VAR_3; VAR_5 += 2) {
        VAR_4 += VAR_0[VAR_2 + VAR_5]<<8 | VAR_0[VAR_2 + VAR_5 + 1];
    }

    VAR_4 -= (VAR_3 & 1) * VAR_0[VAR_2 + VAR_5 - 1];
    VAR_4 = (VAR_4 & 0xFFFF) + (VAR_4 >> 16);
    VAR_4 = (VAR_4 & 0xFFFF) + (VAR_4 >> 16);
    VAR_4 = (VAR_4 & 0xFFFF) + (VAR_4 >> 16);

    return (unsigned)VAR_4;
}
