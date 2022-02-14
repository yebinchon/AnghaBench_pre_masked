
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ explicit_exit_notification_time_wait; int occ_op; int explicit_exit_notification_interval; int timeval; } ;
struct TYPE_5__ {scalar_t__ explicit_exit_notification; } ;
struct TYPE_6__ {TYPE_1__ ce; } ;
struct context {TYPE_4__ c2; TYPE_3__* sig; TYPE_2__ options; } ;
struct TYPE_7__ {char* signal_text; int signal_received; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ VAR_3 ;

void
FUNC_3(struct context *VAR_4)
{
    if (FUNC_2(&VAR_4->c2.explicit_exit_notification_interval,
                              &VAR_4->c2.timeval,
                              VAR_0))
    {
        FUNC_0(VAR_4->c2.explicit_exit_notification_time_wait && VAR_4->options.ce.explicit_exit_notification);
        if (VAR_3 >= VAR_4->c2.explicit_exit_notification_time_wait + VAR_4->options.ce.explicit_exit_notification)
        {
            FUNC_1(&VAR_4->c2.explicit_exit_notification_interval);
            VAR_4->sig->signal_received = VAR_2;
            VAR_4->sig->signal_text = "exit-with-notification";
        }
        else
        {
            VAR_4->c2.occ_op = VAR_1;
        }
    }
}
