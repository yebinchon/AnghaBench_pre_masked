
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef int INSTALLUI_HANDLER_RECORD ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_19 () ;
 char* VAR_12 ;
 int FUNC_20 (int,char*,...) ;
 int FUNC_21 (int ,char*,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_22 (int ,int *) ;
 int FUNC_23 (char*) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_24(void)
{
    INSTALLUI_HANDLER_RECORD VAR_15;
    MSIHANDLE VAR_16, VAR_17;
    UINT VAR_18;

    if (!VAR_14)
    {
        FUNC_23("interactive ControlEvent tests\n");
        return;
    }

    FUNC_8(VAR_5, ((void*)0));

    FUNC_6(VAR_11, VAR_4, ((void*)0));
    VAR_18 = FUNC_7(VAR_10, VAR_6, ((void*)0), &VAR_15);

    FUNC_19();

    FUNC_0(((void*)0));

    VAR_16 = FUNC_18();
    FUNC_20(VAR_16, "failed to create database\n");

    FUNC_17("forcecodepage.idt", "\r\n\r\n1252\t_ForceCodepage\r\n");
    VAR_18 = FUNC_4(VAR_16, VAR_0, "forcecodepage.idt");
    FUNC_20(VAR_18 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_18);

    FUNC_16(VAR_16);
    FUNC_12(VAR_16, "'spawn', 50, 50, 100, 100, 3, 'button'");
    FUNC_12(VAR_16, "'spawn2', 50, 50, 100, 100, 3, 'button'");
    FUNC_12(VAR_16, "'child1', 50, 50, 80, 40, 3, 'exit'");
    FUNC_12(VAR_16, "'child2', 50, 50, 80, 40, 3, 'exit'");

    FUNC_13(VAR_16);
    FUNC_9(VAR_16, "'spawn', 'button', 'PushButton', 10, 10, 66, 17, 3, 'Click me'");
    FUNC_9(VAR_16, "'spawn2', 'button', 'PushButton', 10, 10, 66, 17, 3, 'Click me'");
    FUNC_9(VAR_16, "'child1', 'exit', 'PushButton', 10, 10, 66, 17, 3, 'Click me'");
    FUNC_9(VAR_16, "'child2', 'exit', 'PushButton', 10, 10, 66, 17, 3, 'Click me'");

    FUNC_14(VAR_16);
    FUNC_10(VAR_16, "'child1', 'exit', 'EndDialog', 'Exit', 1, 1");
    FUNC_10(VAR_16, "'child2', 'exit', 'EndDialog', 'Exit', 1, 1");

    FUNC_15(VAR_16);
    FUNC_11(VAR_16, "'custom', 51, 'dummy', 'dummy value'");


    FUNC_10(VAR_16, "'spawn', 'button', 'SpawnDialog', 'child1', 1, 1");
    FUNC_10(VAR_16, "'spawn', 'button', 'DoAction', 'custom', 1, 2");


    FUNC_10(VAR_16, "'spawn2', 'button', 'SpawnDialog', 'child1', 1, 1");
    FUNC_10(VAR_16, "'spawn2', 'button', 'SpawnDialog', 'child2', 1, 2");
    FUNC_10(VAR_16, "'spawn2', 'button', 'DoAction', 'custom', 1, 3");

    VAR_18 = FUNC_22(VAR_16, &VAR_17);
    FUNC_20(VAR_18 == VAR_2, "failed to create package: %u\n", VAR_18);
    FUNC_21(VAR_13, "MsiOpenPackage()", VAR_3);

    VAR_18 = FUNC_5(VAR_17, "spawn");
    FUNC_20(VAR_18 == VAR_1, "expected ERROR_INSTALL_USEREXIT, got %u\n", VAR_18);
    FUNC_21(VAR_9, "control event: spawn", VAR_3);

    VAR_18 = FUNC_5(VAR_17, "spawn2");
    FUNC_20(VAR_18 == VAR_1, "expected ERROR_INSTALL_USEREXIT, got %u\n", VAR_18);
    FUNC_21(VAR_8, "control event: spawn2", VAR_3);

    FUNC_3(VAR_17);
    FUNC_21(VAR_7, "MsiCloseHandle()", VAR_3);

    FUNC_1();
    FUNC_2(VAR_12);
    FUNC_2("forcecodepage.idt");
}
