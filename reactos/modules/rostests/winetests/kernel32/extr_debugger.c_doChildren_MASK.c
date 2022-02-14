
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct child_blackbox {int failures; } ;
typedef int si ;
typedef int blackbox ;
struct TYPE_7__ {int * hProcess; int * hThread; } ;
struct TYPE_6__ {int cb; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int * HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 char* FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 (int *,int) ;
 int VAR_5 ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (char const*,struct child_blackbox*,int) ;
 int FUNC_12 (char*,char*,char*,char const*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char const*) ;
 scalar_t__ FUNC_16 (char const*) ;
 char* FUNC_17 (char const*,char) ;

__attribute__((used)) static void FUNC_18(int VAR_6, char **VAR_7)
{
    const char *VAR_8 = "debugger children last";
    struct child_blackbox VAR_9;
    const char *VAR_10, *VAR_11;
    char VAR_12[VAR_3];
    PROCESS_INFORMATION VAR_13;
    STARTUPINFOA VAR_14;
    HANDLE VAR_15;
    char *VAR_16;
    BOOL VAR_17;

    if (!FUNC_14(VAR_7[3], "last")) return;

    VAR_10 = VAR_7[3];

    VAR_11 = FUNC_17(VAR_10, '\\');
    VAR_11 = VAR_11 ? VAR_11+1 : VAR_10;
    FUNC_15(VAR_12, VAR_11);
    FUNC_13(VAR_12, "_init");
    VAR_15 = FUNC_6(VAR_0, VAR_1, VAR_12);
    FUNC_9(VAR_15 != ((void*)0), "OpenEvent failed, last error %d.\n", FUNC_2());
    FUNC_7(VAR_15);
    FUNC_0(VAR_15);

    VAR_11 = FUNC_17(VAR_10, '\\');
    VAR_11 = VAR_11 ? VAR_11+1 : VAR_10;
    FUNC_15(VAR_12, VAR_11);
    FUNC_13(VAR_12, "_attach");
    VAR_15 = FUNC_6(VAR_0, VAR_1, VAR_12);
    FUNC_9(VAR_15 != ((void*)0), "OpenEvent failed, last error %d.\n", FUNC_2());
    FUNC_8(VAR_15, VAR_2);
    FUNC_0(VAR_15);

    VAR_16 = FUNC_4(FUNC_3(), 0, FUNC_16(VAR_7[0]) + FUNC_16(VAR_8) + 2);
    FUNC_12(VAR_16, "%s %s", VAR_7[0], VAR_8);

    FUNC_10(&VAR_14, 0, sizeof(VAR_14));
    VAR_14.cb = sizeof(VAR_14);
    VAR_17 = FUNC_1(((void*)0), VAR_16, ((void*)0), ((void*)0), VAR_1, 0, ((void*)0), ((void*)0), &VAR_14, &VAR_13);
    FUNC_9(VAR_17, "CreateProcess failed, last error %d.\n", FUNC_2());

    FUNC_9(FUNC_8(VAR_13.hProcess, 10000) == VAR_4,
            "Timed out waiting for the child to exit\n");

    VAR_17 = FUNC_0(VAR_13.hThread);
    FUNC_9(VAR_17, "CloseHandle failed, last error %d.\n", FUNC_2());
    VAR_17 = FUNC_0(VAR_13.hProcess);
    FUNC_9(VAR_17, "CloseHandle failed, last error %d.\n", FUNC_2());

    VAR_9.failures = VAR_5;
    FUNC_11(VAR_10, &VAR_9, sizeof(VAR_9));

    FUNC_5(FUNC_3(), 0, VAR_16);
}
