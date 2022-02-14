
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_2(TCHAR **VAR_2, TCHAR **VAR_3)
{
    TCHAR *VAR_4 = *VAR_3;
    BOOL VAR_5 = VAR_0;
    while (FUNC_1(*VAR_4))
        VAR_4++;
    if (!*VAR_4)
        return VAR_0;
    *VAR_2 = VAR_4;
    while (*VAR_4 && (VAR_5 || !FUNC_1(*VAR_4)))
        VAR_5 ^= (*VAR_4++ == FUNC_0('"'));
    *VAR_3 = VAR_4;
    return VAR_1;
}
