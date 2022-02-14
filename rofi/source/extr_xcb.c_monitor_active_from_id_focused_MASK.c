
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_12__ {scalar_t__ dst_y; scalar_t__ dst_x; int height; int width; scalar_t__ y; scalar_t__ x; int root; int parent; } ;
typedef TYPE_1__ xcb_translate_coordinates_reply_t ;
typedef int xcb_translate_coordinates_cookie_t ;
typedef TYPE_1__ xcb_query_tree_reply_t ;
typedef int xcb_query_tree_cookie_t ;
typedef int xcb_get_property_cookie_t ;
typedef TYPE_1__ xcb_get_geometry_reply_t ;
typedef int xcb_get_geometry_cookie_t ;
struct TYPE_13__ {int h; int w; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_4__ workarea ;
struct TYPE_14__ {int connection; int ewmh; int screen_nbr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,TYPE_4__*) ;
 TYPE_8__* VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int *,int *) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__* FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ) ;
 TYPE_1__* FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,int ,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_10 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_11 ( int VAR_3, workarea *VAR_4 )
{
    int VAR_5 = VAR_0;
    xcb_window_t VAR_6;
    xcb_get_property_cookie_t VAR_7;
    VAR_7 = FUNC_3 ( &VAR_2->ewmh, VAR_2->screen_nbr );
    if ( !FUNC_4 ( &VAR_2->ewmh, VAR_7, &VAR_6, ((void*)0) ) ) {
        FUNC_1 ( "Failed to get active window, falling back to mouse location (-5)." );
        return VAR_5;
    }
    xcb_query_tree_cookie_t VAR_8 = FUNC_7 ( VAR_2->connection, VAR_6 );
    xcb_query_tree_reply_t *VAR_9 = FUNC_8 ( VAR_2->connection, VAR_8, ((void*)0) );
    if ( !VAR_9 ) {
        FUNC_1 ( "Failed to get parent window, falling back to mouse location (-5)." );
        return VAR_5;
    }

    xcb_get_geometry_cookie_t VAR_10 = FUNC_5 ( VAR_2->connection, VAR_6 );
    xcb_get_geometry_reply_t *VAR_11 = FUNC_6 ( VAR_2->connection, VAR_10, ((void*)0) );
    if ( !VAR_11 ) {
        FUNC_1 ( "Failed to get geometry of active window, falling back to mouse location (-5)." );
        FUNC_0 ( VAR_9 );
        return VAR_5;
    }
    xcb_translate_coordinates_cookie_t VAR_12 = FUNC_9 ( VAR_2->connection, VAR_9->parent, VAR_11->root, VAR_11->x, VAR_11->y );
    xcb_translate_coordinates_reply_t *VAR_13 = FUNC_10 ( VAR_2->connection, VAR_12, ((void*)0) );
    if ( VAR_13 ) {
        if ( VAR_3 == -2 ) {



            VAR_4->x = VAR_13->dst_x - VAR_11->x;
            VAR_4->y = VAR_13->dst_y - VAR_11->y;
            VAR_4->w = VAR_11->width;
            VAR_4->h = VAR_11->height;
            VAR_5 = VAR_1;
        }
        else if ( VAR_3 == -4 ) {
            FUNC_2 ( VAR_13->dst_x, VAR_13->dst_y, VAR_4 );
            VAR_5 = VAR_1;
        }
        FUNC_0 ( VAR_13 );
    }
    else {
        FUNC_1 ( "Failed to get translate position of active window, falling back to mouse location (-5)." );
    }
    FUNC_0 ( VAR_11 );
    FUNC_0 ( VAR_9 );
    return VAR_5;
}
