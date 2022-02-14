
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ window; scalar_t__ x; scalar_t__ y; scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_1__ xcb_configure_notify_event_t ;
struct TYPE_12__ {scalar_t__ main_window; int edit_surf; int edit_draw; int edit_pixmap; } ;
struct TYPE_11__ {int depth; } ;
struct TYPE_10__ {int connection; } ;
struct TYPE_9__ {scalar_t__ x; scalar_t__ y; scalar_t__ width; scalar_t__ height; int main_window; } ;
typedef TYPE_2__ RofiViewState ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__,scalar_t__) ;
 TYPE_6__* VAR_1 ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;
 TYPE_3__* VAR_3 ;
 int FUNC_8 (int ,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;

void FUNC_11 ( RofiViewState *VAR_4, xcb_configure_notify_event_t *VAR_5 )
{
    if ( VAR_5->window == VAR_0.main_window ) {
        if ( VAR_4->x != VAR_5->x || VAR_4->y != VAR_5->y ) {
            VAR_4->x = VAR_5->x;
            VAR_4->y = VAR_5->y;
            FUNC_6 ( FUNC_0 ( VAR_4->main_window ) );
        }
        if ( VAR_4->width != VAR_5->width || VAR_4->height != VAR_5->height ) {
            VAR_4->width = VAR_5->width;
            VAR_4->height = VAR_5->height;

            FUNC_2 ( VAR_0.edit_draw );
            FUNC_3 ( VAR_0.edit_surf );

            FUNC_9 ( VAR_3->connection, VAR_0.edit_pixmap );
            VAR_0.edit_pixmap = FUNC_10 ( VAR_3->connection );
            FUNC_8 ( VAR_3->connection, VAR_1->depth, VAR_0.edit_pixmap, VAR_0.main_window,
                                VAR_4->width, VAR_4->height );

            VAR_0.edit_surf = FUNC_4 ( VAR_3->connection, VAR_0.edit_pixmap, VAR_2, VAR_4->width, VAR_4->height );
            VAR_0.edit_draw = FUNC_1 ( VAR_0.edit_surf );
            FUNC_5 ( "Re-size window based external request: %d %d", VAR_4->width, VAR_4->height );
            FUNC_7 ( FUNC_0 ( VAR_4->main_window ), VAR_4->width, VAR_4->height );
        }
    }
}
