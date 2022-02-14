
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (scalar_t__,scalar_t__,char*,char*) ;
 int FUNC_6 (scalar_t__,char*,...) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11( void )
{
    BOOL VAR_10;
    BOOL VAR_11;
    BOOL VAR_12;
    BOOL VAR_13;

    FUNC_10("testing SPI_{GET,SET}BEEP\n");
    FUNC_2(0xdeadbeef);
    VAR_10=FUNC_3( VAR_5, 0, &VAR_11, 0 );
    if (!FUNC_8(VAR_10,"SPI_{GET,SET}BEEP"))
        return;

    VAR_13 = VAR_9;
    VAR_10=FUNC_3( VAR_6, VAR_13, 0, VAR_4 | VAR_3 );
    if (!FUNC_8(VAR_10,"SPI_SETBEEP")) return;
    FUNC_6(VAR_10, "SystemParametersInfoA: rc=%d err=%d\n", VAR_10, FUNC_0());
    FUNC_7( VAR_6, 0 );
    FUNC_9( VAR_7,
                  VAR_8,
                  VAR_13 ? "Yes" : "No" );
    VAR_10=FUNC_3( VAR_5, 0, &VAR_12, 0 );
    FUNC_6(VAR_10, "SystemParametersInfoA: rc=%d err=%d\n", VAR_10, FUNC_0());
    FUNC_5( VAR_12, VAR_13, "SPI_{GET,SET}BEEP", "%d" );
    VAR_10=FUNC_4( VAR_5, 0, &VAR_12, 0 );
    if (VAR_10 || FUNC_0() != VAR_0)
    {
        FUNC_6(VAR_10, "SystemParametersInfoW: rc=%d err=%d\n", VAR_10, FUNC_0());
        FUNC_5( VAR_12, VAR_13, "SystemParametersInfoW", "%d" );
    }


    VAR_10=FUNC_3( VAR_6, VAR_13, 0, VAR_4 | VAR_3 );
    FUNC_6(VAR_10, "SystemParametersInfoA: rc=%d err=%d\n", VAR_10, FUNC_0());
    FUNC_7( VAR_6, 0 );

    VAR_13 = VAR_1;
    VAR_10=FUNC_4( VAR_6, VAR_13, 0, VAR_4 | VAR_3 );
    if (VAR_10 == VAR_1 && FUNC_0() == VAR_0)
        VAR_10=FUNC_3( VAR_6, VAR_13, 0, VAR_4 | VAR_3 );
    FUNC_6(VAR_10, "SystemParametersInfo: rc=%d err=%d\n", VAR_10, FUNC_0());
    FUNC_7( VAR_6, 0 );
    FUNC_9( VAR_7,
                  VAR_8,
                  VAR_13 ? "Yes" : "No" );
    VAR_10=FUNC_3( VAR_5, 0, &VAR_12, 0 );
    FUNC_6(VAR_10, "SystemParametersInfoA: rc=%d err=%d\n", VAR_10, FUNC_0());
    FUNC_5( VAR_12, VAR_13, "SPI_{GET,SET}BEEP", "%d" );
    VAR_10=FUNC_4( VAR_5, 0, &VAR_12, 0 );
    if (VAR_10 || FUNC_0() != VAR_0)
    {
        FUNC_6(VAR_10, "SystemParametersInfoW: rc=%d err=%d\n", VAR_10, FUNC_0());
        FUNC_5( VAR_12, VAR_13, "SystemParametersInfoW", "%d" );
    }
    FUNC_6( FUNC_1( VAR_2 ), "Return value of MessageBeep when sound is disabled\n" );

    VAR_10=FUNC_3( VAR_6, VAR_11, 0, VAR_4 );
    FUNC_6(VAR_10, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_10, FUNC_0());
}
