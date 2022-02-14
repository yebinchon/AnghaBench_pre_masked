
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_get_property_cookie_t ;
struct TYPE_13__ {unsigned int desktop_viewport_len; TYPE_2__* desktop_viewport; } ;
typedef TYPE_3__ xcb_ewmh_get_desktop_viewport_reply_t ;
struct TYPE_14__ {int x; int y; } ;
typedef TYPE_4__ workarea ;
struct TYPE_15__ {int ewmh; int screen_nbr; TYPE_1__* screen; } ;
struct TYPE_12__ {int x; int y; } ;
struct TYPE_11__ {int root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int,TYPE_4__*) ;
 int FUNC_2 (int,int,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ,int*,int*) ;
 TYPE_7__* VAR_2 ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ,unsigned int*,int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ,TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9 ( int VAR_3, workarea *VAR_4 )
{
    xcb_window_t VAR_5 = VAR_2->screen->root;
    int VAR_6, VAR_7;

    if ( VAR_3 == -3 ) {
        if ( FUNC_3 ( VAR_5, &VAR_6, &VAR_7 ) ) {
            FUNC_2 ( VAR_6, VAR_7, VAR_4 );
            VAR_4->x = VAR_6;
            VAR_4->y = VAR_7;
            return VAR_1;
        }
    }

    else if ( VAR_3 == -1 ) {

        unsigned int VAR_8 = 0;
        xcb_get_property_cookie_t VAR_9;
        VAR_9 = FUNC_4 ( &VAR_2->ewmh, VAR_2->screen_nbr );
        if ( FUNC_5 ( &VAR_2->ewmh, VAR_9, &VAR_8, ((void*)0) ) ) {
            xcb_get_property_cookie_t VAR_10 = FUNC_6 ( &VAR_2->ewmh, VAR_2->screen_nbr );
            xcb_ewmh_get_desktop_viewport_reply_t VAR_11;
            if ( FUNC_7 ( &VAR_2->ewmh, VAR_10, &VAR_11, ((void*)0) ) ) {
                if ( VAR_8 < VAR_11.desktop_viewport_len ) {
                    FUNC_2 ( VAR_11.desktop_viewport[VAR_8].x,
                                         VAR_11.desktop_viewport[VAR_8].y, VAR_4 );
                    FUNC_8 ( &VAR_11 );
                    return VAR_1;
                }
                else {
                    FUNC_0 ( "Viewport does not exist for current desktop: %d, falling back to mouse location (-5)", VAR_8 );
                }
                FUNC_8 ( &VAR_11 );
            }
            else {
                FUNC_0 ( "Failed to get viewport for current desktop: %d, falling back to mouse location (-5).", VAR_8 );
            }
        }
        else {
            FUNC_0 ( "Failed to get current desktop, falling back to mouse location (-5)." );
        }
    }
    else if ( VAR_3 == -2 || VAR_3 == -4 ) {
        if ( FUNC_1 ( VAR_3, VAR_4 ) ) {
            return VAR_1;
        }
    }

    else if ( VAR_3 == -5 ) {
        if ( FUNC_3 ( VAR_5, &VAR_6, &VAR_7 ) ) {
            FUNC_2 ( VAR_6, VAR_7, VAR_4 );
            return VAR_1;
        }

        return VAR_0;
    }
    FUNC_0 ( "Failed to find monitor, fall back to monitor showing mouse." );
    return FUNC_9 ( -5, VAR_4 );
}
