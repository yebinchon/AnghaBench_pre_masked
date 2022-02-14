
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char) ;

char* FUNC_1(char *VAR_0, const char *VAR_1, char **VAR_2)
{
    if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || (VAR_0 == ((void*)0) && *VAR_2 == ((void*)0)))
    {
        return ((void*)0);
    }

    if (!VAR_0)
        VAR_0 = *VAR_2;

    while (*VAR_0 && FUNC_0(VAR_1, *VAR_0))
        VAR_0++;
    if (!*VAR_0)
    {
        *VAR_2 = VAR_0;
        return ((void*)0);
    }

    *VAR_2 = VAR_0 + 1;
    while (**VAR_2 && !FUNC_0(VAR_1, **VAR_2))
        (*VAR_2)++;
    if (**VAR_2)
        *(*VAR_2)++ = '\0';

    return VAR_0;
}
