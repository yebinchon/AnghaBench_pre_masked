
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,scalar_t__*,int ,scalar_t__*) ;

BOOL FUNC_1( HKEY VAR_2, LPCWSTR VAR_3, DWORD *VAR_4)
{
    DWORD VAR_5, VAR_6 = sizeof (DWORD);
    LONG VAR_7 = FUNC_0(VAR_2, VAR_3, ((void*)0), &VAR_5, (LPBYTE) VAR_4, &VAR_6);
    return VAR_7 == VAR_0 && VAR_5 == VAR_1;
}
