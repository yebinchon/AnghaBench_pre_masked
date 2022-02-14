
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_visualtype_t ;
struct TYPE_7__ {scalar_t__ map_state; double width; double height; int visual; } ;
typedef TYPE_1__ xcb_get_window_attributes_reply_t ;
typedef int xcb_get_window_attributes_cookie_t ;
typedef TYPE_1__ xcb_get_geometry_reply_t ;
typedef int xcb_get_geometry_cookie_t ;
typedef int cairo_t ;
typedef int cairo_surface_t ;
struct TYPE_8__ {int connection; int screen; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (double,double) ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,double,double) ;
 int FUNC_5 (int *,int *,int ,int ) ;
 int * FUNC_6 (int *,int ,double,double) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int ,int ,int *,double,double) ;
 int FUNC_10 (TYPE_1__*) ;
 int * FUNC_11 (int ,int ) ;
 TYPE_5__* VAR_3 ;
 int FUNC_12 (int ,int ) ;
 TYPE_1__* FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (int ,int ) ;
 TYPE_1__* FUNC_15 (int ,int ,int *) ;

cairo_surface_t *FUNC_16 ( xcb_window_t VAR_4, int VAR_5 )
{
    xcb_get_geometry_cookie_t VAR_6;
    xcb_get_geometry_reply_t *VAR_7;

    VAR_6 = FUNC_12(VAR_3->connection, VAR_4);
    VAR_7 = FUNC_13(VAR_3->connection, VAR_6, ((void*)0));
    if ( VAR_7 == ((void*)0) ) {
        return ((void*)0);
    }

    xcb_get_window_attributes_cookie_t VAR_8 = FUNC_14 (VAR_3->connection, VAR_4);
    xcb_get_window_attributes_reply_t *VAR_9 = FUNC_15 (VAR_3->connection,
            VAR_8,
            ((void*)0) );
    if ( VAR_9 == ((void*)0) || ( VAR_9->map_state != VAR_2 ) ) {
        FUNC_10(VAR_7);
        if ( VAR_9 ) FUNC_10(VAR_9);
        return ((void*)0);
    }

    xcb_visualtype_t * VAR_10 = FUNC_11(VAR_3->screen, VAR_9->visual);
    FUNC_10 ( VAR_9 );

    cairo_surface_t *VAR_11 = FUNC_9 ( VAR_3->connection, VAR_4, VAR_10 , VAR_7->width, VAR_7->height );

    if ( FUNC_8 ( VAR_11 ) != VAR_1 ) {
        FUNC_7(VAR_11);
        FUNC_10(VAR_7);
        return ((void*)0);
    }


    int VAR_12 = FUNC_0(VAR_7->width, VAR_7->height);
    double VAR_13 = (double)VAR_5/ VAR_12;

    cairo_surface_t *VAR_14 = FUNC_6 ( VAR_11, VAR_0, VAR_7->width*VAR_13,VAR_7->height*VAR_13 );
    FUNC_10 ( VAR_7 );

    if ( FUNC_8 ( VAR_14 ) != VAR_1 ) {
        FUNC_7 ( VAR_11 ) ;
        return ((void*)0);
    }

    cairo_t *VAR_15 = FUNC_1 (VAR_14);
    FUNC_4 ( VAR_15, VAR_13, VAR_13 );
    FUNC_5 ( VAR_15, VAR_11, 0, 0 );
    FUNC_3 ( VAR_15);
    FUNC_2(VAR_15);

    FUNC_7(VAR_11);
    return VAR_14;
}
