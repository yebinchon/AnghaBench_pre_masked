
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ TCHAR ;


 scalar_t__ FUNC_0 (char) ;

VOID
FUNC_1(TCHAR *VAR_0)
{
    TCHAR *VAR_1 = VAR_0;
    for (; *VAR_0; VAR_0++)
    {
        if (*VAR_0 != FUNC_0('"'))
            *VAR_1++ = *VAR_0;
    }
    *VAR_1 = FUNC_0('\0');
}
