
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int ,int) ;
 int FUNC_5 (int,int,char*,char*) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ,char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12( void )
{
    BOOL VAR_5;
    UINT VAR_6;
    UINT VAR_7;
    UINT VAR_8;
    char VAR_9[10];

    FUNC_11("testing SPI_{GET,SET}DOUBLECLICKTIME\n");
    VAR_8 = FUNC_0();

    VAR_6 = 0;
    FUNC_3(0xdeadbeef);
    VAR_5=FUNC_4( VAR_2, VAR_6, 0,
                              VAR_1 | VAR_0 );
    if (!FUNC_9(VAR_5,"SPI_{GET,SET}DOUBLECLICKTIME"))
        return;

    FUNC_8( VAR_2, 0 );
    FUNC_7( VAR_9, "%d", VAR_6 );
    FUNC_10( VAR_3,
                  VAR_4, VAR_9 );
    VAR_6 = 500;
    FUNC_5( FUNC_0(), VAR_6, "GetDoubleClickTime", "%d" );

    VAR_6 = 1000;
    VAR_5=FUNC_4( VAR_2, VAR_6, 0,
                             VAR_1 | VAR_0 );
    FUNC_6(VAR_5, "SystemParametersInfoA: rc=%d err=%d\n", VAR_5, FUNC_1());
    FUNC_8( VAR_2, 0 );
    FUNC_7( VAR_9, "%d", VAR_6 );
    FUNC_10( VAR_3,
                  VAR_4, VAR_9 );
    FUNC_5( FUNC_0(), VAR_6, "GetDoubleClickTime", "%d" );

    VAR_7 = VAR_6;

    VAR_6 = 0;
    FUNC_2( VAR_6 );
    FUNC_7( VAR_9, "%d", VAR_7 );
    FUNC_10( VAR_3,
                  VAR_4, VAR_9 );
    VAR_6 = 500;
    FUNC_5( FUNC_0(), VAR_6, "GetDoubleClickTime", "%d" );

    VAR_6 = 1000;
    FUNC_2( VAR_6 );
    FUNC_7( VAR_9, "%d", VAR_7 );
    FUNC_10( VAR_3,
                  VAR_4, VAR_9 );
    FUNC_5( FUNC_0(), VAR_6, "GetDoubleClickTime", "%d" );

    VAR_5=FUNC_4(VAR_2, VAR_8, 0, VAR_1);
    FUNC_6(VAR_5, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_5, FUNC_1());
}
