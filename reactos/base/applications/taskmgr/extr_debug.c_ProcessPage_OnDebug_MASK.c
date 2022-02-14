
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int strDebugger ;
typedef int si ;
typedef int pi ;
typedef int WCHAR ;
struct TYPE_6__ {int cb; int hProcess; int hThread; } ;
typedef TYPE_1__ STARTUPINFOW ;
typedef TYPE_1__ PROCESS_INFORMATION ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *,int *,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (int ,int *,int *,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_10 (int ,char*,int *,int *,int ,scalar_t__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (int *,int *,scalar_t__,int ) ;

void FUNC_13(void)
{
    DWORD VAR_14;
    WCHAR VAR_15[260];
    HKEY VAR_16;
    WCHAR VAR_17[260];
    WCHAR VAR_18[260];
    DWORD VAR_19;
    PROCESS_INFORMATION VAR_20;
    STARTUPINFOW VAR_21;
    HANDLE VAR_22;
    WCHAR VAR_23[256];
    WCHAR VAR_24[256];

    VAR_14 = FUNC_5();

    if (VAR_14 == 0)
        return;

    FUNC_6(VAR_12, VAR_5, VAR_23, FUNC_0(VAR_23));
    FUNC_6(VAR_12, VAR_3, VAR_24, FUNC_0(VAR_24));

    if (FUNC_7(VAR_13, VAR_23, VAR_24, VAR_11 | VAR_9) != VAR_6)
    {
        FUNC_4(VAR_15, FUNC_0(VAR_15));
        FUNC_6(VAR_12, VAR_4, VAR_23, FUNC_0(VAR_23));
        FUNC_7(VAR_13, VAR_15, VAR_23, VAR_10 | VAR_8);
        return;
    }

    if (FUNC_9(VAR_2, L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AeDebug", 0, VAR_7, &VAR_16) != VAR_0)
    {
        FUNC_4(VAR_15, FUNC_0(VAR_15));
        FUNC_6(VAR_12, VAR_4, VAR_23, FUNC_0(VAR_23));
        FUNC_7(VAR_13, VAR_15, VAR_23, VAR_10 | VAR_8);
        return;
    }

    VAR_19 = sizeof(VAR_18);
    if (FUNC_10(VAR_16, L"Debugger", ((void*)0), ((void*)0), (LPBYTE)VAR_18, &VAR_19) != VAR_0)
    {
        FUNC_4(VAR_15, FUNC_0(VAR_15));
        FUNC_6(VAR_12, VAR_4, VAR_23, FUNC_0(VAR_23));
        FUNC_7(VAR_13, VAR_15, VAR_23, VAR_10 | VAR_8);
        FUNC_8(VAR_16);
        return;
    }

    FUNC_8(VAR_16);

    VAR_22 = FUNC_2(((void*)0), VAR_1, VAR_1, ((void*)0));
    if (!VAR_22)
    {
        FUNC_4(VAR_15, FUNC_0(VAR_15));
        FUNC_6(VAR_12, VAR_4, VAR_23, FUNC_0(VAR_23));
        FUNC_7(VAR_13, VAR_15, VAR_23, VAR_10 | VAR_8);
        return;
    }

    FUNC_12(VAR_17, VAR_18, VAR_14, VAR_22);

    FUNC_11(&VAR_20, sizeof(VAR_20));
    FUNC_11(&VAR_21, sizeof(VAR_21));
    VAR_21.cb = sizeof(VAR_21);
    if (!FUNC_3(((void*)0), VAR_17, ((void*)0), ((void*)0), VAR_1, 0, ((void*)0), ((void*)0), &VAR_21, &VAR_20))
    {
        FUNC_4(VAR_15, FUNC_0(VAR_15));
        FUNC_6(VAR_12, VAR_4, VAR_23, FUNC_0(VAR_23));
        FUNC_7(VAR_13, VAR_15, VAR_23, VAR_10 | VAR_8);
    }
    else
    {
        FUNC_1(VAR_20.hThread);
        FUNC_1(VAR_20.hProcess);
    }

    FUNC_1(VAR_22);
}
