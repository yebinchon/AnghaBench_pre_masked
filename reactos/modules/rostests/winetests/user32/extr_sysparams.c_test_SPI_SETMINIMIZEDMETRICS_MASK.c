
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbSize; int iWidth; int iHorzGap; int iVertGap; int iArrange; } ;
typedef TYPE_1__ MINIMIZEDMETRICS ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,TYPE_1__*,int ) ;
 int VAR_14 ;
 int FUNC_4 (int,int,char*,char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int,char*,int,int) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9( void )
{
    BOOL VAR_15;
    INT VAR_16;
    MINIMIZEDMETRICS VAR_17;
    MINIMIZEDMETRICS VAR_18;
    MINIMIZEDMETRICS VAR_19;

    VAR_17.cbSize = sizeof(MINIMIZEDMETRICS);
    VAR_18.cbSize = sizeof(MINIMIZEDMETRICS);
    VAR_19.cbSize = sizeof(MINIMIZEDMETRICS);

    FUNC_8("testing SPI_{GET,SET}MINIMIZEDMETRICS\n");
    FUNC_2(0xdeadbeef);
    VAR_15=FUNC_3( VAR_7, sizeof(MINIMIZEDMETRICS), &VAR_17, VAR_0 );
    if (!FUNC_7(VAR_15,"SPI_{GET,SET}MINIMIZEDMETRICS"))
        return;



    VAR_16 = FUNC_5( VAR_10, VAR_12, VAR_14);
    FUNC_6( VAR_16 == -1 || VAR_16 == VAR_17.iWidth, "wrong value in registry %d, expected %d\n",
        VAR_16, VAR_17.iWidth);
    VAR_16 = FUNC_5( VAR_10, VAR_9, VAR_14);
    FUNC_6( VAR_16 == -1 || VAR_16 == VAR_17.iHorzGap, "wrong value in registry %d, expected %d\n",
        VAR_16, VAR_17.iHorzGap);
    VAR_16 = FUNC_5( VAR_10, VAR_11, VAR_14);
    FUNC_6( VAR_16 == -1 || VAR_16 == VAR_17.iVertGap, "wrong value in registry %d, expected %d\n",
        VAR_16, VAR_17.iVertGap);
    VAR_16 = FUNC_5( VAR_10, VAR_8, VAR_14);
    FUNC_6( VAR_16 == -1 || VAR_16 == VAR_17.iArrange, "wrong value in registry %d, expected %d\n",
        VAR_16, VAR_17.iArrange);

    VAR_19.iWidth = 180;
    VAR_19.iHorzGap = 1;
    VAR_19.iVertGap = 1;
    VAR_19.iArrange = 5;
    VAR_15=FUNC_3( VAR_13, sizeof(MINIMIZEDMETRICS),
        &VAR_19, VAR_6 );
    if (!FUNC_7(VAR_15,"SPI_SETMINIMIZEDMETRICS")) return;
    FUNC_6(VAR_15, "SystemParametersInfoA: rc=%d err=%d\n", VAR_15, FUNC_0());

    VAR_15=FUNC_3( VAR_7, sizeof(MINIMIZEDMETRICS), &VAR_18, VAR_0 );
    FUNC_6(VAR_15, "SystemParametersInfoA: rc=%d err=%d\n", VAR_15, FUNC_0());

    FUNC_4( VAR_18.iWidth, VAR_19.iWidth, "iWidth", "%d" );
    FUNC_4( VAR_18.iHorzGap, VAR_19.iHorzGap, "iHorzGap", "%d" );
    FUNC_4( VAR_18.iVertGap, VAR_19.iVertGap, "iVertGap", "%d" );
    FUNC_4( VAR_18.iArrange, VAR_19.iArrange, "iArrange", "%d" );

    VAR_16 = FUNC_5( VAR_10, VAR_12, VAR_14);
    FUNC_6( VAR_16 == VAR_18.iWidth, "wrong value in registry %d, expected %d\n",
        VAR_16, VAR_18.iWidth);
    VAR_16 = FUNC_5( VAR_10, VAR_9, VAR_14);
    FUNC_6( VAR_16 == VAR_18.iHorzGap, "wrong value in registry %d, expected %d\n",
        VAR_16, VAR_18.iHorzGap);
    VAR_16 = FUNC_5( VAR_10, VAR_11, VAR_14);
    FUNC_6( VAR_16 == VAR_18.iVertGap, "wrong value in registry %d, expected %d\n",
        VAR_16, VAR_18.iVertGap);
    VAR_16 = FUNC_5( VAR_10, VAR_8, VAR_14);
    FUNC_6( VAR_16 == VAR_18.iArrange, "wrong value in registry %d, expected %d\n",
        VAR_16, VAR_18.iArrange);

    FUNC_4( FUNC_1( VAR_2 ) - 6,
        VAR_18.iWidth, "iWidth", "%d" );
    FUNC_4( FUNC_1( VAR_3 ) - FUNC_1( VAR_2 ),
        VAR_18.iHorzGap, "iHorzGap", "%d" );
    FUNC_4( FUNC_1( VAR_5 ) - FUNC_1( VAR_4 ),
        VAR_18.iVertGap, "iVertGap", "%d" );
    FUNC_4( FUNC_1( VAR_1 ),
        VAR_18.iArrange, "iArrange", "%d" );

    VAR_19.iWidth = -1;
    VAR_19.iHorzGap = -1;
    VAR_19.iVertGap = -1;
    VAR_19.iArrange = - 1;
    VAR_15=FUNC_3( VAR_13, sizeof(MINIMIZEDMETRICS),
        &VAR_19, VAR_6 );
    FUNC_6(VAR_15, "SystemParametersInfoA: rc=%d err=%d\n", VAR_15, FUNC_0());

    VAR_15=FUNC_3( VAR_7, sizeof(MINIMIZEDMETRICS), &VAR_18, VAR_0 );
    FUNC_6(VAR_15, "SystemParametersInfoA: rc=%d err=%d\n", VAR_15, FUNC_0());

    FUNC_4( VAR_18.iWidth, 0, "iWidth", "%d" );
    FUNC_4( VAR_18.iHorzGap, 0, "iHorzGap", "%d" );
    FUNC_4( VAR_18.iVertGap, 0, "iVertGap", "%d" );
    FUNC_4( VAR_18.iArrange, 0xf & VAR_19.iArrange, "iArrange", "%d" );

    if (0)
    {

    VAR_16 = FUNC_5( VAR_10, VAR_12, VAR_14);
    FUNC_6( VAR_16 == VAR_18.iWidth, "wrong value in registry %d, expected %d\n",
        VAR_16, VAR_18.iWidth);
    VAR_16 = FUNC_5( VAR_10, VAR_9, VAR_14);
    FUNC_6( VAR_16 == VAR_18.iHorzGap, "wrong value in registry %d, expected %d\n",
        VAR_16, VAR_18.iHorzGap);
    VAR_16 = FUNC_5( VAR_10, VAR_11, VAR_14);
    FUNC_6( VAR_16 == VAR_18.iVertGap, "wrong value in registry %d, expected %d\n",
        VAR_16, VAR_18.iVertGap);
    VAR_16 = FUNC_5( VAR_10, VAR_8, VAR_14);
    FUNC_6( VAR_16 == VAR_18.iArrange, "wrong value in registry %d, expected %d\n",
        VAR_16, VAR_18.iArrange);
    }

    FUNC_4( FUNC_1( VAR_2 ) - 6,
        VAR_18.iWidth, "iWidth", "%d" );
    FUNC_4( FUNC_1( VAR_3 ) - FUNC_1( VAR_2 ),
        VAR_18.iHorzGap, "iHorzGap", "%d" );
    FUNC_4( FUNC_1( VAR_5 ) - FUNC_1( VAR_4 ),
        VAR_18.iVertGap, "iVertGap", "%d" );
    FUNC_4( FUNC_1( VAR_1 ),
        VAR_18.iArrange, "iArrange", "%d" );

    VAR_15=FUNC_3( VAR_13, sizeof(MINIMIZEDMETRICS),
        &VAR_17, VAR_6 );
    FUNC_6(VAR_15, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_15, FUNC_0());

    VAR_15=FUNC_3( VAR_7, sizeof(MINIMIZEDMETRICS), &VAR_18, VAR_0 );
    FUNC_6(VAR_15, "SystemParametersInfoA: rc=%d err=%d\n", VAR_15, FUNC_0());
    FUNC_4( VAR_18.iWidth, VAR_17.iWidth, "iWidth", "%d" );
    FUNC_4( VAR_18.iHorzGap, VAR_17.iHorzGap, "iHorzGap", "%d" );
    FUNC_4( VAR_18.iVertGap, VAR_17.iVertGap, "iVertGap", "%d" );
    FUNC_4( VAR_18.iArrange, VAR_17.iArrange, "iArrange", "%d" );
}
