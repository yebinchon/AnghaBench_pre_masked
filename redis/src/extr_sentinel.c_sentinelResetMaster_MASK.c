
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int role_reported; void* role_reported_time; TYPE_4__* link; int * slave_master_host; int * runid; int * promoted_slave; scalar_t__ failover_start_time; scalar_t__ failover_state_change_time; int failover_state; int * leader; void* sentinels; void* slaves; } ;
typedef TYPE_1__ sentinelRedisInstance ;
struct TYPE_6__ {void* last_pong_time; void* last_avail_time; scalar_t__ last_ping_time; void* act_ping_time; int pc; int cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *,int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_5 ;
 void* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,TYPE_1__*,char*) ;
 int FUNC_6 (int) ;

void FUNC_7(sentinelRedisInstance *VAR_6, int VAR_7) {
    FUNC_6(VAR_6->flags & VAR_4);
    FUNC_1(VAR_6->slaves);
    VAR_6->slaves = FUNC_0(&VAR_5,((void*)0));
    if (!(VAR_7 & VAR_3)) {
        FUNC_1(VAR_6->sentinels);
        VAR_6->sentinels = FUNC_0(&VAR_5,((void*)0));
    }
    FUNC_2(VAR_6->link,VAR_6->link->cc);
    FUNC_2(VAR_6->link,VAR_6->link->pc);
    VAR_6->flags &= VAR_4;
    if (VAR_6->leader) {
        FUNC_4(VAR_6->leader);
        VAR_6->leader = ((void*)0);
    }
    VAR_6->failover_state = VAR_1;
    VAR_6->failover_state_change_time = 0;
    VAR_6->failover_start_time = 0;
    VAR_6->promoted_slave = ((void*)0);
    FUNC_4(VAR_6->runid);
    FUNC_4(VAR_6->slave_master_host);
    VAR_6->runid = ((void*)0);
    VAR_6->slave_master_host = ((void*)0);
    VAR_6->link->act_ping_time = FUNC_3();
    VAR_6->link->last_ping_time = 0;
    VAR_6->link->last_avail_time = FUNC_3();
    VAR_6->link->last_pong_time = FUNC_3();
    VAR_6->role_reported_time = FUNC_3();
    VAR_6->role_reported = VAR_4;
    if (VAR_7 & VAR_2)
        FUNC_5(VAR_0,"+reset-master",VAR_6,"%@");
}
