
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef size_t UINT ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static WCHAR *FUNC_2( const WCHAR *VAR_0 )
{
    UINT VAR_1;
    WCHAR *VAR_2;

    if (!(VAR_2 = FUNC_0( (FUNC_1( VAR_0 ) + 1) * sizeof(WCHAR) )))
        return ((void*)0);

    for (VAR_1 = 0; VAR_0[VAR_1]; VAR_1++)
    {
        if (VAR_0[VAR_1] == '\\' || VAR_0[VAR_1] == '/') VAR_2[VAR_1] = '|';
        else VAR_2[VAR_1] = VAR_0[VAR_1];
    }
    VAR_2[VAR_1] = 0;
    return VAR_2;
}
