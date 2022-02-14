
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ rem; TYPE_1__* data; } ;
typedef TYPE_2__ xcb_xinerama_screen_info_iterator_t ;
typedef int xcb_xinerama_query_screens_reply_t ;
typedef int xcb_xinerama_query_screens_cookie_t ;
struct TYPE_10__ {int monitor_id; struct TYPE_10__* next; int h; int w; int y; int x; } ;
typedef TYPE_3__ workarea ;
struct TYPE_11__ {TYPE_3__* monitors; int connection; } ;
struct TYPE_8__ {int height; int width; int y_org; int x_org; } ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int) ;
 TYPE_6__* VAR_0 ;
 int * FUNC_2 (int ,int ,int *) ;
 TYPE_2__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6 ()
{
    xcb_xinerama_query_screens_cookie_t VAR_1 = FUNC_4 (
        VAR_0->connection
        );

    xcb_xinerama_query_screens_reply_t *VAR_2 = FUNC_2 (
        VAR_0->connection,
        VAR_1,
        ((void*)0)
        );

    xcb_xinerama_screen_info_iterator_t VAR_3 = FUNC_3 (
        VAR_2
        );

    for (; VAR_3.rem > 0; FUNC_5 ( &VAR_3 ) ) {
        workarea *VAR_4 = FUNC_1 ( sizeof ( workarea ) );

        VAR_4->x = VAR_3.data->x_org;
        VAR_4->y = VAR_3.data->y_org;
        VAR_4->w = VAR_3.data->width;
        VAR_4->h = VAR_3.data->height;

        VAR_4->next = VAR_0->monitors;
        VAR_0->monitors = VAR_4;
    }

    int VAR_5 = 0;
    for ( workarea *VAR_6 = VAR_0->monitors; VAR_6; VAR_6 = VAR_6->next ) {
        VAR_6->monitor_id = VAR_5++;
    }

    FUNC_0 ( VAR_2 );
}
