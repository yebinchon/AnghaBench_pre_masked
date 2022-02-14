
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ xcb_get_property_reply_t ;
typedef int xcb_get_property_cookie_t ;
typedef int xcb_atom_t ;
struct TYPE_8__ {int connection; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (int ,scalar_t__) ;
 scalar_t__* VAR_4 ;
 char* FUNC_3 (int ,scalar_t__) ;
 TYPE_5__* VAR_5 ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

char* FUNC_8 ( xcb_window_t VAR_6, xcb_atom_t VAR_7 )
{
    xcb_get_property_cookie_t VAR_8 = FUNC_4 ( VAR_5->connection, 0, VAR_6, VAR_7, VAR_3, 0, VAR_1 );
    xcb_get_property_reply_t *VAR_9 = FUNC_5 ( VAR_5->connection, VAR_8, ((void*)0) );
    if ( VAR_9 ) {
        if ( FUNC_7 ( VAR_9 ) > 0 ) {
            char *VAR_10 = ((void*)0);
            if ( VAR_9->type == VAR_4[VAR_2] ) {
                VAR_10 = FUNC_2 ( FUNC_6 ( VAR_9 ), FUNC_7 ( VAR_9 ) );
            }
            else if ( VAR_9->type == VAR_4[VAR_0] ) {
                VAR_10 = FUNC_3 ( FUNC_6 ( VAR_9 ), FUNC_7 ( VAR_9 ) );
            }
            else {
                VAR_10 = FUNC_1 ( "Invalid encoding." );
            }

            FUNC_0 ( VAR_9 );
            return VAR_10;
        }
        FUNC_0 ( VAR_9 );
    }
    return ((void*)0);
}
