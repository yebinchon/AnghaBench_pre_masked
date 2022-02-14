
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static WCHAR *FUNC_2( WCHAR VAR_0, const WCHAR *VAR_1, UINT VAR_2 )
{
    UINT VAR_3 = 0;
    WCHAR *VAR_4;

    if (!(VAR_4 = FUNC_0( (VAR_2 + 6) * sizeof(WCHAR) ))) return ((void*)0);
    VAR_4[VAR_3++] = VAR_0;
    VAR_4[VAR_3++] = ':';
    VAR_4[VAR_3++] = '\\';
    if (VAR_1 && VAR_2)
    {
        FUNC_1( VAR_4 + VAR_3, VAR_1, VAR_2 * sizeof(WCHAR) );
        VAR_3 += VAR_2;
        VAR_4[VAR_3++] = '\\';
    }
    VAR_4[VAR_3++] = '*';
    VAR_4[VAR_3] = 0;
    return VAR_4;
}
