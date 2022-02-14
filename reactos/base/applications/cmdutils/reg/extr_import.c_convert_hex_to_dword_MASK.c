
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static BOOL FUNC_2(WCHAR *VAR_2, DWORD *VAR_3)
{
    WCHAR *VAR_4, *VAR_5;
    int VAR_6 = 0;

    while (*VAR_2 == ' ' || *VAR_2 == '\t') VAR_2++;
    if (!*VAR_2) goto error;

    VAR_4 = VAR_2;
    while (FUNC_0(*VAR_4))
    {
        VAR_6++;
        VAR_4++;
    }
    if (VAR_6 > 8) goto error;

    VAR_5 = VAR_4;
    while (*VAR_4 == ' ' || *VAR_4 == '\t') VAR_4++;
    if (*VAR_4 && *VAR_4 != ';') goto error;

    *VAR_5 = 0;
    *VAR_3 = FUNC_1(VAR_2, &VAR_5, 16);
    return VAR_1;

error:
    return VAR_0;
}
