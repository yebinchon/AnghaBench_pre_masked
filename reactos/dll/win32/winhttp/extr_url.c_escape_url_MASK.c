
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef scalar_t__ const* LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__*,scalar_t__ const*,int) ;
 scalar_t__* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,scalar_t__ const*,int) ;
 scalar_t__ FUNC_3 (scalar_t__ const) ;
 int FUNC_4 (scalar_t__*,scalar_t__ const*) ;
 scalar_t__* FUNC_5 (scalar_t__ const*,char) ;

__attribute__((used)) static WCHAR *FUNC_6( LPCWSTR VAR_0, DWORD *VAR_1 )
{
    WCHAR *VAR_2;
    const WCHAR *VAR_3, *VAR_4;

    if ((VAR_3 = VAR_4 = FUNC_5( VAR_0, '/' )))
    {
        while (*VAR_4)
        {
            if (FUNC_3( *VAR_4 )) *VAR_1 += 2;
            VAR_4++;
        }
    }
    if (!(VAR_2 = FUNC_1( (*VAR_1 + 1) * sizeof(WCHAR) ))) return ((void*)0);
    if (!VAR_3) FUNC_4( VAR_2, VAR_0 );
    else
    {
        FUNC_2( VAR_2, VAR_0, (VAR_3 - VAR_0) * sizeof(WCHAR) );
        FUNC_0( VAR_2 + (VAR_3 - VAR_0), VAR_3, VAR_4 - VAR_3 );
    }
    return VAR_2;
}
