
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int n; } ;
struct TYPE_7__ {int ping_rec_interval; TYPE_4__ route_wakeup; int timeval; int route_wakeup_expire; } ;
struct TYPE_6__ {int restart_sleep_seconds; } ;
struct TYPE_5__ {scalar_t__ tuntap; int route_list; } ;
struct context {TYPE_3__ c2; TYPE_2__ persist; TYPE_1__ c1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct context*,int) ;
 int FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;
 int FUNC_5 (struct context*,int ,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 () ;

void
FUNC_11(struct context *VAR_6)
{
    if (FUNC_8(VAR_6->c1.route_list, VAR_6->c1.tuntap))
    {
        FUNC_0(VAR_6, 0);
    }
    else if (FUNC_3(&VAR_6->c2.route_wakeup_expire, &VAR_6->c2.timeval, VAR_1))
    {
        FUNC_0(VAR_6, 1);
    }
    else
    {
        FUNC_4(VAR_0, "Route: Waiting for TUN/TAP interface to come up...");
        if (VAR_6->c1.tuntap)
        {
            if (!FUNC_9(VAR_6->c1.tuntap))
            {
                FUNC_5(VAR_6, VAR_4, "ip-fail");
                VAR_6->persist.restart_sleep_seconds = 10;




            }
        }
        FUNC_10();
        if (VAR_6->c2.route_wakeup.n != 1)
        {
            FUNC_1(&VAR_6->c2.route_wakeup, 1, VAR_5);
        }
        FUNC_2(&VAR_6->c2.ping_rec_interval);
    }
}
