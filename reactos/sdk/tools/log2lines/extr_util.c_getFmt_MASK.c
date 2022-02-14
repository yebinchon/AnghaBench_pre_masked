
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *
FUNC_0(const char *VAR_0)
{
    const char *VAR_1 = "%x";

    if (*VAR_0 == '0')
    {
        switch (*++VAR_0)
        {
        case 'x':
            VAR_1 = "%x";
            ++VAR_0;
            break;
        case 'd':
            VAR_1 = "%d";
            ++VAR_0;
            break;
        default:
            VAR_1 = "%o";
            break;
        }
    }
    return VAR_1;
}
