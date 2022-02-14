
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PWSTR ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int Buffer ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,scalar_t__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

DWORD FUNC_2(HKEY VAR_2, PWSTR VAR_3)
{
    WCHAR VAR_4[20] = { 0 };
    DWORD VAR_5, VAR_6, VAR_7;

    VAR_5 = sizeof(VAR_4) - sizeof(WCHAR);
    VAR_6 = 0;
    if (FUNC_0(VAR_2, VAR_3, ((void*)0), &VAR_7, (BYTE*)VAR_4, &VAR_5) == VAR_0 && VAR_7 == VAR_1)
    {
        VAR_6 = FUNC_1(VAR_4, ((void*)0), 16);
    }

    return VAR_6;
}
