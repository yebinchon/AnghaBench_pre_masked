
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;



int FUNC_0(int32_t VAR_0, char *VAR_1, size_t *VAR_2)
{
    if(VAR_0 < 0)
        return -1;
    else if(VAR_0 < 0x80)
    {
        VAR_1[0] = (char)VAR_0;
        *VAR_2 = 1;
    }
    else if(VAR_0 < 0x800)
    {
        VAR_1[0] = 0xC0 + ((VAR_0 & 0x7C0) >> 6);
        VAR_1[1] = 0x80 + ((VAR_0 & 0x03F));
        *VAR_2 = 2;
    }
    else if(VAR_0 < 0x10000)
    {
        VAR_1[0] = 0xE0 + ((VAR_0 & 0xF000) >> 12);
        VAR_1[1] = 0x80 + ((VAR_0 & 0x0FC0) >> 6);
        VAR_1[2] = 0x80 + ((VAR_0 & 0x003F));
        *VAR_2 = 3;
    }
    else if(VAR_0 <= 0x10FFFF)
    {
        VAR_1[0] = 0xF0 + ((VAR_0 & 0x1C0000) >> 18);
        VAR_1[1] = 0x80 + ((VAR_0 & 0x03F000) >> 12);
        VAR_1[2] = 0x80 + ((VAR_0 & 0x000FC0) >> 6);
        VAR_1[3] = 0x80 + ((VAR_0 & 0x00003F));
        *VAR_2 = 4;
    }
    else
        return -1;

    return 0;
}
