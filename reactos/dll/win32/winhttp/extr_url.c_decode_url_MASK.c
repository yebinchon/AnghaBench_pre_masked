
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPCWSTR ;
typedef int DWORD ;


 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,int *,int) ;

__attribute__((used)) static WCHAR *FUNC_3( LPCWSTR VAR_0, DWORD *VAR_1 )
{
    const WCHAR *VAR_2 = VAR_0;
    WCHAR VAR_3[3], *VAR_4, *VAR_5;

    if (!(VAR_5 = FUNC_0( *VAR_1 * sizeof(WCHAR) ))) return ((void*)0);
    VAR_4 = VAR_5;
    while (*VAR_1 > 0)
    {
        if (VAR_2[0] == '%' && FUNC_1( VAR_2[1] ) && FUNC_1( VAR_2[2] ))
        {
            VAR_3[0] = VAR_2[1];
            VAR_3[1] = VAR_2[2];
            VAR_3[2] = 0;
            *VAR_4++ = FUNC_2( VAR_3, ((void*)0), 16 );
            VAR_2 += 3;
            *VAR_1 -= 3;
        }
        else
        {
            *VAR_4++ = *VAR_2++;
            *VAR_1 -= 1;
        }
    }
    *VAR_1 = VAR_4 - VAR_5;
    return VAR_5;
}
