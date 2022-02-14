
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int UINT ;
typedef int LANGID ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (scalar_t__*,char) ;
 scalar_t__* FUNC_4 (scalar_t__ const*) ;

__attribute__((used)) static LANGID *FUNC_5( const WCHAR *VAR_0, DWORD *VAR_1 )
{
    UINT VAR_2, VAR_3 = 1;
    WCHAR *VAR_4 = FUNC_4( VAR_0 ), *VAR_5, *VAR_6;
    LANGID *VAR_7;

    if (!VAR_4) return ((void*)0);
    for (VAR_5 = VAR_6 = VAR_4; (VAR_6 = FUNC_3( VAR_6, ',' )); VAR_6++) VAR_3++;

    if (!(VAR_7 = FUNC_1( VAR_3 * sizeof(LANGID) )))
    {
        FUNC_2( VAR_4 );
        return ((void*)0);
    }
    VAR_2 = 0;
    while (*VAR_5)
    {
        VAR_6 = FUNC_3( VAR_5, ',' );
        if (VAR_6) *VAR_6 = 0;
        VAR_7[VAR_2] = FUNC_0( VAR_5 );
        if (!VAR_6) break;
        VAR_5 = VAR_6 + 1;
        VAR_2++;
    }
    FUNC_2( VAR_4 );
    *VAR_1 = VAR_3;
    return VAR_7;
}
