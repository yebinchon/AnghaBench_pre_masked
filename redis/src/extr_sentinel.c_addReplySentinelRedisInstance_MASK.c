
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* name; char* runid; int flags; int role_reported; char* notification_script; char* client_reconfig_script; scalar_t__ slave_master_link_status; char* slave_master_host; char* leader; scalar_t__ leader_epoch; scalar_t__ last_hello_time; scalar_t__ slave_repl_offset; scalar_t__ slave_priority; scalar_t__ slave_master_port; scalar_t__ master_link_down_time; scalar_t__ parallel_syncs; scalar_t__ failover_timeout; scalar_t__ quorum; int sentinels; int slaves; scalar_t__ config_epoch; scalar_t__ role_reported_time; scalar_t__ info_refresh; scalar_t__ down_after_period; scalar_t__ o_down_since_time; scalar_t__ s_down_since_time; TYPE_2__* link; int failover_state; TYPE_1__* addr; } ;
typedef TYPE_3__ sentinelRedisInstance ;
typedef int client ;
struct TYPE_6__ {scalar_t__ last_pong_time; scalar_t__ last_avail_time; scalar_t__ act_ping_time; scalar_t__ refcount; scalar_t__ pending_commands; scalar_t__ disconnected; } ;
struct TYPE_5__ {char* ip; scalar_t__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,scalar_t__) ;
 void* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 char* FUNC_5 (char*,char*) ;
 char* FUNC_6 () ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,void*,int) ;

