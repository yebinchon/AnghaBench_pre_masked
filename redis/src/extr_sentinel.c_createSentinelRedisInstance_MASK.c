
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int slavename ;
struct TYPE_7__ {int flags; char* name; int quorum; int role_reported; void* slave_conf_change_time; void* role_reported_time; int * info; int * client_reconfig_script; int * notification_script; int * promoted_slave; scalar_t__ failover_delay_logged; int failover_timeout; scalar_t__ failover_start_time; scalar_t__ failover_state_change_time; int failover_state; scalar_t__ failover_epoch; scalar_t__ leader_epoch; int * leader; void* renamed_commands; scalar_t__ info_refresh; int * slaves; struct TYPE_7__* master; int parallel_syncs; int * sentinels; scalar_t__ slave_repl_offset; int slave_master_link_status; scalar_t__ slave_master_port; int * slave_master_host; scalar_t__ slave_reconf_sent_time; int slave_priority; int * auth_pass; scalar_t__ master_link_down_time; int down_after_period; scalar_t__ o_down_since_time; scalar_t__ s_down_since_time; void* last_master_down_reply_time; void* last_hello_time; void* last_pub_time; int link; int * addr; scalar_t__ config_epoch; int * runid; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int sentinelAddr ;
typedef int dict ;
struct TYPE_8__ {int * masters; } ;


 int VAR_0 ;
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
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 () ;
 int * FUNC_2 (char*,int) ;
 int FUNC_3 (int *,char*,TYPE_1__*) ;
 void* FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_6 () ;
 int FUNC_7 (int *) ;
 int VAR_13 ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;
 TYPE_3__ VAR_14 ;
 int FUNC_10 (int) ;
 TYPE_1__* FUNC_11 (int) ;

sentinelRedisInstance *FUNC_12(char *VAR_15, int VAR_16, char *VAR_17, int VAR_18, int VAR_19, sentinelRedisInstance *VAR_20) {
    sentinelRedisInstance *VAR_21;
    sentinelAddr *VAR_22;
    dict *VAR_23 = ((void*)0);
    char VAR_24[VAR_1], *VAR_25;

    FUNC_10(VAR_16 & (VAR_8|VAR_10|VAR_9));
    FUNC_10((VAR_16 & VAR_8) || VAR_20 != ((void*)0));


    VAR_22 = FUNC_2(VAR_17,VAR_18);
    if (VAR_22 == ((void*)0)) return ((void*)0);


    if (VAR_16 & VAR_10) {
        FUNC_0(VAR_24, sizeof(VAR_24), VAR_17, VAR_18);
        VAR_15 = VAR_24;
    }





    if (VAR_16 & VAR_8) VAR_23 = VAR_14.masters;
    else if (VAR_16 & VAR_10) VAR_23 = VAR_20->slaves;
    else if (VAR_16 & VAR_9) VAR_23 = VAR_20->sentinels;
    VAR_25 = FUNC_9(VAR_15);
    if (FUNC_5(VAR_23,VAR_25)) {
        FUNC_7(VAR_22);
        FUNC_8(VAR_25);
        VAR_11 = VAR_0;
        return ((void*)0);
    }


    VAR_21 = FUNC_11(sizeof(*VAR_21));


    VAR_21->flags = VAR_16;
    VAR_21->name = VAR_25;
    VAR_21->runid = ((void*)0);
    VAR_21->config_epoch = 0;
    VAR_21->addr = VAR_22;
    VAR_21->link = FUNC_1();
    VAR_21->last_pub_time = FUNC_6();
    VAR_21->last_hello_time = FUNC_6();
    VAR_21->last_master_down_reply_time = FUNC_6();
    VAR_21->s_down_since_time = 0;
    VAR_21->o_down_since_time = 0;
    VAR_21->down_after_period = VAR_20 ? VAR_20->down_after_period :
                            VAR_2;
    VAR_21->master_link_down_time = 0;
    VAR_21->auth_pass = ((void*)0);
    VAR_21->slave_priority = VAR_5;
    VAR_21->slave_reconf_sent_time = 0;
    VAR_21->slave_master_host = ((void*)0);
    VAR_21->slave_master_port = 0;
    VAR_21->slave_master_link_status = VAR_7;
    VAR_21->slave_repl_offset = 0;
    VAR_21->sentinels = FUNC_4(&VAR_12,((void*)0));
    VAR_21->quorum = VAR_19;
    VAR_21->parallel_syncs = VAR_4;
    VAR_21->master = VAR_20;
    VAR_21->slaves = FUNC_4(&VAR_12,((void*)0));
    VAR_21->info_refresh = 0;
    VAR_21->renamed_commands = FUNC_4(&VAR_13,((void*)0));


    VAR_21->leader = ((void*)0);
    VAR_21->leader_epoch = 0;
    VAR_21->failover_epoch = 0;
    VAR_21->failover_state = VAR_6;
    VAR_21->failover_state_change_time = 0;
    VAR_21->failover_start_time = 0;
    VAR_21->failover_timeout = VAR_3;
    VAR_21->failover_delay_logged = 0;
    VAR_21->promoted_slave = ((void*)0);
    VAR_21->notification_script = ((void*)0);
    VAR_21->client_reconfig_script = ((void*)0);
    VAR_21->info = ((void*)0);


    VAR_21->role_reported = VAR_21->flags & (VAR_8|VAR_10);
    VAR_21->role_reported_time = FUNC_6();
    VAR_21->slave_conf_change_time = FUNC_6();


    FUNC_3(VAR_23, VAR_21->name, VAR_21);
    return VAR_21;
}
