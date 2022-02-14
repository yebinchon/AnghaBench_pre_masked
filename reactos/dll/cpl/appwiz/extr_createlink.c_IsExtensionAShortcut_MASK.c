
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int Buffer ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *,scalar_t__*,int ,scalar_t__*) ;
 int VAR_5 ;

BOOL
FUNC_4(LPWSTR VAR_6)
{
    HKEY VAR_7;
    WCHAR VAR_8[100];
    DWORD VAR_9;
    DWORD VAR_10;

    if (FUNC_2(VAR_2, VAR_6, 0, VAR_3, &VAR_7) != VAR_0)
        return VAR_1;

    if (FUNC_0(VAR_7))
    {
        FUNC_1(VAR_7);
        return VAR_5;
    }

    VAR_9 = sizeof(VAR_8);
    if (FUNC_3(VAR_7, ((void*)0), ((void*)0), &VAR_10, (LPBYTE)VAR_8, &VAR_9) != VAR_0 || VAR_10 != VAR_4)
    {
        FUNC_1(VAR_7);
        return VAR_1;
    }

    FUNC_1(VAR_7);

    if (FUNC_2(VAR_2, VAR_8, 0, VAR_3, &VAR_7) != VAR_0)
        return VAR_1;

    if (FUNC_0(VAR_7))
    {
        FUNC_1(VAR_7);
        return VAR_5;
    }

    FUNC_1(VAR_7);
    return VAR_1;
}
