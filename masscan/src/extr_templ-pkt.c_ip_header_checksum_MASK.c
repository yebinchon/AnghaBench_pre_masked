
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned
FUNC_0(const unsigned char *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    unsigned VAR_3 = (VAR_0[VAR_1]&0xF) * 4;
    unsigned VAR_4 = 0;
    unsigned VAR_5;


    if (VAR_2 > VAR_1 + VAR_3)
        VAR_2 = VAR_1 + VAR_3;


    VAR_4 = 0;
    for (VAR_5 = VAR_1; VAR_5 < VAR_2; VAR_5 += 2) {
        VAR_4 += VAR_0[VAR_5]<<8 | VAR_0[VAR_5+1];
    }


    VAR_4 = (VAR_4 & 0xFFFF) + (VAR_4 >> 16);
    VAR_4 = (VAR_4 & 0xFFFF) + (VAR_4 >> 16);
    VAR_4 = (VAR_4 & 0xFFFF) + (VAR_4 >> 16);

    return VAR_4;
}
