
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ idle_timeout; scalar_t__ repaint_source; scalar_t__ main_window; int views; int edit_pixmap; int gc; int * edit_surf; int * edit_draw; int * fake_bg; } ;
struct TYPE_3__ {int connection; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,scalar_t__) ;

void FUNC_12 ()
{
    FUNC_3 ( "Cleanup." );
    if ( VAR_0.idle_timeout > 0 ) {
        FUNC_5 ( VAR_0.idle_timeout );
        VAR_0.idle_timeout = 0;
    }
    if ( VAR_0.repaint_source > 0 ) {
        FUNC_5 ( VAR_0.repaint_source );
        VAR_0.repaint_source = 0;
    }
    if ( VAR_0.fake_bg ) {
        FUNC_1 ( VAR_0.fake_bg );
        VAR_0.fake_bg = ((void*)0);
    }
    if ( VAR_0.edit_draw ) {
        FUNC_0 ( VAR_0.edit_draw );
        VAR_0.edit_draw = ((void*)0);
    }
    if ( VAR_0.edit_surf ) {
        FUNC_1 ( VAR_0.edit_surf );
        VAR_0.edit_surf = ((void*)0);
    }
    if ( VAR_0.main_window != VAR_2 ) {
        FUNC_3 ( "Unmapping and free'ing window" );
        FUNC_11 ( VAR_4->connection, VAR_0.main_window );
        FUNC_9 ( VAR_4->connection, VAR_0.gc );
        FUNC_10 ( VAR_4->connection, VAR_0.edit_pixmap );
        FUNC_6 ( VAR_4->connection, VAR_0.main_window );
        VAR_0.main_window = VAR_2;
    }
    if ( VAR_3 != VAR_1 ) {
        FUNC_8 ( VAR_4->connection, VAR_3 );
        VAR_3 = VAR_1;
    }
    FUNC_7 ( VAR_4->connection );
    FUNC_2 ( FUNC_4 ( &( VAR_0.views ) ) );
}
