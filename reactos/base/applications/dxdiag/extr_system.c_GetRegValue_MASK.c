
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int*,int *,scalar_t__*,int ,scalar_t__*) ;
 int VAR_3 ;

BOOL
FUNC_3(HKEY VAR_4, LPWSTR VAR_5, LPWSTR VAR_6, DWORD VAR_7, LPWSTR VAR_8, DWORD VAR_9)
{
    HKEY VAR_10;
    LONG VAR_11;
    DWORD VAR_12;
    DWORD VAR_13;

    if (FUNC_1(VAR_4, VAR_5, 0, VAR_2, &VAR_10) != VAR_0)
        return VAR_1;

    VAR_13 = VAR_9;
    VAR_11 = FUNC_2(VAR_10, VAR_6, ((void*)0), &VAR_12, (LPBYTE)VAR_8, &VAR_13);
    FUNC_0(VAR_10);

    if (VAR_11 != VAR_0)
        return VAR_1;

    if (VAR_12 != VAR_7)
        return VAR_1;

    if (VAR_9 == sizeof(DWORD))
        return VAR_3;

    VAR_8[(VAR_9 / sizeof(WCHAR))-1] = L'\0';
    return VAR_3;
}
