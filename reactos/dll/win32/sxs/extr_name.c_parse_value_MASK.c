
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (char*,char const*,unsigned int) ;

__attribute__((used)) static WCHAR *FUNC_3( const WCHAR *VAR_0, unsigned int *VAR_1 )
{
    WCHAR *VAR_2;
    const WCHAR *VAR_3 = VAR_0;

    if (*VAR_3++ != '\"') return ((void*)0);
    while (*VAR_3 && *VAR_3 != '\"') VAR_3++;
    if (!*VAR_3) return ((void*)0);

    *VAR_1 = VAR_3 - VAR_0;
    if (!(VAR_2 = FUNC_1( FUNC_0(), 0, *VAR_1 * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_2( VAR_2, VAR_0 + 1, (*VAR_1 - 1) * sizeof(WCHAR) );
    VAR_2[*VAR_1 - 1] = 0;
    return VAR_2;
}
