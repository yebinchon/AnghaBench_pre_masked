
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char utf8_char_t ;



int FUNC_0(const utf8_char_t* VAR_0)
{

    if (!VAR_0 || (VAR_0[0] >= 0 && VAR_0[0] <= ' ') || VAR_0[0] == 0x7F) {
        return 1;
    }


    if (0xC2 == (unsigned char)VAR_0[0] && 0xA0 == (unsigned char)VAR_0[1]) {
        return 1;
    }

    return 0;
}
