
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const unsigned char *VAR_0, int VAR_1)
{
    if (0 == VAR_0 || 0 == VAR_1) return 0;

    unsigned char VAR_2;
    const unsigned char* VAR_3 = VAR_0 + VAR_1;
    switch (VAR_1)
    {
    default:
        return 0;

    case 4:
        if ((VAR_2 = (*--VAR_3)) < 0x80 || VAR_2 > 0xBF) return 0;
    case 3:
        if ((VAR_2 = (*--VAR_3)) < 0x80 || VAR_2 > 0xBF) return 0;
    case 2:
        VAR_2 = (*--VAR_3);
        switch (*VAR_0)
        {
        case 0xE0:
            if (VAR_2 < 0xA0 || VAR_2 > 0xBF) return 0;
            break;
        case 0xED:
            if (VAR_2 < 0x80 || VAR_2 > 0x9F) return 0;
            break;
        case 0xF0:
            if (VAR_2 < 0x90 || VAR_2 > 0xBF) return 0;
            break;
        case 0xF4:
            if (VAR_2 < 0x80 || VAR_2 > 0x8F) return 0;
            break;
        default:
            if (VAR_2 < 0x80 || VAR_2 > 0xBF) return 0;
        }
    case 1:
        if (*VAR_0 >= 0x80 && *VAR_0 < 0xC2) return 0;
    }
    return *VAR_0 <= 0xF4;
}
