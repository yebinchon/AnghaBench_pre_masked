
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
typedef int uint ;



__attribute__((used)) static void
FUNC_0(uint VAR_0, ushort *VAR_1, int *VAR_2)
{
    if (VAR_0 < 0x10000)
    {
        VAR_1[0] = VAR_0;
        *VAR_2 = 1;
    }
    else
    {
        VAR_0 -= 0x10000;
        VAR_1[0] = 0xD800 | ((VAR_0 >> 10) & 0x3FF);
        VAR_1[1] = 0xDC00 | (VAR_0 & 0x3FF);
        *VAR_2 = 2;
    }
}
