
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LPCWSTR ;
typedef int LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,int ,int const*,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;

LONG FUNC_2( HKEY VAR_2, LPCWSTR VAR_3, LPCWSTR VAR_4 )
{
    DWORD VAR_5;
    if (!VAR_4) VAR_4 = VAR_1;
    VAR_5 = (FUNC_1(VAR_4) + 1) * sizeof (WCHAR);
    return FUNC_0( VAR_2, VAR_3, 0, VAR_0, (const BYTE *)VAR_4, VAR_5 );
}
