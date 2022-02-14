
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;


 char* FUNC_0 (int) ;

__attribute__((used)) static WCHAR *FUNC_1( WCHAR VAR_0, const WCHAR *VAR_1 )
{
    UINT VAR_2 = 0, VAR_3 = 0;
    const WCHAR *VAR_4;
    WCHAR *VAR_5;

    for (VAR_4 = VAR_1; *VAR_4; VAR_4++)
    {
        if (*VAR_4 == '\\') VAR_3 += 2;
        else VAR_3++;
    };
    if (!(VAR_5 = FUNC_0( (VAR_3 + 5) * sizeof(WCHAR) ))) return ((void*)0);
    VAR_5[VAR_2++] = VAR_0;
    VAR_5[VAR_2++] = ':';
    VAR_5[VAR_2++] = '\\';
    VAR_5[VAR_2++] = '\\';
    for (VAR_4 = VAR_1; *VAR_4; VAR_4++)
    {
        if (*VAR_4 != '\\') VAR_5[VAR_2++] = *VAR_4;
        else
        {
            VAR_5[VAR_2++] = '\\';
            VAR_5[VAR_2++] = '\\';
        }
    }
    VAR_5[VAR_2] = 0;
    return VAR_5;
}