void FUNC_12(client *VAR_12, sentinelRedisInstance *VAR_13) {
    char *VAR_14 = FUNC_6();
    void *VAR_15;
    int VAR_16 = 0;

    VAR_15 = FUNC_2(VAR_12);

    FUNC_0(VAR_12,"name");
    FUNC_0(VAR_12,VAR_13->name);
    VAR_16++;

    FUNC_0(VAR_12,"ip");
    FUNC_0(VAR_12,VAR_13->addr->ip);
    VAR_16++;

    FUNC_0(VAR_12,"port");
    FUNC_1(VAR_12,VAR_13->addr->port);
    VAR_16++;

    FUNC_0(VAR_12,"runid");
    FUNC_0(VAR_12,VAR_13->runid ? VAR_13->runid : "");
    VAR_16++;

    FUNC_0(VAR_12,"flags");
    if (VAR_13->flags & VAR_11) VAR_14 = FUNC_5(VAR_14,"s_down,");
    if (VAR_13->flags & VAR_4) VAR_14 = FUNC_5(VAR_14,"o_down,");
    if (VAR_13->flags & VAR_2) VAR_14 = FUNC_5(VAR_14,"master,");
    if (VAR_13->flags & VAR_10) VAR_14 = FUNC_5(VAR_14,"slave,");
    if (VAR_13->flags & VAR_9) VAR_14 = FUNC_5(VAR_14,"sentinel,");
    if (VAR_13->link->disconnected) VAR_14 = FUNC_5(VAR_14,"disconnected,");
    if (VAR_13->flags & VAR_3) VAR_14 = FUNC_5(VAR_14,"master_down,");
    if (VAR_13->flags & VAR_1)
        VAR_14 = FUNC_5(VAR_14,"failover_in_progress,");
    if (VAR_13->flags & VAR_5) VAR_14 = FUNC_5(VAR_14,"promoted,");
    if (VAR_13->flags & VAR_8) VAR_14 = FUNC_5(VAR_14,"reconf_sent,");
    if (VAR_13->flags & VAR_7) VAR_14 = FUNC_5(VAR_14,"reconf_inprog,");
    if (VAR_13->flags & VAR_6) VAR_14 = FUNC_5(VAR_14,"reconf_done,");

    if (FUNC_8(VAR_14) != 0) FUNC_9(VAR_14,0,-2);
    FUNC_0(VAR_12,VAR_14);
    FUNC_7(VAR_14);
    VAR_16++;

    FUNC_0(VAR_12,"link-pending-commands");
    FUNC_1(VAR_12,VAR_13->link->pending_commands);
    VAR_16++;

    FUNC_0(VAR_12,"link-refcount");
    FUNC_1(VAR_12,VAR_13->link->refcount);
    VAR_16++;

    if (VAR_13->flags & VAR_1) {
        FUNC_0(VAR_12,"failover-state");
        FUNC_0(VAR_12,(char*)FUNC_10(VAR_13->failover_state));
        VAR_16++;
    }

    FUNC_0(VAR_12,"last-ping-sent");
    FUNC_1(VAR_12,
        VAR_13->link->act_ping_time ? (FUNC_4() - VAR_13->link->act_ping_time) : 0);
    VAR_16++;

    FUNC_0(VAR_12,"last-ok-ping-reply");
    FUNC_1(VAR_12,FUNC_4() - VAR_13->link->last_avail_time);
    VAR_16++;

    FUNC_0(VAR_12,"last-ping-reply");
    FUNC_1(VAR_12,FUNC_4() - VAR_13->link->last_pong_time);
    VAR_16++;

    if (VAR_13->flags & VAR_11) {
        FUNC_0(VAR_12,"s-down-time");
        FUNC_1(VAR_12,FUNC_4()-VAR_13->s_down_since_time);
        VAR_16++;
    }

    if (VAR_13->flags & VAR_4) {
        FUNC_0(VAR_12,"o-down-time");
        FUNC_1(VAR_12,FUNC_4()-VAR_13->o_down_since_time);
        VAR_16++;
    }

    FUNC_0(VAR_12,"down-after-milliseconds");
    FUNC_1(VAR_12,VAR_13->down_after_period);
    VAR_16++;


    if (VAR_13->flags & (VAR_2|VAR_10)) {
        FUNC_0(VAR_12,"info-refresh");
        FUNC_1(VAR_12,FUNC_4() - VAR_13->info_refresh);
        VAR_16++;

        FUNC_0(VAR_12,"role-reported");
        FUNC_0(VAR_12, (VAR_13->role_reported == VAR_2) ? "master" :
                                                                   "slave");
        VAR_16++;

        FUNC_0(VAR_12,"role-reported-time");
        FUNC_1(VAR_12,FUNC_4() - VAR_13->role_reported_time);
        VAR_16++;
    }


    if (VAR_13->flags & VAR_2) {
        FUNC_0(VAR_12,"config-epoch");
        FUNC_1(VAR_12,VAR_13->config_epoch);
        VAR_16++;

        FUNC_0(VAR_12,"num-slaves");
        FUNC_1(VAR_12,FUNC_3(VAR_13->slaves));
        VAR_16++;

        FUNC_0(VAR_12,"num-other-sentinels");
        FUNC_1(VAR_12,FUNC_3(VAR_13->sentinels));
        VAR_16++;

        FUNC_0(VAR_12,"quorum");
        FUNC_1(VAR_12,VAR_13->quorum);
        VAR_16++;

        FUNC_0(VAR_12,"failover-timeout");
        FUNC_1(VAR_12,VAR_13->failover_timeout);
        VAR_16++;

        FUNC_0(VAR_12,"parallel-syncs");
        FUNC_1(VAR_12,VAR_13->parallel_syncs);
        VAR_16++;

        if (VAR_13->notification_script) {
            FUNC_0(VAR_12,"notification-script");
            FUNC_0(VAR_12,VAR_13->notification_script);
            VAR_16++;
        }

        if (VAR_13->client_reconfig_script) {
            FUNC_0(VAR_12,"client-reconfig-script");
            FUNC_0(VAR_12,VAR_13->client_reconfig_script);
            VAR_16++;
        }
    }


    if (VAR_13->flags & VAR_10) {
        FUNC_0(VAR_12,"master-link-down-time");
        FUNC_1(VAR_12,VAR_13->master_link_down_time);
        VAR_16++;

        FUNC_0(VAR_12,"master-link-status");
        FUNC_0(VAR_12,
            (VAR_13->slave_master_link_status == VAR_0) ?
            "ok" : "err");
        VAR_16++;

        FUNC_0(VAR_12,"master-host");
        FUNC_0(VAR_12,
            VAR_13->slave_master_host ? VAR_13->slave_master_host : "?");
        VAR_16++;

        FUNC_0(VAR_12,"master-port");
        FUNC_1(VAR_12,VAR_13->slave_master_port);
        VAR_16++;

        FUNC_0(VAR_12,"slave-priority");
        FUNC_1(VAR_12,VAR_13->slave_priority);
        VAR_16++;

        FUNC_0(VAR_12,"slave-repl-offset");
        FUNC_1(VAR_12,VAR_13->slave_repl_offset);
        VAR_16++;
    }


    if (VAR_13->flags & VAR_9) {
        FUNC_0(VAR_12,"last-hello-message");
        FUNC_1(VAR_12,FUNC_4() - VAR_13->last_hello_time);
        VAR_16++;

        FUNC_0(VAR_12,"voted-leader");
        FUNC_0(VAR_12,VAR_13->leader ? VAR_13->leader : "?");
        VAR_16++;

        FUNC_0(VAR_12,"voted-leader-epoch");
        FUNC_1(VAR_12,VAR_13->leader_epoch);
        VAR_16++;
    }

    FUNC_11(VAR_12,VAR_15,VAR_16);
}
