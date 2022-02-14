
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0, const char *VAR_1, char VAR_2)
{
    char *VAR_3;

    if (FUNC_0(!VAR_0))
        return ((void*)0);

    if (FUNC_0(VAR_0 > VAR_1))
        return ((void*)0);

    VAR_3 = FUNC_1(VAR_0, VAR_2);
    if (FUNC_0(!VAR_3))
        return ((void*)0);

    *VAR_3 = '\0';
    return VAR_3 + 1;
}
