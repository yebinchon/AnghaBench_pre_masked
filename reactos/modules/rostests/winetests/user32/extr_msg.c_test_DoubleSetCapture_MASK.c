
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 (int ,char*,char*,int,int,int,int,int,int ,int ,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
    HWND VAR_5;

    VAR_5 = FUNC_0(0, "TestWindowClass", "Test DoubleSetCapture",
                           VAR_3 | VAR_4,
                           100, 100, 200, 200, 0, 0, 0, ((void*)0));
    FUNC_7 (VAR_5 != 0, "Failed to create overlapped window\n");

    FUNC_3( VAR_5, VAR_2 );
    FUNC_4( VAR_5 );
    FUNC_5();
    FUNC_6();

    FUNC_2( VAR_5 );
    FUNC_2( VAR_5 );
    FUNC_8(VAR_0, "SetCapture( hwnd ) twice", VAR_1);

    FUNC_1(VAR_5);
}
