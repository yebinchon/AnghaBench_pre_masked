
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const wchar_t ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static
wchar_t * FUNC_1(const wchar_t *VAR_0, const wchar_t *VAR_1)
{
    wchar_t *VAR_2;
    wchar_t *VAR_3;
    wchar_t *VAR_4;
    VAR_2 = (wchar_t *)VAR_0;
    while (*VAR_2)
    {
        if (FUNC_0(*VAR_2) == FUNC_0(*VAR_1))
        {
            VAR_3 = VAR_2;
            VAR_4 = (wchar_t *)VAR_1;
            while (*VAR_3 && *VAR_4 && FUNC_0(*VAR_3) == FUNC_0(*VAR_4))
            {
                VAR_4++;
                VAR_3++;
            }
            if (!*VAR_4)
                return VAR_2;
        }
        VAR_2++;
    }
    return ((void*)0);
}
