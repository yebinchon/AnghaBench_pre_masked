
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;

char *FUNC_3(const char *VAR_0, const char *VAR_1)
{
    size_t VAR_2;

    if (*VAR_1 == '\0')
        return (char *) VAR_0;
    VAR_2 = FUNC_1(VAR_1);
    for (; (VAR_0 = FUNC_0(VAR_0, *VAR_1)) != 0; VAR_0++)
        if (FUNC_2(VAR_0, VAR_1, VAR_2) == 0)
            return (char *) VAR_0;
    return 0;
}
