
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ last_cmd_time; scalar_t__ state; int sfd; TYPE_2__* thread; } ;
typedef TYPE_3__ conn ;
struct TYPE_11__ {scalar_t__ idle_timeout; int verbose; } ;
struct TYPE_8__ {int idle_kicks; } ;
struct TYPE_9__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;

void FUNC_3(conn *VAR_6) {
    if (VAR_4.idle_timeout > 0 &&
        (VAR_3 - VAR_6->last_cmd_time) > VAR_4.idle_timeout) {
        if (VAR_6->state != VAR_1 && VAR_6->state != VAR_2) {
            if (VAR_4.verbose > 1)
                FUNC_2(VAR_5,
                    "fd %d wants to timeout, but isn't in read state", VAR_6->sfd);
            return;
        }

        if (VAR_4.verbose > 1)
            FUNC_2(VAR_5, "Closing idle fd %d\n", VAR_6->sfd);

        VAR_6->thread->stats.idle_kicks++;

        FUNC_0(VAR_6, VAR_0);
        FUNC_1(VAR_6);
    }
}
