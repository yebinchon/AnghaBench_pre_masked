
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static TCHAR *FUNC_2(TCHAR **VAR_1)
{
    BOOL VAR_2 = VAR_0;
    TCHAR *VAR_3 = *VAR_1;
    TCHAR *VAR_4;
    for (VAR_4 = VAR_3; *VAR_4; VAR_4++)
    {
        if (!VAR_2 && (*VAR_4 == FUNC_0('/') || FUNC_1(*VAR_4)))
            break;
        VAR_2 ^= (*VAR_4 == FUNC_0('"'));
        VAR_4[-1] = *VAR_4;
    }
    VAR_4[-1] = FUNC_0('\0');
    *VAR_1 = VAR_4;
    return VAR_3 - 1;
}
