
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_get_property_cookie_t ;
struct TYPE_5__ {scalar_t__ strings_len; int strings; } ;
typedef TYPE_1__ xcb_ewmh_get_utf8_strings_reply_t ;
struct TYPE_6__ {int ewmh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 TYPE_4__* VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int ,TYPE_1__*,void*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8 ( void )
{
    xcb_window_t VAR_4 = 0;
    xcb_get_property_cookie_t VAR_5 = FUNC_3 ( &VAR_3->ewmh,
                                                                                    FUNC_7 () );

    if ( FUNC_2 ( &VAR_3->ewmh, VAR_5, &VAR_4, ((void*)0) ) ) {
        xcb_ewmh_get_utf8_strings_reply_t VAR_6;
        xcb_get_property_cookie_t VAR_7 = FUNC_6 ( &( VAR_3->ewmh ), VAR_4 );
        if ( FUNC_5 ( &( VAR_3->ewmh ), VAR_7, &VAR_6, (void *) 0 ) ) {
            if ( VAR_6.strings_len > 0 ) {
                FUNC_0 ( "Found window manager: %s", VAR_6.strings );
                if ( FUNC_1 ( VAR_6.strings, "i3" ) == 0 ) {
                    VAR_2 = VAR_0 | VAR_1;
                }
            }
            FUNC_4 ( &VAR_6 );
        }
    }
}
