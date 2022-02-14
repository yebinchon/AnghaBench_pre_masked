
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPWSTR ;
typedef scalar_t__ BOOL ;


 char* FUNC_0 (char*,char) ;

LPWSTR FUNC_1(LPWSTR *VAR_0, WCHAR VAR_1, BOOL VAR_2)
{
    LPWSTR VAR_3 = *VAR_0;

    if (!*VAR_0)
        return ((void*)0);

    if (VAR_2 && *VAR_3 == '"')
    {
        WCHAR *VAR_4 = FUNC_0(VAR_3 + 1, '"');
        if (VAR_4)
        {
            *VAR_4 = 0;
            *VAR_0 = VAR_4 + 1;
            VAR_3 = VAR_3 + 1;
        }
    }

    *VAR_0 = FUNC_0(*VAR_0, VAR_1);
    if (*VAR_0)
        *(*VAR_0)++ = '\0';

    if (!*VAR_3)
        return ((void*)0);

    return VAR_3;
}
