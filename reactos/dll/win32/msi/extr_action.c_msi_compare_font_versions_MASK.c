
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int const*,scalar_t__*,int *) ;

int FUNC_1( const WCHAR *VAR_0, const WCHAR *VAR_1 )
{
    DWORD VAR_2, VAR_3;

    FUNC_0( VAR_0, &VAR_2, ((void*)0) );
    FUNC_0( VAR_1, &VAR_3, ((void*)0) );

    if (VAR_2 > VAR_3) return 1;
    else if (VAR_2 < VAR_3) return -1;
    return 0;
}
