
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,char*) ;

__attribute__((used)) static BOOL FUNC_1(WCHAR **VAR_2, WCHAR **VAR_3)
{
    BOOL VAR_4 = VAR_0;
    WCHAR *VAR_5 = *VAR_3;
    VAR_5 += FUNC_0(VAR_5, L" \t");
    if (!*VAR_5)
        return VAR_0;
    *VAR_2 = VAR_5;
    do
    {
        if (!VAR_4 && (*VAR_5 == L' ' || *VAR_5 == L'\t'))
            break;
        VAR_4 ^= (*VAR_5++ == L'"');
    } while (*VAR_5);
    *VAR_3 = VAR_5;
    return VAR_1;
}
