
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;

__attribute__((used)) static unsigned
FUNC_0(const unsigned char *VAR_1, unsigned VAR_2)
{
    unsigned VAR_3;
    unsigned VAR_4;

    VAR_4 = (unsigned)~0;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        VAR_4 = VAR_0[(VAR_4 ^ VAR_1[VAR_3]) & 0xff] ^ (VAR_4 >> 8);
    }
    VAR_4 = ~VAR_4;

    return VAR_4;
}
