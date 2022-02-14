
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
typedef int cairo_t ;
struct TYPE_5__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {int edit_surf; TYPE_1__ mon; int * fake_bg; scalar_t__ fake_bgrel; int * edit_draw; } ;
struct TYPE_6__ {int main_window; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ RofiViewState ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ,int ,double) ;
 int FUNC_6 (int *,int *,double,double) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;

void FUNC_12 ( RofiViewState *VAR_3, gboolean VAR_4 )
{
    if ( !FUNC_11 ( FUNC_2 ( VAR_3->main_window ) ) ) {
        return;
    }
    FUNC_8 ( "Redraw view" );
    FUNC_0 ();
    cairo_t *VAR_5 = VAR_2.edit_draw;
    FUNC_4 ( VAR_5, VAR_1 );
    if ( VAR_2.fake_bg != ((void*)0) ) {
        if ( VAR_2.fake_bgrel ) {
            FUNC_6 ( VAR_5, VAR_2.fake_bg, 0.0, 0.0 );
        }
        else {
            FUNC_6 ( VAR_5, VAR_2.fake_bg,
                                       -(double) ( VAR_3->x - VAR_2.mon.x ),
                                       -(double) ( VAR_3->y - VAR_2.mon.y ) );
        }
        FUNC_3 ( VAR_5 );
        FUNC_4 ( VAR_5, VAR_0 );
    }
    else {

        FUNC_5 ( VAR_5, 0, 0, 0, 0.0 );
        FUNC_3 ( VAR_5 );
    }
    FUNC_1 ( "Background" );


    FUNC_4 ( VAR_5, VAR_0 );
    FUNC_10 ( FUNC_2 ( VAR_3->main_window ), VAR_5 );

    FUNC_1 ( "widgets" );
    FUNC_7 ( VAR_2.edit_surf );
    if ( VAR_4 ) {
        FUNC_9 ();
    }
}
