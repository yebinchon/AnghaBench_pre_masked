
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;
typedef int HRGN ;


 int FUNC_0 (int,int,int,int) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int ,int,int,int,int,int ,int ,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    HRGN VAR_7;
    HWND VAR_8 = FUNC_1(0, "TestWindowClass", "Test overlapped", VAR_3,
                                100, 100, 200, 200, 0, 0, 0, ((void*)0));
    FUNC_8( VAR_8 != 0, "Failed to create overlapped window\n" );

    FUNC_4( VAR_8, VAR_1 );
    FUNC_5( VAR_8 );
    FUNC_6();
    FUNC_7();

    FUNC_10("testing SetWindowRgn\n");
    VAR_7 = FUNC_0( 0, 0, 150, 150 );
    FUNC_3( VAR_8, VAR_7, VAR_2 );
    FUNC_9( VAR_4, "WmSetWindowRgn", VAR_0 );

    VAR_7 = FUNC_0( 30, 30, 160, 160 );
    FUNC_3( VAR_8, VAR_7, VAR_0 );
    FUNC_9( VAR_6, "WmSetWindowRgn_no_redraw", VAR_0 );

    VAR_7 = FUNC_0( 0, 0, 180, 180 );
    FUNC_3( VAR_8, VAR_7, VAR_2 );
    FUNC_9( VAR_4, "WmSetWindowRgn2", VAR_0 );

    FUNC_3( VAR_8, 0, VAR_2 );
    FUNC_9( VAR_5, "WmSetWindowRgn_clear", VAR_0 );

    FUNC_2( VAR_8 );
}
