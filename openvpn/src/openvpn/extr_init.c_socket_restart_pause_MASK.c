
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int restart_sleep_seconds; } ;
struct TYPE_6__ {int proto; int connect_retry_seconds; int connect_retry_seconds_max; } ;
struct TYPE_7__ {int unsuccessful_attempts; TYPE_2__ ce; TYPE_1__* connection_list; int gremlin; } ;
struct context {TYPE_4__ persist; TYPE_3__ options; } ;
struct TYPE_5__ {int len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;



 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_7(struct context *VAR_2)
{
    int VAR_3 = 2;
    int VAR_4 = 0;

    switch (VAR_2->options.ce.proto)
    {
        case 129:
            VAR_3 = 1;
            break;

        case 128:
        case 130:
            VAR_3 = VAR_2->options.ce.connect_retry_seconds;
            break;
    }
    if (VAR_2->options.ce.proto != 129)
    {
        VAR_4 = (VAR_2->options.unsuccessful_attempts / VAR_2->options.connection_list->len) - 4;
        if (VAR_4 > 0)
        {

            VAR_3 = FUNC_4(VAR_3, 1) << FUNC_5(VAR_4, 15);
        }

        if (VAR_3 > VAR_2->options.ce.connect_retry_seconds_max)
        {
            VAR_3 = VAR_2->options.ce.connect_retry_seconds_max;
        }
    }

    if (VAR_2->persist.restart_sleep_seconds > 0 && VAR_2->persist.restart_sleep_seconds > VAR_3)
    {
        VAR_3 = VAR_2->persist.restart_sleep_seconds;
    }
    else if (VAR_2->persist.restart_sleep_seconds == -1)
    {
        VAR_3 = 0;
    }
    VAR_2->persist.restart_sleep_seconds = 0;


    if (FUNC_2(VAR_3))
    {
        VAR_3 = 0;
    }

    if (VAR_3)
    {
        FUNC_6(VAR_1, "Restart pause, %d second(s)", VAR_3);
        FUNC_3(VAR_3);
    }
}
