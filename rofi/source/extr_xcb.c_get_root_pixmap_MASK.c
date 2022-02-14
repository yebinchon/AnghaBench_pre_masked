
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int root; } ;
typedef TYPE_1__ xcb_screen_t ;
typedef int xcb_pixmap_t ;
typedef int xcb_get_property_reply_t ;
typedef int xcb_get_property_cookie_t ;
typedef int xcb_connection_t ;
typedef int xcb_atom_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ,int) ;
 int * FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static xcb_pixmap_t FUNC_6 ( xcb_connection_t *VAR_2,
                                      xcb_screen_t *VAR_3,
                                      xcb_atom_t VAR_4 )
{
    xcb_get_property_cookie_t VAR_5;
    xcb_get_property_reply_t *VAR_6;
    xcb_pixmap_t VAR_7 = VAR_1;

    VAR_5 = FUNC_2 ( VAR_2,
                                0,
                                VAR_3->root,
                                VAR_4,
                                VAR_0,
                                0,
                                1 );

    VAR_6 = FUNC_3 ( VAR_2, VAR_5, ((void*)0) );

    if ( VAR_6 ) {
        if ( FUNC_5 ( VAR_6 ) == sizeof ( xcb_pixmap_t ) ) {
            FUNC_1 ( &VAR_7, FUNC_4 ( VAR_6 ), sizeof ( xcb_pixmap_t ) );
        }
        FUNC_0 ( VAR_6 );
    }

    return VAR_7;
}
