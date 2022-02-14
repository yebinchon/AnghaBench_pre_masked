
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_char_t ;



size_t FUNC_0(const utf8_char_t* VAR_0)
{

    if (!VAR_0 || 0x00 == VAR_0[0]) {
        return 0;
    }

    static const size_t VAR_1[] = {
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 3, 3, 4, 0
    };

    return VAR_1[(VAR_0[0] >> 3) & 0x1F];
}
