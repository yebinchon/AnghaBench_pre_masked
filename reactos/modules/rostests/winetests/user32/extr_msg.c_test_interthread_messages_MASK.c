
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wnd_event {scalar_t__ hwnd; int * start_event; int * stop_event; int * grand_child; } ;
typedef int buf ;
typedef int * WNDPROC ;
typedef int ULONG_PTR ;
struct TYPE_4__ {scalar_t__ hwnd; int wParam; scalar_t__ lParam; int message; } ;
typedef TYPE_1__ MSG ;
typedef scalar_t__ LPARAM ;
typedef int * HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *,scalar_t__,int ,int,scalar_t__) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,int ,int ,int *) ;
 void* FUNC_3 (int *,int ,int ,int *) ;
 int * FUNC_4 (int *,int ,int ,struct wnd_event*,int ,int *) ;
 scalar_t__ FUNC_5 (int ,char*,char*,int,int,int,int,int,int ,int ,int ,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int,int **,int ,int,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_14 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_15 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_18 (int *,int) ;
 int VAR_15 ;
 scalar_t__ FUNC_19 (int) ;
 int VAR_16 ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int VAR_17 ;
 int FUNC_23 (char*,char*) ;
 int FUNC_24 (char*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_25 (char*,int ,int) ;
 int FUNC_26 (int,char*,...) ;
 int FUNC_27 (int ,char*,int ) ;
 int FUNC_28 (int *,int *) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int **) ;
 int FUNC_31 (int *) ;
 int * FUNC_32 (char*) ;
 int VAR_20 ;
 int FUNC_33 (char*) ;

__attribute__((used)) static void FUNC_34(void)
{
    HANDLE VAR_21, VAR_22, VAR_23, VAR_24;
    ULONG_PTR VAR_25;
    DWORD VAR_26;
    WNDPROC VAR_27;
    MSG VAR_28;
    char VAR_29[256];
    int VAR_30, VAR_31;
    struct wnd_event VAR_32;
    BOOL VAR_33;

    VAR_32.start_event = FUNC_3(((void*)0), 0, 0, ((void*)0));
    if (!VAR_32.start_event)
    {
        FUNC_33("skipping interthread message test under win9x\n");
        return;
    }

    VAR_21 = FUNC_4(((void*)0), 0, VAR_20, &VAR_32, 0, &VAR_26);
    FUNC_26(VAR_21 != ((void*)0), "CreateThread failed, error %d\n", FUNC_9());

    FUNC_26(FUNC_18(VAR_32.start_event, VAR_4) == VAR_8, "WaitForSingleObject failed\n");

    FUNC_1(VAR_32.start_event);

    FUNC_17(0xdeadbeef);
    FUNC_26(!FUNC_7(VAR_32.hwnd), "DestroyWindow succeeded\n");
    FUNC_26(FUNC_9() == VAR_0 || FUNC_9() == 0xdeadbeef,
       "wrong error code %d\n", FUNC_9());

    VAR_27 = (WNDPROC)FUNC_10(VAR_32.hwnd, VAR_3);
    FUNC_26(VAR_27 != ((void*)0), "GetWindowLongPtrA(GWLP_WNDPROC) error %d\n", FUNC_9());

    VAR_31 = FUNC_24("window caption text");
    FUNC_25(VAR_29, 0, sizeof(VAR_29));
    FUNC_17(0xdeadbeef);
    VAR_30 = FUNC_0(VAR_27, VAR_32.hwnd, VAR_9, sizeof(VAR_29), (LPARAM)VAR_29);
    FUNC_26(VAR_30 == VAR_31, "CallWindowProcA(WM_GETTEXT) error %d, len %d, expected len %d\n", FUNC_9(), VAR_30, VAR_31);
    FUNC_26(!FUNC_23(VAR_29, "window caption text"), "window text mismatch\n");

    VAR_28.hwnd = VAR_32.hwnd;
    VAR_28.message = VAR_9;
    VAR_28.wParam = sizeof(VAR_29);
    VAR_28.lParam = (LPARAM)VAR_29;
    FUNC_25(VAR_29, 0, sizeof(VAR_29));
    FUNC_17(0xdeadbeef);
    VAR_30 = FUNC_8(&VAR_28);
    FUNC_26((!VAR_30 && FUNC_9() == VAR_1) || FUNC_19(VAR_30),
       "DispatchMessageA(WM_GETTEXT) succeeded on another thread window: ret %d, error %d\n", VAR_30, FUNC_9());


    VAR_28.hwnd = VAR_32.hwnd;
    VAR_28.message = VAR_11;
    VAR_28.wParam = 0;
    VAR_28.lParam = FUNC_10(VAR_32.hwnd, VAR_3);
    FUNC_17(0xdeadbeef);
    VAR_30 = FUNC_8(&VAR_28);
    FUNC_26(!VAR_30 && FUNC_9() == 0xdeadbeef,
       "DispatchMessageA(WM_TIMER) failed on another thread window: ret %d, error %d\n", VAR_30, FUNC_9());

    VAR_33 = FUNC_14(VAR_32.hwnd, VAR_10, 0, 0);
    FUNC_26( VAR_33, "PostMessageA(WM_QUIT) error %d\n", FUNC_9());

    FUNC_26(FUNC_18(VAR_21, VAR_4) == VAR_8, "WaitForSingleObject failed\n");
    FUNC_1(VAR_21);

    FUNC_26(!FUNC_11(VAR_32.hwnd), "window should be destroyed on thread exit\n");

    VAR_32.hwnd = FUNC_5(0, "TestParentClass", "Test parent", VAR_13 | VAR_14,
                              100, 100, 200, 200, 0, 0, 0, ((void*)0));
    FUNC_26 (VAR_32.hwnd != 0, "Failed to create parent window\n");
    FUNC_21();
    FUNC_22();
    VAR_17++;
    VAR_32.start_event = FUNC_2( ((void*)0), VAR_7, VAR_2, ((void*)0) );
    VAR_32.stop_event = FUNC_2( ((void*)0), VAR_7, VAR_2, ((void*)0) );
    VAR_21 = FUNC_4( ((void*)0), 0, VAR_16, &VAR_32, 0, &VAR_26 );
    for (;;)
    {
        VAR_33 = FUNC_12(1, &VAR_32.start_event, VAR_2, 1000, VAR_6);
        if (VAR_33 != 1) break;
        while (FUNC_13(&VAR_28, 0, 0, 0, VAR_5)) FUNC_8(&VAR_28);
    }
    FUNC_26( !VAR_33, "MsgWaitForMultipleObjects failed %x\n", VAR_33 );

    FUNC_16( VAR_32.stop_event );
    VAR_33 = FUNC_18( VAR_21, 5000 );
    FUNC_26( !VAR_33, "WaitForSingleObject failed %x\n", VAR_33 );
    FUNC_1( VAR_21 );

    VAR_33 = FUNC_18( VAR_32.grand_child, 5000 );
    FUNC_26( !VAR_33, "WaitForSingleObject failed %x\n", VAR_33 );
    FUNC_1( VAR_32.grand_child );

    FUNC_1( VAR_32.start_event );
    FUNC_1( VAR_32.stop_event );
    FUNC_21();
    FUNC_27(VAR_15, "destroy child on thread exit", VAR_2);
    VAR_17--;
    FUNC_7( VAR_32.hwnd );


    if (!&FUNC_28)
    {
        FUNC_33("Activation contexts are not supported, skipping\n");
        return;
    }

    FUNC_20("testdep1.manifest", VAR_18);
    FUNC_20("main.manifest", VAR_19);

    VAR_22 = FUNC_32("main.manifest");
    FUNC_6("testdep1.manifest");
    FUNC_6("main.manifest");

    VAR_23 = (void*)0xdeadbeef;
    VAR_33 = FUNC_30(&VAR_23);
    FUNC_26(VAR_33, "GetCurrentActCtx failed: %u\n", FUNC_9());
    FUNC_26(VAR_23 == 0, "active context %p\n", VAR_23);

    VAR_32.start_event = FUNC_3(((void*)0), 0, 0, ((void*)0));
    VAR_21 = FUNC_4(((void*)0), 0, VAR_20, &VAR_32, 0, &VAR_26);
    FUNC_26(VAR_21 != ((void*)0), "CreateThread failed, error %d\n", FUNC_9());
    FUNC_26(FUNC_18(VAR_32.start_event, VAR_4) == VAR_8, "WaitForSingleObject failed\n");
    FUNC_1(VAR_32.start_event);


    VAR_33 = FUNC_28(VAR_22, &VAR_25);
    FUNC_26(VAR_33, "activation failed: %u\n", FUNC_9());

    VAR_23 = 0;
    VAR_33 = FUNC_30(&VAR_23);
    FUNC_26(VAR_33, "GetCurrentActCtx failed: %u\n", FUNC_9());
    FUNC_26(VAR_23 != 0, "active context %p\n", VAR_23);
    FUNC_31(VAR_23);


    VAR_33 = FUNC_15(VAR_32.hwnd, VAR_12+10, 0, 0);
    FUNC_26(VAR_33, "thread window returned %d\n", VAR_33);

    VAR_24 = FUNC_3(((void*)0), 0, 0, ((void*)0));
    VAR_33 = FUNC_14(VAR_32.hwnd, VAR_12+10, 0, (LPARAM)VAR_24);
    FUNC_26(VAR_33, "thread window returned %d\n", VAR_33);
    FUNC_26(FUNC_18(VAR_24, VAR_4) == VAR_8, "WaitForSingleObject failed\n");
    FUNC_1(VAR_24);

    VAR_33 = FUNC_14(VAR_32.hwnd, VAR_10, 0, 0);
    FUNC_26(VAR_33, "PostMessageA(WM_QUIT) error %d\n", FUNC_9());

    FUNC_26(FUNC_18(VAR_21, VAR_4) == VAR_8, "WaitForSingleObject failed\n");
    FUNC_1(VAR_21);

    VAR_33 = FUNC_29(0, VAR_25);
    FUNC_26(VAR_33, "DeactivateActCtx failed: %u\n", FUNC_9());
    FUNC_31(VAR_22);
}
