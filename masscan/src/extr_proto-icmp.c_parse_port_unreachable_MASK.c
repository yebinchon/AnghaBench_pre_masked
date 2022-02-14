
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const unsigned char *VAR_0, unsigned VAR_1,
        unsigned *VAR_2, unsigned *VAR_3,
        unsigned *VAR_4, unsigned *VAR_5,
        unsigned *VAR_6)
{
    if (VAR_1 < 24)
        return -1;
    *VAR_2 = VAR_0[12]<<24 | VAR_0[13]<<16 | VAR_0[14]<<8 | VAR_0[15];
    *VAR_3 = VAR_0[16]<<24 | VAR_0[17]<<16 | VAR_0[18]<<8 | VAR_0[19];
    *VAR_6 = VAR_0[9];

    VAR_0 += (VAR_0[0]&0xF)<<2;
    VAR_1 -= (VAR_0[0]&0xF)<<2;

    if (VAR_1 < 4)
        return -1;

    *VAR_4 = VAR_0[0]<<8 | VAR_0[1];
    *VAR_5 = VAR_0[2]<<8 | VAR_0[3];

    return 0;
}
