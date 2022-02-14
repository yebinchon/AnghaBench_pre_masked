
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;

char *FUNC_1(char *VAR_0, char **VAR_1, BOOL VAR_2)
{
    char *VAR_3;

    for (; *VAR_0; VAR_0++)
    {
        if (*VAR_0 != '\t' && *VAR_0 != ' ')
            break;
    }

    if (!*VAR_0)
    {
        if (VAR_1) *VAR_1 = VAR_0;
        return VAR_0;
    }

    VAR_3 = VAR_0 + FUNC_0(VAR_0) - 1;

    for (; VAR_3 > VAR_0; VAR_3--)
    {
        if (*VAR_3 != '\t' && *VAR_3 != ' ')
            break;
        *VAR_3 = 0;
    }

    if (VAR_2 && VAR_3 != VAR_0)
    {
        if (*VAR_3 == '"' && *VAR_0 == '"')
        {
            VAR_0++;
            *VAR_3 = 0;
        }
    }

    if (VAR_1) *VAR_1 = VAR_3;
    return VAR_0;
}
