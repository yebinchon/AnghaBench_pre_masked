
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__* FUNC_1 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;

__attribute__((used)) static LPTSTR
FUNC_3(TCHAR *VAR_0)
{
    TCHAR *VAR_1;
    if (*VAR_0 == FUNC_0('"'))
    {
        VAR_0 = (LPTSTR)FUNC_2(VAR_0 + 1);

        VAR_1 = FUNC_1(VAR_0, FUNC_0('"'));
        if (VAR_1)
            *VAR_1 = FUNC_0('\0');
    }
    return VAR_0;
}
