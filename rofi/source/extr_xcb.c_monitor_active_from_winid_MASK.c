
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_11__ {int height; int width; scalar_t__ y; scalar_t__ dst_y; scalar_t__ x; scalar_t__ dst_x; } ;
typedef TYPE_2__ xcb_translate_coordinates_reply_t ;
typedef int xcb_translate_coordinates_cookie_t ;
typedef TYPE_2__ xcb_get_geometry_reply_t ;
typedef int xcb_get_geometry_cookie_t ;
typedef int xcb_drawable_t ;
struct TYPE_12__ {int h; int w; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_4__ workarea ;
struct TYPE_13__ {int connection; TYPE_1__* screen; } ;
struct TYPE_10__ {int root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_7__* VAR_2 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_5 ( xcb_drawable_t VAR_3, workarea *VAR_4 )
{
    xcb_window_t VAR_5 = VAR_2->screen->root;
    xcb_get_geometry_cookie_t VAR_6 = FUNC_1 ( VAR_2->connection, VAR_3 );
    xcb_get_geometry_reply_t *VAR_7 = FUNC_2 ( VAR_2->connection, VAR_6, ((void*)0) );
    if ( VAR_7 ) {
        xcb_translate_coordinates_cookie_t VAR_8 = FUNC_3 ( VAR_2->connection, VAR_3, VAR_5, VAR_7->x, VAR_7->y );
        xcb_translate_coordinates_reply_t *VAR_9 = FUNC_4 ( VAR_2->connection, VAR_8, ((void*)0) );
        if ( VAR_9 ) {



            VAR_4->x = VAR_9->dst_x - VAR_7->x;
            VAR_4->y = VAR_9->dst_y - VAR_7->y;
            VAR_4->w = VAR_7->width;
            VAR_4->h = VAR_7->height;
            FUNC_0 ( VAR_7 );
            FUNC_0 ( VAR_9 );
            return VAR_1;
        }
        FUNC_0 ( VAR_7 );
    }
    return VAR_0;
}
