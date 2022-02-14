
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int failover_state_change_time; int failover_state; struct TYPE_7__* promoted_slave; int flags; } ;
typedef TYPE_1__ sentinelRedisInstance ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,TYPE_1__*,char*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

void FUNC_4(sentinelRedisInstance *VAR_4) {
    sentinelRedisInstance *VAR_5 = FUNC_3(VAR_4);



    if (VAR_5 == ((void*)0)) {
        FUNC_2(VAR_1,"-failover-abort-no-good-slave",VAR_4,"%@");
        FUNC_1(VAR_4);
    } else {
        FUNC_2(VAR_1,"+selected-slave",VAR_5,"%@");
        VAR_5->flags |= VAR_3;
        VAR_4->promoted_slave = VAR_5;
        VAR_4->failover_state = VAR_2;
        VAR_4->failover_state_change_time = FUNC_0();
        FUNC_2(VAR_0,"+failover-state-send-slaveof-noone",
            VAR_5, "%@");
    }
}
