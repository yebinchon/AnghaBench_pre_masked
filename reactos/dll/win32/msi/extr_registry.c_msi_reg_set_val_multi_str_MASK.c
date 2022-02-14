
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__* LPCWSTR ;
typedef int LONG ;
typedef int HKEY ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__*,int ,int ,int const*,int) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;

LONG FUNC_2( HKEY VAR_1, LPCWSTR VAR_2, LPCWSTR VAR_3 )
{
    LPCWSTR VAR_4 = VAR_3;
    while (*VAR_4) VAR_4 += FUNC_1(VAR_4) + 1;
    return FUNC_0( VAR_1, VAR_2, 0, VAR_0,
                           (const BYTE *)VAR_3, (VAR_4 + 1 - VAR_3) * sizeof(WCHAR) );
}
