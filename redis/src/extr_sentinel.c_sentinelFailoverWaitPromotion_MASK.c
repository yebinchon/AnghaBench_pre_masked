
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ failover_state_change_time; scalar_t__ failover_timeout; } ;
typedef TYPE_1__ sentinelRedisInstance ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,TYPE_1__*,char*) ;

void FUNC_3(sentinelRedisInstance *VAR_1) {


    if (FUNC_0() - VAR_1->failover_state_change_time > VAR_1->failover_timeout) {
        FUNC_2(VAR_0,"-failover-abort-slave-timeout",VAR_1,"%@");
        FUNC_1(VAR_1);
    }
}
