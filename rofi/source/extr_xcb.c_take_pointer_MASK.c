
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_5__ {scalar_t__ status; } ;
typedef TYPE_1__ xcb_grab_pointer_reply_t ;
typedef int xcb_grab_pointer_cookie_t ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int connection; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct timespec*,int *) ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_7 ( xcb_window_t VAR_8, int VAR_9 )
{
    int VAR_10 = 0;
    while ( VAR_1 ) {
        if ( FUNC_4 ( VAR_7->connection ) ) {
            FUNC_2 ( "Connection has error" );
            FUNC_0 ( VAR_0 );
        }
        xcb_grab_pointer_cookie_t VAR_11 = FUNC_5 ( VAR_7->connection, 1, VAR_8, VAR_3,
                                                          VAR_4, VAR_4, VAR_8, VAR_6, VAR_2 );
        xcb_grab_pointer_reply_t *VAR_12 = FUNC_6 ( VAR_7->connection, VAR_11, ((void*)0) );
        if ( VAR_12 ) {
            if ( VAR_12->status == VAR_5 ) {
                FUNC_1 ( VAR_12 );
                return 1;
            }
            FUNC_1 ( VAR_12 );
        }
        if ( ( ++VAR_10 ) > VAR_9 ) {
            break;
        }
        struct timespec VAR_13 = {
             .tv_sec = 0,
             .tv_nsec = 1000000
        };
        FUNC_3 ( &VAR_13, ((void*)0) );
    }
    return 0;
}
