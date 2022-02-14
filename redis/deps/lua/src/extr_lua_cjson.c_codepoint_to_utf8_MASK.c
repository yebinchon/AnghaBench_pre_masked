
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char *VAR_0, int VAR_1)
{

    if (VAR_1 <= 0x7F) {
        VAR_0[0] = VAR_1;
        return 1;
    }


    if (VAR_1 <= 0x7FF) {
        VAR_0[0] = (VAR_1 >> 6) | 0xC0;
        VAR_0[1] = (VAR_1 & 0x3F) | 0x80;
        return 2;
    }


    if (VAR_1 <= 0xFFFF) {
        VAR_0[0] = (VAR_1 >> 12) | 0xE0;
        VAR_0[1] = ((VAR_1 >> 6) & 0x3F) | 0x80;
        VAR_0[2] = (VAR_1 & 0x3F) | 0x80;
        return 3;
    }


    if (VAR_1 <= 0x1FFFFF) {
        VAR_0[0] = (VAR_1 >> 18) | 0xF0;
        VAR_0[1] = ((VAR_1 >> 12) & 0x3F) | 0x80;
        VAR_0[2] = ((VAR_1 >> 6) & 0x3F) | 0x80;
        VAR_0[3] = (VAR_1 & 0x3F) | 0x80;
        return 4;
    }

    return 0;
}
