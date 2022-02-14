
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* lpszClassName; int hInstance; int lpfnWndProc; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 (int ,char*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int,int,int,int,int,scalar_t__,int ,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,char*,TYPE_1__*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,int ,int) ;
 int FUNC_16 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 (int,char*,...) ;
 int VAR_10 ;
 int FUNC_20 (scalar_t__,scalar_t__) ;
 int FUNC_21 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_22(void)
{
    HWND VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    WNDCLASSA VAR_16;

    VAR_11 = FUNC_1(0, "TestParentClass", "Test parent",
                              VAR_6 | VAR_9 | VAR_4,
                              100, 100, 200, 200, 0, 0, 0, ((void*)0));
    FUNC_19 (VAR_11 != 0, "Failed to create parent window\n");

    VAR_12 = FUNC_1(0, "TestParentClass", "Test parent 2",
                              VAR_6 | VAR_9,
                              200, 100, 200, 200, 0, 0, 0, ((void*)0));
    FUNC_19 (VAR_12 != 0, "Failed to create parent window\n");

    FUNC_19(FUNC_6(0, "#32770", &VAR_16), "GetClassInfo failed\n");
    VAR_16.lpszClassName = "MyDialogClass";
    VAR_16.hInstance = FUNC_8(((void*)0));
    VAR_16.lpfnWndProc = VAR_10;
    if (!FUNC_12(&VAR_16)) FUNC_17(0);

    FUNC_18();
    FUNC_13(VAR_12);
    VAR_13 = FUNC_7();
    FUNC_19(VAR_12 == VAR_13, "Wrong window has focus (%p != %p)\n", VAR_12, VAR_13);



    VAR_14 = FUNC_0(0, "CLASS_TEST_DIALOG_2", VAR_11, VAR_10, 0);
    FUNC_19(FUNC_10(VAR_14), "CreateDialogParam failed\n");
    FUNC_13(VAR_14);
    VAR_13 = FUNC_7();
    FUNC_19(VAR_14 == VAR_13, "Wrong window has focus (%p != %p)\n", VAR_14, VAR_13);
    FUNC_4(VAR_14, 0);
    FUNC_19(FUNC_11(VAR_11), "parent is not enabled\n");
    VAR_13 = FUNC_7();
    FUNC_19(VAR_11 == VAR_13, "Wrong window has focus (parent != active) (active: %p, parent: %p, dlg: %p, other: %p)\n", VAR_13, VAR_11, VAR_14, VAR_12);
    FUNC_2(VAR_14);
    FUNC_18();


    FUNC_3(VAR_11, VAR_0);
    VAR_14 = FUNC_1(0, "TestDialogClass", ((void*)0),
                          VAR_9|VAR_2|VAR_8|VAR_5,
                          0, 0, 100, 100, VAR_11, 0, 0, ((void*)0));
    FUNC_19(FUNC_10(VAR_14), "CreateDialogParam failed\n");
    FUNC_18();
    FUNC_13(VAR_12);
    FUNC_18();
    VAR_13 = FUNC_7();
    FUNC_19(VAR_13 == VAR_12, "Wrong foreground (%p != %p)\n", VAR_13, VAR_12);
    VAR_13 = FUNC_5();
    FUNC_19(VAR_13 == VAR_12, "Wrong active window (%p != %p)\n", VAR_13, VAR_12);
    FUNC_4(VAR_14, 0);
    FUNC_19(FUNC_11(VAR_11), "parent is not enabled\n");
    VAR_13 = FUNC_7();
    FUNC_19(VAR_12 == VAR_13, "Wrong window has focus (other != active) (active: %p, parent: %p, dlg: %p, other: %p)\n", VAR_13, VAR_11, VAR_14, VAR_12);
    FUNC_2(VAR_14);
    FUNC_18();

    FUNC_2( VAR_11 );

    VAR_11 = FUNC_1(0, "TestParentClass", "Test parent",
                              VAR_7 | VAR_9 | VAR_4,
                              100, 100, 200, 200, 0, 0, 0, ((void*)0));
    FUNC_19 (VAR_11 != 0, "Failed to create parent window\n");

    VAR_15 = FUNC_1(0, "TestWindowClass", "Test child",
                             VAR_6 | VAR_9 | VAR_4,
                             0, 0, 0, 0, 0, 0, 0, ((void*)0));
    FUNC_19 (VAR_15 != 0, "Failed to create child window\n");

    FUNC_14(VAR_15, VAR_11);

    FUNC_18();
    FUNC_13(VAR_12);
    VAR_13 = FUNC_7();
    FUNC_19(VAR_12 == VAR_13, "Wrong foreground window (%p != %p)\n", VAR_12, VAR_13);

    VAR_14 = FUNC_0(0, "CLASS_TEST_DIALOG_2", VAR_15, VAR_10, 0);
    FUNC_19(FUNC_10(VAR_14), "CreateDialogParam failed\n");

    FUNC_13(VAR_14);
    FUNC_20(VAR_14, VAR_15);

    VAR_13 = FUNC_7();
    FUNC_19(VAR_13 == VAR_15, "Wrong foreground window (active: %p, parent: %p, dlg: %p, other: %p child: %p)\n", VAR_13, VAR_11, VAR_14, VAR_12, VAR_15);

    FUNC_2(VAR_14);


    FUNC_15(VAR_15, VAR_1, FUNC_9(VAR_15, VAR_1) | VAR_3);

    FUNC_13(VAR_12);
    VAR_13 = FUNC_7();
    FUNC_19(VAR_12 == VAR_13, "Wrong foreground window (%p != %p)\n", VAR_12, VAR_13);

    VAR_14 = FUNC_0(0, "CLASS_TEST_DIALOG_2", VAR_15, VAR_10, 0);
    FUNC_19(FUNC_10(VAR_14), "CreateDialogParam failed\n");

    FUNC_13(VAR_14);
    FUNC_21(VAR_14, VAR_11);

    VAR_13 = FUNC_7();
    FUNC_19(VAR_13 == VAR_11, "Wrong foreground window (active: %p, parent: %p, dlg: %p, other: %p child: %p)\n", VAR_13, VAR_11, VAR_14, VAR_12, VAR_15);
    FUNC_2(VAR_14);
    FUNC_2(VAR_15);
    FUNC_2(VAR_11);
    FUNC_2(VAR_12);
    FUNC_18();

    FUNC_16(VAR_16.lpszClassName, VAR_16.hInstance);
}
