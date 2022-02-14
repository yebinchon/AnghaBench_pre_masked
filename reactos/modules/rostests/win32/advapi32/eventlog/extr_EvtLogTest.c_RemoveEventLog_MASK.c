
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef scalar_t__ LONG ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,char*,int*,int *,int *,int *,int *) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,char*,int ,int,scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__,int *,int *,int *,int *,int*,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (char*,...) ;

BOOL FUNC_10(LPCWSTR VAR_7)
{
    BOOL VAR_8 = VAR_1;
    LONG VAR_9;
    HKEY VAR_10, VAR_11;
    DWORD VAR_12, VAR_13;
    LPWSTR VAR_14 = ((void*)0);

    FUNC_9(L"Deleting log %s...", VAR_7);

    VAR_9 = FUNC_7(VAR_2,
                         L"SYSTEM\\CurrentControlSet\\Services\\Eventlog",
                         0, VAR_3,
                         &VAR_10);
    if (VAR_9 != VAR_0)
        goto Quit;

    VAR_9 = FUNC_7(VAR_10,
                         VAR_7,
                         0, VAR_4 | VAR_5,
                         &VAR_11);
    if (VAR_9 != VAR_0)
        goto Quit;

    VAR_9 = FUNC_8(VAR_11,
                            ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                            &VAR_12,
                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (VAR_9 != VAR_0)
        goto Quit;

    VAR_12++;

    VAR_14 = (LPWSTR)FUNC_1(FUNC_0(), 0, VAR_12 * sizeof(WCHAR));
    if (!VAR_14)
        goto Quit;

    VAR_13 = VAR_12;
    while (FUNC_5(VAR_11,
                         0,
                         VAR_14,
                         &VAR_13,
                         ((void*)0), ((void*)0), ((void*)0), ((void*)0)) == VAR_0)
    {
        FUNC_4(VAR_11, VAR_14);
        VAR_13 = VAR_12;
    }

    FUNC_6(VAR_11);

    FUNC_2(FUNC_0(), 0, VAR_14);

    VAR_8 = VAR_6;

Quit:
    if (VAR_8)
    {
        FUNC_3(VAR_11);
        FUNC_4(VAR_10, VAR_7);

        FUNC_9(L"Success\n");
    }
    else
    {
        if (VAR_11)
            FUNC_3(VAR_11);

        FUNC_9(L"Failure\n");
    }

    if (VAR_10)
        FUNC_3(VAR_10);

    return VAR_8;
}
