
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int right; int bottom; int top; int left; } ;
typedef TYPE_1__ RECT ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int,int) ;
 int FUNC_4 (int ,int ,TYPE_1__*,int) ;
 int FUNC_5 (int ,int ,char*,char*) ;
 int FUNC_6 (int,char*,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10( void )
{
    BOOL VAR_4;
    RECT VAR_5;
    RECT VAR_6;
    RECT VAR_7;

    FUNC_9("testing SPI_{GET,SET}WORKAREA\n");
    FUNC_2(0xdeadbeef);
    VAR_4=FUNC_4(VAR_2, 0, &VAR_5, 0);
    if (!FUNC_8(VAR_4,"SPI_{GET,SET}WORKAREA"))
        return;







    FUNC_3(&VAR_7, VAR_5.left, VAR_5.top, VAR_5.right - 1, VAR_5.bottom - 1);
    VAR_4=FUNC_4( VAR_3, 0, &VAR_7,
                              VAR_1 | VAR_0 );
    if (!FUNC_8(VAR_4,"SPI_SETWORKAREA")) return;
    FUNC_6(VAR_4, "SystemParametersInfoA: rc=%d err=%d\n", VAR_4, FUNC_1());
    VAR_4=FUNC_4( VAR_2, 0, &VAR_6, 0 );
    FUNC_6(VAR_4, "SystemParametersInfoA: rc=%d err=%d\n", VAR_4, FUNC_1());
    if( !FUNC_0( &VAR_6, &VAR_7))
        FUNC_7( VAR_3, 0);
    FUNC_5( VAR_6.left, VAR_7.left, "left", "%d" );
    FUNC_5( VAR_6.top, VAR_7.top, "top", "%d" );

    FUNC_6( VAR_6.right >= VAR_7.right - 16 && VAR_6.right < VAR_7.right + 16,
        "right: got %d instead of %d\n", VAR_6.right, VAR_7.right );
    FUNC_6( VAR_6.bottom >= VAR_7.bottom - 16 && VAR_6.bottom < VAR_7.bottom + 16,
        "bottom: got %d instead of %d\n", VAR_6.bottom, VAR_7.bottom );
    VAR_7 = VAR_6;
    VAR_4=FUNC_4( VAR_3, 0, &VAR_5,
                              VAR_1 | VAR_0 );
    FUNC_6(VAR_4, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_4, FUNC_1());
    VAR_4=FUNC_4( VAR_2, 0, &VAR_6, 0 );
    FUNC_6(VAR_4, "SystemParametersInfoA: rc=%d err=%d\n", VAR_4, FUNC_1());
    if( !FUNC_0( &VAR_6, &VAR_7))
        FUNC_7( VAR_3, 0 );
    FUNC_5( VAR_6.left, VAR_5.left, "left", "%d" );
    FUNC_5( VAR_6.top, VAR_5.top, "top", "%d" );

    FUNC_6( VAR_6.right >= VAR_5.right - 16 && VAR_6.right < VAR_5.right + 16,
        "right: got %d instead of %d\n", VAR_6.right, VAR_5.right );
    FUNC_6( VAR_6.bottom >= VAR_5.bottom - 16 && VAR_6.bottom < VAR_5.bottom + 16,
        "bottom: got %d instead of %d\n", VAR_6.bottom, VAR_5.bottom );
}
