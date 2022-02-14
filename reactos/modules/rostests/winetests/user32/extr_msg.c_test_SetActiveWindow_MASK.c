
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 (int ,char*,char*,int,int,int,int,int,scalar_t__,int ,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    HWND VAR_11, VAR_12, VAR_13;

    VAR_11 = FUNC_0(0, "TestWindowClass", "Test SetActiveWindow",
                           VAR_8 | VAR_10,
                           100, 100, 200, 200, 0, 0, 0, ((void*)0));

    VAR_12 = FUNC_0(0, "TestWindowClass", "Test SetActiveWindow",
                           VAR_8 | VAR_10 | VAR_9,
                           100, 100, 200, 200, VAR_11, 0, 0, ((void*)0));

    FUNC_6(VAR_11 != 0, "Failed to create overlapped window\n");
    FUNC_6(VAR_12 != 0, "Failed to create popup window\n");
    FUNC_3( VAR_12 );
    FUNC_5();

    FUNC_8("SetActiveWindow(0)\n");
    VAR_13 = FUNC_2(0);
    FUNC_6( VAR_13 == VAR_12, "Failed to SetActiveWindow(0)\n");
    FUNC_7(VAR_2, "SetActiveWindow(0)", VAR_0);
    FUNC_5();

    FUNC_8("SetActiveWindow(hwnd), hwnd visible\n");
    VAR_13 = FUNC_2(VAR_11);
    if (VAR_13 == VAR_11) FUNC_7(VAR_3, "SetActiveWindow(hwnd), hwnd visible", VAR_7);
    FUNC_5();

    FUNC_8("SetActiveWindow(popup), hwnd visible, popup visible\n");
    VAR_13 = FUNC_2(VAR_12);
    FUNC_6( VAR_13 == VAR_11, "Failed to SetActiveWindow(popup), popup visible\n");
    FUNC_7(VAR_4, "SetActiveWindow(popup), hwnd visible, popup visible", VAR_0);
    FUNC_5();

    FUNC_4(VAR_11, VAR_1);
    FUNC_4(VAR_12, VAR_1);
    FUNC_5();

    FUNC_8("SetActiveWindow(hwnd), hwnd not visible\n");
    VAR_13 = FUNC_2(VAR_11);
    FUNC_6( VAR_13 == ((void*)0), "SetActiveWindow(hwnd), hwnd not visible, previous is %p\n", VAR_13 );
    FUNC_7(VAR_5, "SetActiveWindow(hwnd), hwnd not visible", VAR_7);
    FUNC_5();

    FUNC_8("SetActiveWindow(popup), hwnd not visible, popup not visible\n");
    VAR_13 = FUNC_2(VAR_12);
    FUNC_6( VAR_13 == VAR_11, "Failed to SetActiveWindow(popup)\n");
    FUNC_7(VAR_6, "SetActiveWindow(popup), hwnd not visible, popup not visible", VAR_7);
    FUNC_5();

    FUNC_8("done\n");

    FUNC_1(VAR_11);
}
