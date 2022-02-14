
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int last_master_down_reply_time; int flags; scalar_t__ failover_state; TYPE_2__* link; TYPE_1__* addr; int * leader; int sentinels; } ;
typedef TYPE_3__ sentinelRedisInstance ;
typedef int port ;
typedef int mstime_t ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_12__ {char* myid; int current_epoch; } ;
struct TYPE_10__ {int pending_commands; int cc; scalar_t__ disconnected; } ;
struct TYPE_9__ {int ip; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,TYPE_3__*,char*,int ,int ,char*,int ,char*) ;
 int FUNC_7 (int *) ;
 TYPE_6__ VAR_6 ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int VAR_7 ;

void FUNC_9(sentinelRedisInstance *VAR_8, int VAR_9) {
    dictIterator *VAR_10;
    dictEntry *VAR_11;

    VAR_10 = FUNC_0(VAR_8->sentinels);
    while((VAR_11 = FUNC_2(VAR_10)) != ((void*)0)) {
        sentinelRedisInstance *VAR_12 = FUNC_1(VAR_11);
        mstime_t VAR_13 = FUNC_5() - VAR_12->last_master_down_reply_time;
        char VAR_14[32];
        int VAR_15;


        if (VAR_13 > VAR_2*5) {
            VAR_12->flags &= ~VAR_4;
            FUNC_7(VAR_12->leader);
            VAR_12->leader = ((void*)0);
        }






        if ((VAR_8->flags & VAR_5) == 0) continue;
        if (VAR_12->link->disconnected) continue;
        if (!(VAR_9 & VAR_1) &&
            FUNC_5() - VAR_12->last_master_down_reply_time < VAR_2)
            continue;


        FUNC_4(VAR_14,sizeof(VAR_14),VAR_8->addr->port);
        VAR_15 = FUNC_6(VAR_12->link->cc,
                    VAR_7, VAR_12,
                    "%s is-master-down-by-addr %s %s %llu %s",
                    FUNC_8(VAR_12,"SENTINEL"),
                    VAR_8->addr->ip, VAR_14,
                    VAR_6.current_epoch,
                    (VAR_8->failover_state > VAR_3) ?
                    VAR_6.myid : "*");
        if (VAR_15 == VAR_0) VAR_12->link->pending_commands++;
    }
    FUNC_3(VAR_10);
}
