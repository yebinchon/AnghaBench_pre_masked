
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_5__ {int root_x; int root_y; } ;
typedef TYPE_1__ xcb_query_pointer_reply_t ;
typedef int xcb_query_pointer_cookie_t ;
struct TYPE_6__ {int connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_3 ( xcb_window_t VAR_3, int *VAR_4, int *VAR_5 )
{
    *VAR_4 = 0;
    *VAR_5 = 0;
    xcb_query_pointer_cookie_t VAR_6 = FUNC_1 ( VAR_2->connection, VAR_3 );
    xcb_query_pointer_reply_t *VAR_7 = FUNC_2 ( VAR_2->connection, VAR_6, ((void*)0) );
    if ( VAR_7 ) {
        *VAR_4 = VAR_7->root_x;
        *VAR_5 = VAR_7->root_y;
        FUNC_0 ( VAR_7 );
        return VAR_1;
    }

    return VAR_0;
}
