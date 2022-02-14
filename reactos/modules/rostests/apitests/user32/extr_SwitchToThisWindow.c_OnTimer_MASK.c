
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int * HWND ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int,int ,int *) ;
 int FUNC_10 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (int,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(HWND VAR_9, UINT VAR_10)
{
    FUNC_6(VAR_9, VAR_10);
    switch (VAR_10)
    {



        case 0:
            FUNC_8(FUNC_3());
            FUNC_7(FUNC_3());
            FUNC_11(FUNC_5() == ((void*)0), "GetForegroundWindow() != NULL\n");
            FUNC_11(FUNC_2() == ((void*)0), "GetActiveWindow() != NULL\n");
            FUNC_11(FUNC_4() == ((void*)0), "GetFocus() != NULL\n");
            FUNC_0(VAR_9);
            break;
        case 1:
            FUNC_11(FUNC_5() == ((void*)0), "GetForegroundWindow() != NULL\n");
            FUNC_11(FUNC_2() == VAR_9, "GetActiveWindow() != hwnd\n");
            FUNC_11(FUNC_4() == ((void*)0), "GetFocus() != NULL\n");
            VAR_7 = 0;
            VAR_6 = 0;
            VAR_5 = 0;
            VAR_8 = 0;
            VAR_4 = 0;
            VAR_3 = VAR_2;
            FUNC_10(VAR_9, VAR_2);
            FUNC_12("SwitchToThisWindow(TRUE): tracing...\n");
            break;
        case 2:
            VAR_3 = VAR_0;
            FUNC_12("SwitchToThisWindow(TRUE): tracing done\n");
            FUNC_11(FUNC_5() == VAR_9, "GetForegroundWindow() != hwnd\n");
            FUNC_11(FUNC_2() == VAR_9, "GetActiveWindow() != hwnd\n");
            FUNC_11(FUNC_4() == VAR_9, "GetFocus() != hwnd\n");
            FUNC_11(VAR_7 == 1, "WM_SYSCOMMAND SC_RESTORE: %d\n", VAR_7);
            FUNC_11(!VAR_6, "WM_SYSCOMMAND non-SC_RESTORE: %d\n", VAR_6);
            FUNC_11(VAR_5 == 1, "WM_NCACTIVATE: %d\n", VAR_5);
            FUNC_11(VAR_8 == 2, "WM_WINDOWPOSCHANGING: %d\n", VAR_8);
            FUNC_11(VAR_4 == 1, "WM_ACTIVATE: %d\n", VAR_4);
            break;



        case 3:
            FUNC_8(FUNC_3());
            FUNC_7(FUNC_3());
            FUNC_11(FUNC_5() == ((void*)0), "GetForegroundWindow() != NULL\n");
            FUNC_11(FUNC_2() == ((void*)0), "GetActiveWindow() != NULL\n");
            FUNC_11(FUNC_4() == ((void*)0), "GetFocus() != NULL\n");
            FUNC_0(VAR_9);
            break;
        case 4:
            FUNC_11(FUNC_5() == ((void*)0), "GetForegroundWindow() != NULL\n");
            FUNC_11(FUNC_2() == VAR_9, "GetActiveWindow() != hwnd\n");
            FUNC_11(FUNC_4() == ((void*)0), "GetFocus() != NULL\n");
            VAR_7 = 0;
            VAR_6 = 0;
            VAR_5 = 0;
            VAR_8 = 0;
            VAR_4 = 0;
            VAR_3 = VAR_2;
            FUNC_10(VAR_9, VAR_0);
            FUNC_12("SwitchToThisWindow(FALSE): tracing...\n");
            break;
        case 5:
            VAR_3 = VAR_0;
            FUNC_12("SwitchToThisWindow(FALSE): tracing done\n");
            FUNC_11(FUNC_5() == ((void*)0), "GetForegroundWindow() != NULL\n");
            FUNC_11(FUNC_2() == VAR_9, "GetActiveWindow() != hwnd\n");
            FUNC_11(FUNC_4() == ((void*)0), "GetFocus() != NULL\n");
            FUNC_11(!VAR_7, "WM_SYSCOMMAND SC_RESTORE: %d\n", VAR_7);
            FUNC_11(!VAR_6, "WM_SYSCOMMAND non-SC_RESTORE: %d\n", VAR_6);
            FUNC_11(!VAR_5, "WM_NCACTIVATE: %d\n", VAR_5);
            FUNC_11(!VAR_8, "WM_WINDOWPOSCHANGING: %d\n", VAR_8);
            FUNC_11(!VAR_4, "WM_ACTIVATE: %d\n", VAR_4);
            break;
        default:
            FUNC_1(VAR_9);
            return;
    }
    FUNC_9(VAR_9, VAR_10 + 1, VAR_1, ((void*)0));
}
