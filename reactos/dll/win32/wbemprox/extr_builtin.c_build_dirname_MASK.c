
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static WCHAR *FUNC_3( const WCHAR *VAR_0, UINT *VAR_1 )
{
    const WCHAR *VAR_2 = VAR_0, *VAR_3;
    UINT VAR_4, VAR_5;
    WCHAR *VAR_6;

    if (!FUNC_1( VAR_2[0] ) || VAR_2[1] != ':' || VAR_2[2] != '\\' || VAR_2[3] != '\\' || !VAR_2[4]) return ((void*)0);
    VAR_3 = VAR_0 + 4;
    VAR_4 = FUNC_2( VAR_3 );
    VAR_2 = VAR_3 + VAR_4 - 1;
    if (*VAR_2 == '\\') return ((void*)0);

    while (VAR_2 >= VAR_3 && *VAR_2 != '\\') { VAR_4--; VAR_2--; };
    while (VAR_2 >= VAR_3 && *VAR_2 == '\\') { VAR_4--; VAR_2--; };

    if (!(VAR_6 = FUNC_0( (VAR_4 + 1) * sizeof(WCHAR) ))) return ((void*)0);
    for (VAR_5 = 0, VAR_2 = VAR_3; VAR_2 < VAR_3 + VAR_4; VAR_2++)
    {
        if (VAR_2[0] == '\\' && VAR_2[1] == '\\')
        {
            VAR_6[VAR_5++] = '\\';
            VAR_2++;
        }
        else VAR_6[VAR_5++] = *VAR_2;
    }
    VAR_6[VAR_5] = 0;
    *VAR_1 = VAR_5;
    return VAR_6;
}
