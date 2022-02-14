
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct rewriteConfigState {int dummy; } ;
struct TYPE_8__ {scalar_t__ down_after_period; scalar_t__ failover_timeout; long notification_script; long client_reconfig_script; long auth_pass; int name; int renamed_commands; int * runid; TYPE_2__* addr; int sentinels; int slaves; scalar_t__ leader_epoch; scalar_t__ config_epoch; int parallel_syncs; int quorum; } ;
typedef TYPE_1__ sentinelRedisInstance ;
struct TYPE_9__ {int port; int ip; } ;
typedef TYPE_2__ sentinelAddr ;
typedef void* sds ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_10__ {unsigned long long myid; scalar_t__ deny_scripts_reconfig; unsigned long long announce_port; scalar_t__ announce_ip; scalar_t__ current_epoch; int masters; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rewriteConfigState*,char*,void*,int) ;
 void* FUNC_6 (int ,char*,...) ;
 void* FUNC_7 (void*,scalar_t__,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;
 void* FUNC_10 (char*) ;
 TYPE_7__ VAR_4 ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_12 (TYPE_1__*) ;

void FUNC_13(struct rewriteConfigState *VAR_5) {
    dictIterator *VAR_6, *VAR_7;
    dictEntry *VAR_8;
    sds VAR_9;


    VAR_9 = FUNC_6(FUNC_8(), "sentinel myid %s", VAR_4.myid);
    FUNC_5(VAR_5,"sentinel",VAR_9,1);


    VAR_9 = FUNC_6(FUNC_8(), "sentinel deny-scripts-reconfig %s",
        VAR_4.deny_scripts_reconfig ? "yes" : "no");
    FUNC_5(VAR_5,"sentinel",VAR_9,
        VAR_4.deny_scripts_reconfig != VAR_0);


    VAR_6 = FUNC_0(VAR_4.masters);
    while((VAR_8 = FUNC_3(VAR_6)) != ((void*)0)) {
        sentinelRedisInstance *VAR_10, *VAR_11;
        sentinelAddr *VAR_12;


        VAR_10 = FUNC_2(VAR_8);
        VAR_12 = FUNC_12(VAR_10);
        VAR_9 = FUNC_6(FUNC_8(),"sentinel monitor %s %s %d %d",
            VAR_10->name, VAR_12->ip, VAR_12->port,
            VAR_10->quorum);
        FUNC_5(VAR_5,"sentinel",VAR_9,1);


        if (VAR_10->down_after_period != VAR_1) {
            VAR_9 = FUNC_6(FUNC_8(),
                "sentinel down-after-milliseconds %s %ld",
                VAR_10->name, (long) VAR_10->down_after_period);
            FUNC_5(VAR_5,"sentinel",VAR_9,1);
        }


        if (VAR_10->failover_timeout != VAR_2) {
            VAR_9 = FUNC_6(FUNC_8(),
                "sentinel failover-timeout %s %ld",
                VAR_10->name, (long) VAR_10->failover_timeout);
            FUNC_5(VAR_5,"sentinel",VAR_9,1);
        }


        if (VAR_10->parallel_syncs != VAR_3) {
            VAR_9 = FUNC_6(FUNC_8(),
                "sentinel parallel-syncs %s %d",
                VAR_10->name, VAR_10->parallel_syncs);
            FUNC_5(VAR_5,"sentinel",VAR_9,1);
        }


        if (VAR_10->notification_script) {
            VAR_9 = FUNC_6(FUNC_8(),
                "sentinel notification-script %s %s",
                VAR_10->name, VAR_10->notification_script);
            FUNC_5(VAR_5,"sentinel",VAR_9,1);
        }


        if (VAR_10->client_reconfig_script) {
            VAR_9 = FUNC_6(FUNC_8(),
                "sentinel client-reconfig-script %s %s",
                VAR_10->name, VAR_10->client_reconfig_script);
            FUNC_5(VAR_5,"sentinel",VAR_9,1);
        }


        if (VAR_10->auth_pass) {
            VAR_9 = FUNC_6(FUNC_8(),
                "sentinel auth-pass %s %s",
                VAR_10->name, VAR_10->auth_pass);
            FUNC_5(VAR_5,"sentinel",VAR_9,1);
        }


        VAR_9 = FUNC_6(FUNC_8(),
            "sentinel config-epoch %s %llu",
            VAR_10->name, (unsigned long long) VAR_10->config_epoch);
        FUNC_5(VAR_5,"sentinel",VAR_9,1);


        VAR_9 = FUNC_6(FUNC_8(),
            "sentinel leader-epoch %s %llu",
            VAR_10->name, (unsigned long long) VAR_10->leader_epoch);
        FUNC_5(VAR_5,"sentinel",VAR_9,1);


        VAR_7 = FUNC_0(VAR_10->slaves);
        while((VAR_8 = FUNC_3(VAR_7)) != ((void*)0)) {
            sentinelAddr *VAR_13;

            VAR_11 = FUNC_2(VAR_8);
            VAR_13 = VAR_11->addr;






            if (FUNC_11(VAR_13,VAR_12))
                VAR_13 = VAR_10->addr;
            VAR_9 = FUNC_6(FUNC_8(),
                "sentinel known-replica %s %s %d",
                VAR_10->name, VAR_13->ip, VAR_13->port);
            FUNC_5(VAR_5,"sentinel",VAR_9,1);
        }
        FUNC_4(VAR_7);


        VAR_7 = FUNC_0(VAR_10->sentinels);
        while((VAR_8 = FUNC_3(VAR_7)) != ((void*)0)) {
            VAR_11 = FUNC_2(VAR_8);
            if (VAR_11->runid == ((void*)0)) continue;
            VAR_9 = FUNC_6(FUNC_8(),
                "sentinel known-sentinel %s %s %d %s",
                VAR_10->name, VAR_11->addr->ip, VAR_11->addr->port, VAR_11->runid);
            FUNC_5(VAR_5,"sentinel",VAR_9,1);
        }
        FUNC_4(VAR_7);


        VAR_7 = FUNC_0(VAR_10->renamed_commands);
        while((VAR_8 = FUNC_3(VAR_7)) != ((void*)0)) {
            sds VAR_14 = FUNC_1(VAR_8);
            sds VAR_15 = FUNC_2(VAR_8);
            VAR_9 = FUNC_6(FUNC_8(),
                "sentinel rename-command %s %s %s",
                VAR_10->name, VAR_14, VAR_15);
            FUNC_5(VAR_5,"sentinel",VAR_9,1);
        }
        FUNC_4(VAR_7);
    }


    VAR_9 = FUNC_6(FUNC_8(),
        "sentinel current-epoch %llu", (unsigned long long) VAR_4.current_epoch);
    FUNC_5(VAR_5,"sentinel",VAR_9,1);


    if (VAR_4.announce_ip) {
        VAR_9 = FUNC_10("sentinel announce-ip ");
        VAR_9 = FUNC_7(VAR_9, VAR_4.announce_ip, FUNC_9(VAR_4.announce_ip));
        FUNC_5(VAR_5,"sentinel",VAR_9,1);
    }


    if (VAR_4.announce_port) {
        VAR_9 = FUNC_6(FUNC_8(),"sentinel announce-port %d",
                            VAR_4.announce_port);
        FUNC_5(VAR_5,"sentinel",VAR_9,1);
    }

    FUNC_4(VAR_6);
}
