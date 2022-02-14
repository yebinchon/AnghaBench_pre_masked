
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned long long config_epoch; int quorum; int renamed_commands; void* runid; void* leader_epoch; void* auth_pass; void* client_reconfig_script; void* notification_script; void* parallel_syncs; void* failover_timeout; void* down_after_period; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef void* sds ;
struct TYPE_9__ {unsigned long long current_epoch; int deny_scripts_reconfig; void* announce_port; void* announce_ip; int myid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 void* FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char*,int ,char*,void*,int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,void*,void*) ;
 int VAR_6 ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (char*) ;
 TYPE_5__ VAR_7 ;
 TYPE_1__* FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*) ;
 void* FUNC_12 (char*,int *,int) ;
 int FUNC_13 (char*) ;

char *FUNC_14(char **VAR_8, int VAR_9) {
    sentinelRedisInstance *VAR_10;

    if (!FUNC_10(VAR_8[0],"monitor") && VAR_9 == 5) {

        int VAR_11 = FUNC_1(VAR_8[4]);

        if (VAR_11 <= 0) return "Quorum must be 1 or greater.";
        if (FUNC_2(VAR_8[1],VAR_2,VAR_8[2],
                                        FUNC_1(VAR_8[3]),VAR_11,((void*)0)) == ((void*)0))
        {
            switch(VAR_6) {
            case 130: return "Duplicated master name.";
            case 128: return "Can't resolve master instance hostname.";
            case 129: return "Invalid port number";
            }
        }
    } else if (!FUNC_10(VAR_8[0],"down-after-milliseconds") && VAR_9 == 3) {

        VAR_10 = FUNC_7(VAR_8[1]);
        if (!VAR_10) return "No such master with specified name.";
        VAR_10->down_after_period = FUNC_1(VAR_8[2]);
        if (VAR_10->down_after_period <= 0)
            return "negative or zero time parameter.";
        FUNC_8(VAR_10);
    } else if (!FUNC_10(VAR_8[0],"failover-timeout") && VAR_9 == 3) {

        VAR_10 = FUNC_7(VAR_8[1]);
        if (!VAR_10) return "No such master with specified name.";
        VAR_10->failover_timeout = FUNC_1(VAR_8[2]);
        if (VAR_10->failover_timeout <= 0)
            return "negative or zero time parameter.";
   } else if (!FUNC_10(VAR_8[0],"parallel-syncs") && VAR_9 == 3) {

        VAR_10 = FUNC_7(VAR_8[1]);
        if (!VAR_10) return "No such master with specified name.";
        VAR_10->parallel_syncs = FUNC_1(VAR_8[2]);
   } else if (!FUNC_10(VAR_8[0],"notification-script") && VAR_9 == 3) {

        VAR_10 = FUNC_7(VAR_8[1]);
        if (!VAR_10) return "No such master with specified name.";
        if (FUNC_0(VAR_8[2],VAR_5) == -1)
            return "Notification script seems non existing or non executable.";
        VAR_10->notification_script = FUNC_6(VAR_8[2]);
   } else if (!FUNC_10(VAR_8[0],"client-reconfig-script") && VAR_9 == 3) {

        VAR_10 = FUNC_7(VAR_8[1]);
        if (!VAR_10) return "No such master with specified name.";
        if (FUNC_0(VAR_8[2],VAR_5) == -1)
            return "Client reconfiguration script seems non existing or "
                   "non executable.";
        VAR_10->client_reconfig_script = FUNC_6(VAR_8[2]);
   } else if (!FUNC_10(VAR_8[0],"auth-pass") && VAR_9 == 3) {

        VAR_10 = FUNC_7(VAR_8[1]);
        if (!VAR_10) return "No such master with specified name.";
        VAR_10->auth_pass = FUNC_6(VAR_8[2]);
    } else if (!FUNC_10(VAR_8[0],"current-epoch") && VAR_9 == 2) {

        unsigned long long VAR_12 = FUNC_12(VAR_8[1],((void*)0),10);
        if (VAR_12 > VAR_7.current_epoch)
            VAR_7.current_epoch = VAR_12;
    } else if (!FUNC_10(VAR_8[0],"myid") && VAR_9 == 2) {
        if (FUNC_11(VAR_8[1]) != VAR_0)
            return "Malformed Sentinel id in myid option.";
        FUNC_4(VAR_7.myid,VAR_8[1],VAR_0);
    } else if (!FUNC_10(VAR_8[0],"config-epoch") && VAR_9 == 3) {

        VAR_10 = FUNC_7(VAR_8[1]);
        if (!VAR_10) return "No such master with specified name.";
        VAR_10->config_epoch = FUNC_12(VAR_8[2],((void*)0),10);



        if (VAR_10->config_epoch > VAR_7.current_epoch)
            VAR_7.current_epoch = VAR_10->config_epoch;
    } else if (!FUNC_10(VAR_8[0],"leader-epoch") && VAR_9 == 3) {

        VAR_10 = FUNC_7(VAR_8[1]);
        if (!VAR_10) return "No such master with specified name.";
        VAR_10->leader_epoch = FUNC_12(VAR_8[2],((void*)0),10);
    } else if ((!FUNC_10(VAR_8[0],"known-slave") ||
                !FUNC_10(VAR_8[0],"known-replica")) && VAR_9 == 4)
    {
        sentinelRedisInstance *VAR_13;


        VAR_10 = FUNC_7(VAR_8[1]);
        if (!VAR_10) return "No such master with specified name.";
        if ((VAR_13 = FUNC_2(((void*)0),VAR_4,VAR_8[2],
                    FUNC_1(VAR_8[3]), VAR_10->quorum, VAR_10)) == ((void*)0))
        {
            return "Wrong hostname or port for replica.";
        }
    } else if (!FUNC_10(VAR_8[0],"known-sentinel") &&
               (VAR_9 == 4 || VAR_9 == 5)) {
        sentinelRedisInstance *VAR_14;

        if (VAR_9 == 5) {

            VAR_10 = FUNC_7(VAR_8[1]);
            if (!VAR_10) return "No such master with specified name.";
            if ((VAR_14 = FUNC_2(VAR_8[4],VAR_3,VAR_8[2],
                        FUNC_1(VAR_8[3]), VAR_10->quorum, VAR_10)) == ((void*)0))
            {
                return "Wrong hostname or port for sentinel.";
            }
            VAR_14->runid = FUNC_6(VAR_8[4]);
            FUNC_9(VAR_14);
        }
    } else if (!FUNC_10(VAR_8[0],"rename-command") && VAR_9 == 4) {

        VAR_10 = FUNC_7(VAR_8[1]);
        if (!VAR_10) return "No such master with specified name.";
        sds VAR_15 = FUNC_6(VAR_8[2]);
        sds VAR_16 = FUNC_6(VAR_8[3]);
        if (FUNC_3(VAR_10->renamed_commands,VAR_15,VAR_16) != VAR_1) {
            FUNC_5(VAR_15);
            FUNC_5(VAR_16);
            return "Same command renamed multiple times with rename-command.";
        }
    } else if (!FUNC_10(VAR_8[0],"announce-ip") && VAR_9 == 2) {

        if (FUNC_11(VAR_8[1]))
            VAR_7.announce_ip = FUNC_6(VAR_8[1]);
    } else if (!FUNC_10(VAR_8[0],"announce-port") && VAR_9 == 2) {

        VAR_7.announce_port = FUNC_1(VAR_8[1]);
    } else if (!FUNC_10(VAR_8[0],"deny-scripts-reconfig") && VAR_9 == 2) {

        if ((VAR_7.deny_scripts_reconfig = FUNC_13(VAR_8[1])) == -1) {
            return "Please specify yes or no for the "
                   "deny-scripts-reconfig options.";
        }
    } else {
        return "Unrecognized sentinel configuration statement.";
    }
    return ((void*)0);
}
