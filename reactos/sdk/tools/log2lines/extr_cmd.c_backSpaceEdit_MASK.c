
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char
*FUNC_0(char *VAR_0)
{
    char VAR_1;
    char *VAR_2 = VAR_0;
    char *VAR_3 = VAR_0;

    while (( VAR_1 = *VAR_2++ ))
    {
        switch (VAR_1)
        {
        case 128:
            if (VAR_3 > VAR_0)
                VAR_3 --;
            break;
        default:
            *VAR_3++ = VAR_1;
        }
    }
    *VAR_3 = '\0';

    return VAR_0;
}
