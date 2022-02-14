
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct child_blackbox {int failures; } ;
typedef int blackbox ;
struct TYPE_4__ {TYPE_1__* Peb; } ;
struct TYPE_3__ {int BeingDebugged; } ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char const*,struct child_blackbox*,int) ;
 int FUNC_11 (char*,char*,int *) ;

__attribute__((used)) static void FUNC_12(int VAR_4, char **VAR_5)
{
    struct child_blackbox VAR_6;
    const char *VAR_7;
    HANDLE VAR_8;
    DWORD VAR_9;
    BOOL VAR_10;
    BOOL VAR_11;

    VAR_7 = VAR_5[4];
    FUNC_11(VAR_5[3], "%08x", &VAR_9);

    VAR_8 = FUNC_5(VAR_1, VAR_0, VAR_9);
    FUNC_6(!!VAR_8, "OpenProcess failed, last error %#x.\n", FUNC_3());

    VAR_11 = FUNC_7(VAR_8, &VAR_10);
    FUNC_6(VAR_11, "CheckRemoteDebuggerPresent failed, last error %#x.\n", FUNC_3());
    FUNC_6(!VAR_10, "Expected debug == 0, got %#x.\n", VAR_10);

    VAR_11 = FUNC_1(VAR_9);
    FUNC_6(VAR_11, "DebugActiveProcess failed, last error %#x.\n", FUNC_3());

    VAR_11 = FUNC_7(VAR_8, &VAR_10);
    FUNC_6(VAR_11, "CheckRemoteDebuggerPresent failed, last error %#x.\n", FUNC_3());
    FUNC_6(VAR_10, "Expected debug != 0, got %#x.\n", VAR_10);

    VAR_11 = FUNC_8(VAR_9);
    FUNC_6(VAR_11, "DebugActiveProcessStop failed, last error %#x.\n", FUNC_3());

    VAR_11 = FUNC_7(VAR_8, &VAR_10);
    FUNC_6(VAR_11, "CheckRemoteDebuggerPresent failed, last error %#x.\n", FUNC_3());
    FUNC_6(!VAR_10, "Expected debug == 0, got %#x.\n", VAR_10);

    VAR_11 = FUNC_0(VAR_8);
    FUNC_6(VAR_11, "CloseHandle failed, last error %#x.\n", FUNC_3());

    VAR_11 = FUNC_9();
    FUNC_6(VAR_11, "Expected ret != 0, got %#x.\n", VAR_11);
    VAR_11 = FUNC_7(FUNC_2(), &VAR_10);
    FUNC_6(VAR_11, "CheckRemoteDebuggerPresent failed, last error %#x.\n", FUNC_3());
    FUNC_6(VAR_10, "Expected debug != 0, got %#x.\n", VAR_10);

    FUNC_4()->Peb->BeingDebugged = VAR_0;

    VAR_11 = FUNC_9();
    FUNC_6(!VAR_11, "Expected ret != 0, got %#x.\n", VAR_11);
    VAR_11 = FUNC_7(FUNC_2(), &VAR_10);
    FUNC_6(VAR_11, "CheckRemoteDebuggerPresent failed, last error %#x.\n", FUNC_3());
    FUNC_6(VAR_10, "Expected debug != 0, got %#x.\n", VAR_10);

    FUNC_4()->Peb->BeingDebugged = VAR_2;

    VAR_6.failures = VAR_3;
    FUNC_10(VAR_7, &VAR_6, sizeof(VAR_6));
}
