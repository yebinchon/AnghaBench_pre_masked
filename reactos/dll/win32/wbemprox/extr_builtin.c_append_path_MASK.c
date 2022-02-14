
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static WCHAR *FUNC_3( const WCHAR *VAR_0, const WCHAR *VAR_1, UINT *VAR_2 )
{
    UINT VAR_3 = 0, VAR_4 = FUNC_2( VAR_1 );
    WCHAR *VAR_5;

    *VAR_2 = 0;
    if (VAR_0) VAR_3 = FUNC_2( VAR_0 );
    if (!(VAR_5 = FUNC_0( (VAR_3 + VAR_4 + 2) * sizeof(WCHAR) ))) return ((void*)0);
    if (VAR_0 && VAR_3)
    {
        FUNC_1( VAR_5, VAR_0, VAR_3 * sizeof(WCHAR) );
        VAR_5[VAR_3] = '\\';
        *VAR_2 += VAR_3 + 1;
    }
    FUNC_1( VAR_5 + *VAR_2, VAR_1, VAR_4 * sizeof(WCHAR) );
    *VAR_2 += VAR_4;
    VAR_5[*VAR_2] = 0;
    return VAR_5;
}
