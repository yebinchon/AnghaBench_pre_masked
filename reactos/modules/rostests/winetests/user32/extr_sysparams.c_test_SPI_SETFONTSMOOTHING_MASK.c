
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vals ;
typedef int UINT ;
typedef int DWORD ;
typedef int BOOL ;


 int const FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int const,int*,int) ;
 int* FUNC_3 (int const) ;
 int FUNC_4 (int,int,char*,char*) ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int,char*,int,int const,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int ,int ,int const*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11( void )
{
    BOOL VAR_16;
    BOOL VAR_17;
    DWORD VAR_18, VAR_19, VAR_20;
    const UINT VAR_21[]={0xffffffff,0,1,2};
    unsigned int VAR_22;

    FUNC_10("testing SPI_{GET,SET}FONTSMOOTHING\n");
    if( VAR_15) return;
    FUNC_1(0xdeadbeef);
    VAR_16=FUNC_2( VAR_2, 0, &VAR_17, 0 );
    if (!FUNC_7(VAR_16,"SPI_{GET,SET}FONTSMOOTHING"))
        return;
    FUNC_2( VAR_5, 0, &VAR_18, 0 );
    FUNC_2( VAR_3, 0, &VAR_19, 0 );
    FUNC_2( VAR_4, 0, &VAR_20, 0 );

    for (VAR_22=0;VAR_22<sizeof(VAR_21)/sizeof(*VAR_21);VAR_22++)
    {
        UINT VAR_23;

        VAR_16=FUNC_2( VAR_6, VAR_21[VAR_22], 0,
                                  VAR_1 | VAR_0 );
        if (!FUNC_7(VAR_16,"SPI_SETFONTSMOOTHING")) return;
        FUNC_5(VAR_16, "%d: rc=%d err=%d\n", VAR_22, VAR_16, FUNC_0());
        FUNC_6( VAR_6, 0 );
        FUNC_8( VAR_13,
                      VAR_14,
                      VAR_21[VAR_22] ? "2" : "0" );

        VAR_16=FUNC_2( VAR_11, 0, FUNC_3(VAR_21[VAR_22]),
                                  VAR_1 | VAR_0 );
        if (!FUNC_7(VAR_16,"SPI_SETFONTSMOOTHINGTYPE")) return;
        FUNC_5(VAR_16, "%d: rc=%d err=%d\n", VAR_22, VAR_16, FUNC_0());
        FUNC_6( VAR_11, 0 );
        FUNC_9( VAR_13,
                            VAR_12, &VAR_21[VAR_22] );

        VAR_16=FUNC_2( VAR_7, 0, FUNC_3(VAR_21[VAR_22]),
                                  VAR_1 | VAR_0 );
        if (!FUNC_7(VAR_16,"SPI_SETFONTSMOOTHINGCONTRAST")) return;
        FUNC_5(VAR_16, "%d: rc=%d err=%d\n", VAR_22, VAR_16, FUNC_0());
        FUNC_6( VAR_7, 0 );
        FUNC_9( VAR_13,
                            VAR_8, &VAR_21[VAR_22] );

        VAR_16=FUNC_2( VAR_9, 0, FUNC_3(VAR_21[VAR_22]),
                                  VAR_1 | VAR_0 );
        if (!FUNC_7(VAR_16,"SPI_SETFONTSMOOTHINGORIENTATION")) return;
        FUNC_5(VAR_16, "%d: rc=%d err=%d\n", VAR_22, VAR_16, FUNC_0());
        FUNC_6( VAR_9, 0 );
        FUNC_9( VAR_13,
                            VAR_10, &VAR_21[VAR_22] );

        VAR_16=FUNC_2( VAR_2, 0, &VAR_23, 0 );
        FUNC_5(VAR_16, "%d: rc=%d err=%d\n", VAR_22, VAR_16, FUNC_0());
        FUNC_4( VAR_23, VAR_21[VAR_22] ? 1 : 0, "SPI_GETFONTSMOOTHING", "%d" );

        VAR_16=FUNC_2( VAR_5, 0, &VAR_23, 0 );
        FUNC_5(VAR_16, "%d: rc=%d err=%d\n", VAR_22, VAR_16, FUNC_0());
        FUNC_5( VAR_23 == VAR_21[VAR_22], "wrong value %x/%x\n", VAR_23, VAR_21[VAR_22] );

        VAR_16=FUNC_2( VAR_3, 0, &VAR_23, 0 );
        FUNC_5(VAR_16, "%d: rc=%d err=%d\n", VAR_22, VAR_16, FUNC_0());
        FUNC_5( VAR_23 == VAR_21[VAR_22], "wrong value %x/%x\n", VAR_23, VAR_21[VAR_22] );

        VAR_16=FUNC_2( VAR_4, 0, &VAR_23, 0 );
        FUNC_5(VAR_16, "%d: rc=%d err=%d\n", VAR_22, VAR_16, FUNC_0());
        FUNC_5( VAR_23 == VAR_21[VAR_22], "wrong value %x/%x\n", VAR_23, VAR_21[VAR_22] );
    }

    VAR_16=FUNC_2( VAR_6, VAR_17, 0, VAR_1 );
    FUNC_5(VAR_16, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_16, FUNC_0());
    VAR_16=FUNC_2( VAR_11, VAR_18, 0, VAR_1 );
    FUNC_5(VAR_16, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_16, FUNC_0());
    VAR_16=FUNC_2( VAR_7, VAR_19, 0, VAR_1 );
    FUNC_5(VAR_16, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_16, FUNC_0());
    VAR_16=FUNC_2( VAR_9, VAR_20, 0, VAR_1 );
    FUNC_5(VAR_16, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_16, FUNC_0());
}
