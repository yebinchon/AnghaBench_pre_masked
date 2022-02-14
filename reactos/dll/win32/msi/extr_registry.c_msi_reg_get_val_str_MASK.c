
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__* LPWSTR ;
typedef int LPCWSTR ;
typedef int * LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int *,int *,int*) ;
 scalar_t__* FUNC_1 (int) ;

LPWSTR FUNC_2( HKEY VAR_1, LPCWSTR VAR_2 )
{
    DWORD VAR_3 = 0;
    LPWSTR VAR_4;
    LONG VAR_5;

    VAR_5 = FUNC_0(VAR_1, VAR_2, ((void*)0), ((void*)0), ((void*)0), &VAR_3);
    if (VAR_5 != VAR_0)
        return ((void*)0);

    VAR_3 += sizeof (WCHAR);
    VAR_4 = FUNC_1( VAR_3 );
    if (!VAR_4)
        return ((void*)0);
    VAR_4[0] = 0;
    FUNC_0(VAR_1, VAR_2, ((void*)0), ((void*)0), (LPBYTE) VAR_4, &VAR_3);
    return VAR_4;
}
