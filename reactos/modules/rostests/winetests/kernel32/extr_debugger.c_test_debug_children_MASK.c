
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct child_blackbox {int failures; } ;
typedef int si ;
typedef int blackbox ;
struct TYPE_10__ {scalar_t__ dwDebugEventCode; scalar_t__ dwProcessId; int dwThreadId; } ;
struct TYPE_9__ {scalar_t__ dwProcessId; int * hProcess; int * hThread; } ;
struct TYPE_8__ {int cb; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int * HANDLE ;
typedef int DWORD ;
typedef TYPE_3__ DEBUG_EVENT ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int * FUNC_2 (int *,int,int,char*) ;
 int FUNC_3 (int *,char*,int *,int *,int,int,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 char* FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,struct child_blackbox*,int) ;
 int FUNC_15 (TYPE_1__*,int ,int) ;
 int FUNC_16 (int,char*,int) ;
 int FUNC_17 (int *,int*) ;
 int VAR_6 ;
 int FUNC_18 (char*,char*,char*,char const*,char*) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*,char*) ;
 scalar_t__ FUNC_21 (char const*) ;
 char* FUNC_22 (char*,char) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static void FUNC_24(char *VAR_7, DWORD VAR_8, BOOL VAR_9)
{
    const char *VAR_10 = "debugger children";
    struct child_blackbox VAR_11;
    char VAR_12[VAR_4], *VAR_13;
    char VAR_14[VAR_4];
    PROCESS_INFORMATION VAR_15;
    STARTUPINFOA VAR_16;
    HANDLE VAR_17, VAR_18;
    char *VAR_19;
    BOOL VAR_20, VAR_21;
    BOOL VAR_22 = VAR_2;

    if (!VAR_6 || !&FUNC_17)
    {
        FUNC_23("DebugActiveProcessStop or CheckRemoteDebuggerPresent not available, skipping test.\n");
        return;
    }

    FUNC_13(VAR_12);
    VAR_19 = FUNC_8(FUNC_7(), 0, FUNC_21(VAR_7) + FUNC_21(VAR_10) + FUNC_21(VAR_12) + 5);
    FUNC_18(VAR_19, "%s %s \"%s\"", VAR_7, VAR_10, VAR_12);

    VAR_13 = FUNC_22(VAR_12, '\\');
    VAR_13 = VAR_13 ? VAR_13+1 : VAR_12;
    FUNC_20(VAR_14, VAR_13);
    FUNC_19(VAR_14, "_init");
    VAR_17 = FUNC_2(((void*)0), VAR_2, VAR_2, VAR_14);
    FUNC_16(VAR_17 != ((void*)0), "OpenEvent failed, last error %d.\n", FUNC_6());

    VAR_13 = FUNC_22(VAR_12, '\\');
    VAR_13 = VAR_13 ? VAR_13+1 : VAR_12;
    FUNC_20(VAR_14, VAR_13);
    FUNC_19(VAR_14, "_attach");
    VAR_18 = FUNC_2(((void*)0), VAR_2, VAR_8!=0, VAR_14);
    FUNC_16(VAR_18 != ((void*)0), "CreateEvent failed, last error %d.\n", FUNC_6());

    FUNC_15(&VAR_16, 0, sizeof(VAR_16));
    VAR_16.cb = sizeof(VAR_16);

    VAR_21 = FUNC_3(((void*)0), VAR_19, ((void*)0), ((void*)0), VAR_2, VAR_8, ((void*)0), ((void*)0), &VAR_16, &VAR_15);
    FUNC_16(VAR_21, "CreateProcess failed, last error %d.\n", FUNC_6());
    FUNC_9(FUNC_7(), 0, VAR_19);
    if (!VAR_8)
    {
        FUNC_12(VAR_17, VAR_3);
        VAR_21 = FUNC_4(VAR_15.dwProcessId);
        FUNC_16(VAR_21, "DebugActiveProcess failed, last error %d.\n", FUNC_6());
        VAR_21 = FUNC_10(VAR_18);
        FUNC_16(VAR_21, "SetEvent failed, last error %d.\n", FUNC_6());
    }

    VAR_21 = FUNC_17(VAR_15.hProcess, &VAR_20);
    FUNC_16(VAR_21, "CheckRemoteDebuggerPresent failed, last error %d.\n", FUNC_6());
    FUNC_16(VAR_20, "Expected debug != 0, got %x.\n", VAR_20);

    for (;;)
    {
        DEBUG_EVENT VAR_23;

        VAR_21 = FUNC_11(&VAR_23, VAR_3);
        FUNC_16(VAR_21, "WaitForDebugEvent failed, last error %d.\n", FUNC_6());
        if (!VAR_21) break;

        if (VAR_23.dwDebugEventCode==VAR_1 && VAR_23.dwProcessId==VAR_15.dwProcessId) break;
        else if (VAR_23.dwProcessId != VAR_15.dwProcessId) VAR_22 = VAR_5;

        VAR_21 = FUNC_1(VAR_23.dwProcessId, VAR_23.dwThreadId, VAR_0);
        FUNC_16(VAR_21, "ContinueDebugEvent failed, last error %d.\n", FUNC_6());
        if (!VAR_21) break;
    }
    if(VAR_9)
        FUNC_16(VAR_22, "didn't get any child events (flag: %x).\n", VAR_8);
    else
        FUNC_16(!VAR_22, "got child event (flag: %x).\n", VAR_8);
    FUNC_0(VAR_17);
    FUNC_0(VAR_18);

    VAR_21 = FUNC_0(VAR_15.hThread);
    FUNC_16(VAR_21, "CloseHandle failed, last error %d.\n", FUNC_6());
    VAR_21 = FUNC_0(VAR_15.hProcess);
    FUNC_16(VAR_21, "CloseHandle failed, last error %d.\n", FUNC_6());

    FUNC_14(VAR_12, &VAR_11, sizeof(VAR_11));
    FUNC_16(!VAR_11.failures, "Got %d failures from child process.\n", VAR_11.failures);

    VAR_21 = FUNC_5(VAR_12);
    FUNC_16(VAR_21, "DeleteFileA failed, last error %d.\n", FUNC_6());
}
