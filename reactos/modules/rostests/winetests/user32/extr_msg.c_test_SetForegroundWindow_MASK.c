
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 (int ,char*,char*,int,int,int,int,int,int ,int ,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    HWND VAR_5;

    VAR_5 = FUNC_0(0, "TestWindowClass", "Test SetForegroundWindow",
                           VAR_2 | VAR_3,
                           100, 100, 200, 200, 0, 0, 0, ((void*)0));
    FUNC_5 (VAR_5 != 0, "Failed to create overlapped window\n");
    FUNC_3( VAR_5 );
    FUNC_4();

    FUNC_7("SetForegroundWindow( 0 )\n");
    FUNC_3( 0 );
    FUNC_6(VAR_4, "SetForegroundWindow( 0 ) away from foreground top level window", VAR_0);
    FUNC_7("SetForegroundWindow( GetDesktopWindow() )\n");
    FUNC_3( FUNC_2() );
    FUNC_6(VAR_1, "SetForegroundWindow( desktop ) away from "
                                        "foreground top level window", VAR_0);
    FUNC_7("done\n");

    FUNC_1(VAR_5);
}
