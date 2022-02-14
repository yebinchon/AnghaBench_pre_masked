
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef unsigned int DWORD ;


 scalar_t__* FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static WCHAR *FUNC_3( WCHAR **VAR_0, DWORD VAR_1,
                                           WCHAR **VAR_2, DWORD VAR_3, DWORD *VAR_4 )
{
    WCHAR *VAR_5, *VAR_6;
    unsigned int VAR_7;

    *VAR_4 = sizeof(WCHAR);
    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) *VAR_4 += (FUNC_2( VAR_0[VAR_7] ) + 1) * sizeof(WCHAR);
    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) *VAR_4 += (FUNC_2( VAR_2[VAR_7] ) + 1) * sizeof(WCHAR);

    if (!(VAR_5 = VAR_6 = FUNC_0( *VAR_4 ))) return ((void*)0);

    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
    {
        FUNC_1( VAR_6, VAR_0[VAR_7] );
        VAR_6 += FUNC_2( VAR_6 ) + 1;
    }
    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    {
        FUNC_1( VAR_6, VAR_2[VAR_7] );
        VAR_6 += FUNC_2( VAR_6 ) + 1;
    }
    *VAR_6 = 0;
    return VAR_5;
}
