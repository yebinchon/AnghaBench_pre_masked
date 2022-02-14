
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef size_t DWORD ;


 size_t FUNC_0 (scalar_t__ const*,size_t,scalar_t__*,scalar_t__**) ;

wchar_t* FUNC_1( wchar_t *VAR_0, const wchar_t *VAR_1, size_t VAR_2 )
{
    wchar_t* VAR_3;
    DWORD VAR_4 = FUNC_0( VAR_1, VAR_2, VAR_0, &VAR_3 );
    if( !VAR_4 || VAR_4 > VAR_2 )
    {
        *VAR_0 = 0;
        return ((void*)0);
    }
    return VAR_0;
}
