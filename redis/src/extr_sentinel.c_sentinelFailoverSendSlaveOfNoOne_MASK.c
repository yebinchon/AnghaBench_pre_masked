
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ failover_state_change_time; scalar_t__ failover_timeout; int failover_state; struct TYPE_8__* promoted_slave; TYPE_1__* link; } ;
typedef TYPE_2__ sentinelRedisInstance ;
struct TYPE_7__ {scalar_t__ disconnected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,int *,int ) ;

void FUNC_4(sentinelRedisInstance *VAR_4) {
    int VAR_5;




    if (VAR_4->promoted_slave->link->disconnected) {
        if (FUNC_0() - VAR_4->failover_state_change_time > VAR_4->failover_timeout) {
            FUNC_2(VAR_2,"-failover-abort-slave-timeout",VAR_4,"%@");
            FUNC_1(VAR_4);
        }
        return;
    }





    VAR_5 = FUNC_3(VAR_4->promoted_slave,((void*)0),0);
    if (VAR_5 != VAR_0) return;
    FUNC_2(VAR_1, "+failover-state-wait-promotion",
        VAR_4->promoted_slave,"%@");
    VAR_4->failover_state = VAR_3;
    VAR_4->failover_state_change_time = FUNC_0();
}
