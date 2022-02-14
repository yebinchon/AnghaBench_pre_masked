
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct recvd_message {int hwnd; int message; int flags; int wParam; int lParam; char* descr; } ;
typedef int msg ;
struct TYPE_6__ {int message; int wParam; int lParam; int hwnd; } ;
typedef TYPE_1__ MSG ;
typedef int BOOL ;


 int FUNC_0 (int ,char*,char*,int ,int ,int ,int,int,int *,int *,int *,int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct recvd_message*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_9 ;
 int FUNC_13 (TYPE_1__*,int,int) ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (int ,char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_16(void)
{
    MSG VAR_13;
    BOOL VAR_14;


    FUNC_11();
    FUNC_8(0xbeef);

    VAR_13.message = 0;
    VAR_14 = FUNC_7(&VAR_13, 0, 0, 0, VAR_2);
    FUNC_14(!VAR_14, "got %x message\n", VAR_13.message);

    VAR_14 = FUNC_7(&VAR_13, ((void*)0), 0, 0, VAR_1);
    FUNC_14(VAR_14, "PeekMessage failed with error %d\n", FUNC_4());
    FUNC_14(VAR_13.message == VAR_4, "Received message 0x%04x instead of WM_QUIT\n", VAR_13.message);
    FUNC_14(VAR_13.wParam == 0xbeef, "wParam was 0x%lx instead of 0xbeef\n", VAR_13.wParam);

    VAR_14 = FUNC_9(FUNC_3(), VAR_5, 0, 0);
    FUNC_14(VAR_14, "PostMessage failed with error %d\n", FUNC_4());

    VAR_14 = FUNC_5(&VAR_13, ((void*)0), 0, 0);
    FUNC_14(VAR_14 > 0, "GetMessage failed with error %d\n", FUNC_4());
    FUNC_14(VAR_13.message == VAR_5, "Received message 0x%04x instead of WM_USER\n", VAR_13.message);


    VAR_14 = FUNC_5(&VAR_13, ((void*)0), 0, 0);
    FUNC_14(!VAR_14, "GetMessage return %d with error %d instead of FALSE\n", VAR_14, FUNC_4());
    FUNC_14(VAR_13.message == VAR_4, "Received message 0x%04x instead of WM_QUIT\n", VAR_13.message);
    FUNC_14(VAR_13.wParam == 0xbeef, "wParam was 0x%lx instead of 0xbeef\n", VAR_13.wParam);

    VAR_14 = FUNC_7(&VAR_13, ((void*)0), 0, 0, VAR_3);
    FUNC_14( !VAR_14 || VAR_13.message != VAR_4, "Received WM_QUIT again\n" );


    FUNC_9(FUNC_3(), VAR_4, 0xdead, 0);

    VAR_14 = FUNC_7(&VAR_13, ((void*)0), 0, 0, VAR_1);
    FUNC_14(VAR_14, "PeekMessage failed with error %d\n", FUNC_4());
    FUNC_14(VAR_13.message == VAR_4, "Received message 0x%04x instead of WM_QUIT\n", VAR_13.message);
    FUNC_14(VAR_13.wParam == 0xdead, "wParam was 0x%lx instead of 0xdead\n", VAR_13.wParam);

    VAR_14 = FUNC_9(FUNC_3(), VAR_5, 0, 0);
    FUNC_14(VAR_14, "PostMessage failed with error %d\n", FUNC_4());


    VAR_14 = FUNC_5(&VAR_13, ((void*)0), 0, 0);
    FUNC_14(!VAR_14, "GetMessage return %d with error %d instead of FALSE\n", VAR_14, FUNC_4());
    FUNC_14(VAR_13.message == VAR_4, "Received message 0x%04x instead of WM_QUIT\n", VAR_13.message);
    FUNC_14(VAR_13.wParam == 0xdead, "wParam was 0x%lx instead of 0xdead\n", VAR_13.wParam);

    VAR_14 = FUNC_5(&VAR_13, ((void*)0), 0, 0);
    FUNC_14(VAR_14 > 0, "GetMessage failed with error %d\n", FUNC_4());
    FUNC_14(VAR_13.message == VAR_5, "Received message 0x%04x instead of WM_USER\n", VAR_13.message);

    FUNC_11();
    FUNC_12();
    VAR_14 = FUNC_1(FUNC_6(((void*)0)), "TEST_EMPTY_DIALOG", 0, VAR_11, 0);
    FUNC_14(VAR_14 == 1, "expected 1, got %d\n", VAR_14);
    FUNC_15(VAR_7, "WmQuitDialogSeq", VAR_0);
    FUNC_13(&VAR_13, 0xab, sizeof(VAR_13));
    VAR_14 = FUNC_7(&VAR_13, ((void*)0), 0, 0, VAR_3);
    FUNC_14(VAR_14, "PeekMessage failed\n");
    FUNC_14(VAR_13.message == VAR_4, "Received message 0x%04x instead of WM_QUIT\n", VAR_13.message);
    FUNC_14(VAR_13.wParam == 0x1234, "wParam was 0x%lx instead of 0x1234\n", VAR_13.wParam);
    FUNC_14(VAR_13.lParam == 0, "lParam was 0x%lx instead of 0\n", VAR_13.lParam);




    FUNC_0(0, "StopQuitClass", "Stop Quit Test", VAR_6,
                    0, 0, 100, 100, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_12();
    while (FUNC_7(&VAR_13, 0, 0, 0, VAR_3))
    {
        struct recvd_message VAR_15;
        VAR_15.hwnd = VAR_13.hwnd;
        VAR_15.message = VAR_13.message;
        VAR_15.flags = VAR_10|VAR_12|VAR_9;
        VAR_15.wParam = VAR_13.wParam;
        VAR_15.lParam = VAR_13.lParam;
        VAR_15.descr = "stop/quit";
        if (VAR_13.message == VAR_4)

            FUNC_14(!VAR_13.hwnd, "The WM_QUIT hwnd was %p instead of NULL\n", VAR_13.hwnd);
        FUNC_10(&VAR_15);
        FUNC_2(&VAR_13);
    }
    FUNC_15(VAR_8, "WmStopQuitSeq", VAR_0);
}
