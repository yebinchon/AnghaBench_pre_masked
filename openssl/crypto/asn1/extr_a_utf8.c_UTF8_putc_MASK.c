
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(unsigned char *VAR_0, int VAR_1, unsigned long VAR_2)
{
    if (!VAR_0)
        VAR_1 = 6;
    else if (VAR_1 <= 0)
        return -1;
    if (VAR_2 < 0x80) {
        if (VAR_0)
            *VAR_0 = (unsigned char)VAR_2;
        return 1;
    }
    if (VAR_2 < 0x800) {
        if (VAR_1 < 2)
            return -1;
        if (VAR_0) {
            *VAR_0++ = (unsigned char)(((VAR_2 >> 6) & 0x1f) | 0xc0);
            *VAR_0 = (unsigned char)((VAR_2 & 0x3f) | 0x80);
        }
        return 2;
    }
    if (VAR_2 < 0x10000) {
        if (VAR_1 < 3)
            return -1;
        if (VAR_0) {
            *VAR_0++ = (unsigned char)(((VAR_2 >> 12) & 0xf) | 0xe0);
            *VAR_0++ = (unsigned char)(((VAR_2 >> 6) & 0x3f) | 0x80);
            *VAR_0 = (unsigned char)((VAR_2 & 0x3f) | 0x80);
        }
        return 3;
    }
    if (VAR_2 < 0x200000) {
        if (VAR_1 < 4)
            return -1;
        if (VAR_0) {
            *VAR_0++ = (unsigned char)(((VAR_2 >> 18) & 0x7) | 0xf0);
            *VAR_0++ = (unsigned char)(((VAR_2 >> 12) & 0x3f) | 0x80);
            *VAR_0++ = (unsigned char)(((VAR_2 >> 6) & 0x3f) | 0x80);
            *VAR_0 = (unsigned char)((VAR_2 & 0x3f) | 0x80);
        }
        return 4;
    }
    if (VAR_2 < 0x4000000) {
        if (VAR_1 < 5)
            return -1;
        if (VAR_0) {
            *VAR_0++ = (unsigned char)(((VAR_2 >> 24) & 0x3) | 0xf8);
            *VAR_0++ = (unsigned char)(((VAR_2 >> 18) & 0x3f) | 0x80);
            *VAR_0++ = (unsigned char)(((VAR_2 >> 12) & 0x3f) | 0x80);
            *VAR_0++ = (unsigned char)(((VAR_2 >> 6) & 0x3f) | 0x80);
            *VAR_0 = (unsigned char)((VAR_2 & 0x3f) | 0x80);
        }
        return 5;
    }
    if (VAR_1 < 6)
        return -1;
    if (VAR_0) {
        *VAR_0++ = (unsigned char)(((VAR_2 >> 30) & 0x1) | 0xfc);
        *VAR_0++ = (unsigned char)(((VAR_2 >> 24) & 0x3f) | 0x80);
        *VAR_0++ = (unsigned char)(((VAR_2 >> 18) & 0x3f) | 0x80);
        *VAR_0++ = (unsigned char)(((VAR_2 >> 12) & 0x3f) | 0x80);
        *VAR_0++ = (unsigned char)(((VAR_2 >> 6) & 0x3f) | 0x80);
        *VAR_0 = (unsigned char)((VAR_2 & 0x3f) | 0x80);
    }
    return 6;
}
