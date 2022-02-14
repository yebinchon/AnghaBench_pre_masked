
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int req_change ;
struct TYPE_4__ {int member_0; int member_1; } ;
typedef TYPE_1__ POINT ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int*,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7( void )
{
    BOOL VAR_3;
    INT VAR_4[3];


    INT VAR_5[3] = {6, 10, 1};


    POINT VAR_6[] = { {6, 6}, { 7, 6}, { 8, 6}, {10, 10}, {11, 10}, {100, 100} };
    POINT VAR_7[] = { {6, 6}, {14, 6}, {16, 6}, {20, 20}, {22, 20}, {200, 200} };
    POINT VAR_8[] = { {6, 6}, {14, 6}, {16, 6}, {20, 20}, {44, 20}, {400, 400} };
    POINT VAR_9[] = { {6, 6}, {14, 6}, {16, 6}, {20, 20}, {22, 20}, {200, 200} };
    POINT VAR_10[] = { {6, 6}, { 7, 6}, { 8, 6}, {10, 10}, {11, 10}, {100, 100} };
    POINT VAR_11[] = { {6, 6}, { 7, 6}, {16, 6}, {20, 20}, {22, 20}, {200, 200} };
    POINT VAR_12[] = { {6, 6}, {28, 6}, {32, 6}, {40, 40}, {44, 40}, {400, 400} };
    POINT VAR_13[] = { {6, 6}, {14, 6}, {32, 6}, {40, 40}, {44, 40}, {400, 400} };
    POINT VAR_14[] = { {6, 6}, {28, 6}, {32, 6}, {40, 40}, {44, 40}, {400, 400} };

    int VAR_15 = sizeof( VAR_6 ) / sizeof( POINT );

    FUNC_6("testing SPI_{GET,SET}MOUSE\n");
    FUNC_1(0xdeadbeef);
    VAR_3=FUNC_2( VAR_1, 0, VAR_4, 0 );
    if (!FUNC_5(VAR_3,"SPI_{GET,SET}MOUSE"))
        return;

    if (!FUNC_4( VAR_5, VAR_6, VAR_7, VAR_15 )) return;


    VAR_5[2] = 2;
    FUNC_4( VAR_5, VAR_6, VAR_8, VAR_15 );


    VAR_5[2] = 3;
    FUNC_4( VAR_5, VAR_6, VAR_9, VAR_15 );


    VAR_5[2] = 0;
    FUNC_4( VAR_5, VAR_6, VAR_10, VAR_15 );


    VAR_5[2] = 1;
    VAR_5[0] = 7;
    FUNC_4( VAR_5, VAR_6, VAR_11, VAR_15 );


    VAR_5[2] = 2;
    VAR_5[0] = 6;
    VAR_5[1] = 6;
    FUNC_4( VAR_5, VAR_6, VAR_12, VAR_15 );


    VAR_5[1] = 7;
    FUNC_4( VAR_5, VAR_6, VAR_13, VAR_15 );


    VAR_5[1] = 5;
    FUNC_4( VAR_5, VAR_6, VAR_14, VAR_15 );

    VAR_3=FUNC_2( VAR_2, 0, VAR_4, VAR_0 );
    FUNC_3(VAR_3, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_3, FUNC_0());
}
