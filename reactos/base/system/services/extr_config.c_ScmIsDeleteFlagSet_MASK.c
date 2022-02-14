
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int ,scalar_t__*,int ,scalar_t__*) ;

BOOL
FUNC_1(HKEY VAR_1)
{
    DWORD VAR_2;
    DWORD VAR_3;
    DWORD VAR_4;
    DWORD VAR_5 = sizeof(DWORD);

    VAR_2 = FUNC_0(VAR_1,
                               L"DeleteFlag",
                               0,
                               &VAR_3,
                               (LPBYTE)&VAR_4,
                               &VAR_5);

    return (VAR_2 == VAR_0);
}
