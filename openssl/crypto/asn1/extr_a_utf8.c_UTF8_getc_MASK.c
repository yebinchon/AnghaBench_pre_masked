
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const unsigned char *VAR_0, int VAR_1, unsigned long *VAR_2)
{
    const unsigned char *VAR_3;
    unsigned long VAR_4;
    int VAR_5;
    if (VAR_1 <= 0)
        return 0;
    VAR_3 = VAR_0;


    if ((*VAR_3 & 0x80) == 0) {
        VAR_4 = *VAR_3++ & 0x7f;
        VAR_5 = 1;
    } else if ((*VAR_3 & 0xe0) == 0xc0) {
        if (VAR_1 < 2)
            return -1;
        if ((VAR_3[1] & 0xc0) != 0x80)
            return -3;
        VAR_4 = (*VAR_3++ & 0x1f) << 6;
        VAR_4 |= *VAR_3++ & 0x3f;
        if (VAR_4 < 0x80)
            return -4;
        VAR_5 = 2;
    } else if ((*VAR_3 & 0xf0) == 0xe0) {
        if (VAR_1 < 3)
            return -1;
        if (((VAR_3[1] & 0xc0) != 0x80)
            || ((VAR_3[2] & 0xc0) != 0x80))
            return -3;
        VAR_4 = (*VAR_3++ & 0xf) << 12;
        VAR_4 |= (*VAR_3++ & 0x3f) << 6;
        VAR_4 |= *VAR_3++ & 0x3f;
        if (VAR_4 < 0x800)
            return -4;
        VAR_5 = 3;
    } else if ((*VAR_3 & 0xf8) == 0xf0) {
        if (VAR_1 < 4)
            return -1;
        if (((VAR_3[1] & 0xc0) != 0x80)
            || ((VAR_3[2] & 0xc0) != 0x80)
            || ((VAR_3[3] & 0xc0) != 0x80))
            return -3;
        VAR_4 = ((unsigned long)(*VAR_3++ & 0x7)) << 18;
        VAR_4 |= (*VAR_3++ & 0x3f) << 12;
        VAR_4 |= (*VAR_3++ & 0x3f) << 6;
        VAR_4 |= *VAR_3++ & 0x3f;
        if (VAR_4 < 0x10000)
            return -4;
        VAR_5 = 4;
    } else if ((*VAR_3 & 0xfc) == 0xf8) {
        if (VAR_1 < 5)
            return -1;
        if (((VAR_3[1] & 0xc0) != 0x80)
            || ((VAR_3[2] & 0xc0) != 0x80)
            || ((VAR_3[3] & 0xc0) != 0x80)
            || ((VAR_3[4] & 0xc0) != 0x80))
            return -3;
        VAR_4 = ((unsigned long)(*VAR_3++ & 0x3)) << 24;
        VAR_4 |= ((unsigned long)(*VAR_3++ & 0x3f)) << 18;
        VAR_4 |= ((unsigned long)(*VAR_3++ & 0x3f)) << 12;
        VAR_4 |= (*VAR_3++ & 0x3f) << 6;
        VAR_4 |= *VAR_3++ & 0x3f;
        if (VAR_4 < 0x200000)
            return -4;
        VAR_5 = 5;
    } else if ((*VAR_3 & 0xfe) == 0xfc) {
        if (VAR_1 < 6)
            return -1;
        if (((VAR_3[1] & 0xc0) != 0x80)
            || ((VAR_3[2] & 0xc0) != 0x80)
            || ((VAR_3[3] & 0xc0) != 0x80)
            || ((VAR_3[4] & 0xc0) != 0x80)
            || ((VAR_3[5] & 0xc0) != 0x80))
            return -3;
        VAR_4 = ((unsigned long)(*VAR_3++ & 0x1)) << 30;
        VAR_4 |= ((unsigned long)(*VAR_3++ & 0x3f)) << 24;
        VAR_4 |= ((unsigned long)(*VAR_3++ & 0x3f)) << 18;
        VAR_4 |= ((unsigned long)(*VAR_3++ & 0x3f)) << 12;
        VAR_4 |= (*VAR_3++ & 0x3f) << 6;
        VAR_4 |= *VAR_3++ & 0x3f;
        if (VAR_4 < 0x4000000)
            return -4;
        VAR_5 = 6;
    } else
        return -2;
    *VAR_2 = VAR_4;
    return VAR_5;
}
