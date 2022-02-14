
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_5__ {scalar_t__ status; } ;
typedef TYPE_1__ xcb_grab_keyboard_reply_t ;
typedef int xcb_grab_keyboard_cookie_t ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int connection; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct timespec*,int *) ;
 TYPE_3__* VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_7 ( xcb_window_t VAR_6, int VAR_7 )
{
    int VAR_8 = 0;
    while ( VAR_1 ) {
        if ( FUNC_4 ( VAR_5->connection ) ) {
            FUNC_2 ( "Connection has error" );
            FUNC_0 ( VAR_0 );
        }
        xcb_grab_keyboard_cookie_t VAR_9 = FUNC_5 ( VAR_5->connection,
                                                            1, VAR_6, VAR_2, VAR_3,
                                                            VAR_3 );
        xcb_grab_keyboard_reply_t *VAR_10 = FUNC_6 ( VAR_5->connection, VAR_9, ((void*)0) );
        if ( VAR_10 ) {
            if ( VAR_10->status == VAR_4 ) {
                FUNC_1 ( VAR_10 );
                return 1;
            }
            FUNC_1 ( VAR_10 );
        }
        if ( ( ++VAR_8 ) > VAR_7 ) {
            break;
        }
        struct timespec VAR_11 = {
             .tv_sec = 0,
             .tv_nsec = 1000000
        };
        FUNC_3 ( &VAR_11, ((void*)0) );
    }
    return 0;
}
