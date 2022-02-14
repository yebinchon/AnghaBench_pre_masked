
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ status; scalar_t__ mode; long retry_interval; scalar_t__ dbNumber; scalar_t__ auth; scalar_t__ stream; scalar_t__ watching; } ;
typedef TYPE_1__ RedisSock ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_2 ;
 long FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (long) ;

int
FUNC_8(RedisSock *VAR_3, int VAR_4)
{
    int VAR_5;
    char *VAR_6;

    if (!VAR_3 || !VAR_3->stream || VAR_3->status == VAR_1) {
        if (!VAR_4) {
            FUNC_0( "Connection closed", 0);
        }
        return -1;
    }
    VAR_2 = 0;
    if (FUNC_2(VAR_3->stream) == 0) {

        return 0;
    } else if (VAR_3->mode == VAR_0 || VAR_3->watching) {
        VAR_6 = "Connection lost and socket is in MULTI/watching mode";
    } else {
        VAR_6 = "Connection lost";

        for (VAR_5 = 0; VAR_5 < 10; ++VAR_5) {

            if (VAR_3->stream) {
                FUNC_5(VAR_3, 1);
            }

            if (VAR_3->retry_interval) {

                long VAR_7 = (VAR_5 ? VAR_3->retry_interval : (FUNC_1() % VAR_3->retry_interval));
                FUNC_7(VAR_7);
            }

            if (FUNC_4(VAR_3) == 0) {

                VAR_2 = 0;
                if (FUNC_2(VAR_3->stream) == 0) {

                    if (VAR_3->auth && FUNC_3(VAR_3) != 0) {
                        VAR_6 = "AUTH failed while reconnecting";
                        break;
                    }

                    if (VAR_3->dbNumber && FUNC_6(VAR_3) != 0) {
                        VAR_6 = "SELECT failed while reconnecting";
                        break;
                    }

                    return 0;
                }
            }
        }
    }

    FUNC_5(VAR_3, 1);
    VAR_3->status = VAR_1;
    if (!VAR_4) {
        FUNC_0( VAR_6, 0);
    }
    return -1;
}
