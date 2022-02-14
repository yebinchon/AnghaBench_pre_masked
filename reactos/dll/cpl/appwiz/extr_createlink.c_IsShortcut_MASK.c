
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int Value ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,int *,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,char*) ;

BOOL
FUNC_2(HKEY VAR_3)
{
    WCHAR VAR_4[10];
    DWORD VAR_5;
    DWORD VAR_6;

    VAR_5 = sizeof(VAR_4);
    if (FUNC_0(VAR_3, L"IsShortcut", ((void*)0), &VAR_6, (LPBYTE)VAR_4, &VAR_5) != VAR_0)
        return VAR_1;

    if (VAR_6 != VAR_2)
        return VAR_1;

    return (FUNC_1(VAR_4, L"yes") == 0);
}
