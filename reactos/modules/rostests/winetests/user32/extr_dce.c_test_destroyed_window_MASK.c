
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    HDC VAR_8, VAR_9;
    HDC VAR_10[30];
    int VAR_11, VAR_12;

    VAR_8 = FUNC_1( VAR_3 );
    FUNC_5( VAR_8, VAR_2 );
    VAR_12 = FUNC_3( VAR_8 );
    FUNC_7( VAR_12 == VAR_2, "wrong ROP2 %d\n", VAR_12 );
    FUNC_7( FUNC_6( VAR_8 ) == VAR_3, "wrong window\n" );
    VAR_9 = VAR_8;

    FUNC_0( VAR_3 );
    VAR_12 = FUNC_3( VAR_8 );
    FUNC_7( VAR_12 == 0, "wrong ROP2 %d\n", VAR_12 );
    FUNC_7( FUNC_6( VAR_8 ) == 0, "wrong window\n" );
    FUNC_7( !FUNC_4( VAR_3, VAR_8 ), "ReleaseDC succeeded\n" );
    VAR_8 = FUNC_1( VAR_3 );
    FUNC_7( !VAR_8, "Got a non-NULL DC (%p) for a destroyed window\n", VAR_8 );

    for (VAR_11 = 0; VAR_11 < 30; VAR_11++)
    {
        VAR_8 = VAR_10[VAR_11] = FUNC_2( VAR_7, 0, VAR_0 | VAR_1 );
        if (VAR_8 == VAR_9) break;
    }
    FUNC_7( VAR_11 < 30, "DC for destroyed window not reused\n" );
    while (VAR_11 > 0) FUNC_4( VAR_7, VAR_10[--VAR_11] );

    VAR_8 = FUNC_1( VAR_4 );
    FUNC_5( VAR_8, VAR_2 );
    VAR_12 = FUNC_3( VAR_8 );
    FUNC_7( VAR_12 == VAR_2, "wrong ROP2 %d\n", VAR_12 );
    FUNC_7( FUNC_6( VAR_8 ) == VAR_4, "wrong window\n" );
    VAR_9 = VAR_8;

    VAR_8 = FUNC_1( VAR_5 );
    FUNC_7( VAR_9 == VAR_8, "wrong DC\n" );
    VAR_12 = FUNC_3( VAR_8 );
    FUNC_7( VAR_12 == VAR_2, "wrong ROP2 %d\n", VAR_12 );
    FUNC_7( FUNC_6( VAR_8 ) == VAR_5, "wrong window\n" );
    FUNC_0( VAR_5 );

    VAR_12 = FUNC_3( VAR_8 );
    FUNC_7( VAR_12 == VAR_2, "wrong ROP2 %d\n", VAR_12 );
    FUNC_7( FUNC_6( VAR_8 ) == 0, "wrong window\n" );
    FUNC_7( !FUNC_4( VAR_5, VAR_8 ), "ReleaseDC succeeded\n" );
    VAR_8 = FUNC_1( VAR_5 );
    FUNC_7( !VAR_8, "Got a non-NULL DC (%p) for a destroyed window\n", VAR_8 );

    VAR_8 = FUNC_1( VAR_4 );
    FUNC_7( VAR_8 != 0, "Got NULL DC\n" );
    VAR_12 = FUNC_3( VAR_8 );
    FUNC_7( VAR_12 == VAR_2, "wrong ROP2 %d\n", VAR_12 );
    FUNC_7( FUNC_6( VAR_8 ) == VAR_4, "wrong window\n" );
    FUNC_0( VAR_4 );

    VAR_12 = FUNC_3( VAR_8 );
    FUNC_7( VAR_12 == VAR_2, "wrong ROP2 %d\n", VAR_12 );
    FUNC_7( FUNC_6( VAR_8 ) == 0, "wrong window\n" );
    FUNC_7( !FUNC_4( VAR_4, VAR_8 ), "ReleaseDC succeeded\n" );
    VAR_8 = FUNC_1( VAR_4 );
    FUNC_7( !VAR_8, "Got a non-NULL DC (%p) for a destroyed window\n", VAR_8 );

    VAR_8 = FUNC_1( VAR_6 );
    FUNC_7( VAR_8 != 0, "Got NULL DC\n" );
    VAR_12 = FUNC_3( VAR_8 );
    FUNC_7( VAR_12 == VAR_2, "wrong ROP2 %d\n", VAR_12 );
    FUNC_7( FUNC_6( VAR_8 ) == VAR_6, "wrong window\n" );
    FUNC_0( VAR_6 );

    VAR_12 = FUNC_3( VAR_8 );
    FUNC_7( VAR_12 == 0, "wrong ROP2 %d\n", VAR_12 );
    FUNC_7( FUNC_6( VAR_8 ) == 0, "wrong window\n" );
    FUNC_7( !FUNC_4( VAR_6, VAR_8 ), "ReleaseDC succeeded\n" );
    VAR_8 = FUNC_1( VAR_6 );
    FUNC_7( !VAR_8, "Got a non-NULL DC (%p) for a destroyed window\n", VAR_8 );

    FUNC_0( VAR_7 );
}
