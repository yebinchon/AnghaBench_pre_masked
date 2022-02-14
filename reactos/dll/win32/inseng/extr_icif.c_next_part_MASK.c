
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 char* FUNC_0 (char*,int *,int ) ;

__attribute__((used)) static char *FUNC_1(char **VAR_0, BOOL VAR_1)
{
    char *VAR_2 = *VAR_0;
    char *VAR_3 = *VAR_0;

    while (*VAR_3 && *VAR_3 != ',')
        VAR_3++;

    if (!*VAR_3)
    {
        *VAR_0 = FUNC_0(VAR_2, ((void*)0), VAR_1);
        return ((void*)0);
    }

    *VAR_3 = 0;
    *VAR_0 = FUNC_0(VAR_2, ((void*)0), VAR_1);
    return ++VAR_3;
}
