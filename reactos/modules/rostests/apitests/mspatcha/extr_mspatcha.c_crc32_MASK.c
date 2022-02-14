
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;

unsigned int FUNC_0(unsigned int VAR_1, unsigned char* VAR_2, unsigned int VAR_3)
{
    unsigned int VAR_4 = VAR_1;
    unsigned int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    {
        VAR_4 = VAR_0[(VAR_4 ^ VAR_2[VAR_5]) & 0xff] ^ (VAR_4 >> 8);
    }

    return VAR_4;
}
