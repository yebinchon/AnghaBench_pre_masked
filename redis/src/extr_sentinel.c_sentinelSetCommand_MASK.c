
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct TYPE_17__ {long long down_after_period; long long failover_timeout; long long parallel_syncs; long long quorum; int renamed_commands; int * auth_pass; int * client_reconfig_script; int * notification_script; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef char* sds ;
struct TYPE_18__ {char* ptr; } ;
typedef TYPE_2__ robj ;
struct TYPE_19__ {int argc; TYPE_2__** argv; } ;
typedef TYPE_3__ client ;
struct TYPE_20__ {int ok; } ;
struct TYPE_16__ {scalar_t__ deny_scripts_reconfig; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char*,char*,...) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,char*,char*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,long long*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*) ;
 int * FUNC_11 (char*) ;
 TYPE_11__ VAR_3 ;
 int FUNC_12 (int ,char*,TYPE_1__*,char*,char*,...) ;
 int FUNC_13 () ;
 TYPE_1__* FUNC_14 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_15 (TYPE_1__*) ;
 TYPE_4__ VAR_4 ;
 int FUNC_16 (char*,char*) ;
 scalar_t__ FUNC_17 (char*) ;

void FUNC_18(client *VAR_5) {
    sentinelRedisInstance *VAR_6;
    int VAR_7, VAR_8 = 0;
    int VAR_9 = 0;
    char *VAR_10;

    if ((VAR_6 = FUNC_14(VAR_5,VAR_5->argv[2]))
        == ((void*)0)) return;


    for (VAR_7 = 3; VAR_7 < VAR_5->argc; VAR_7++) {
        int VAR_11 = (VAR_5->argc-1) - VAR_7;
        VAR_10 = VAR_5->argv[VAR_7]->ptr;
        long long VAR_12;
        int VAR_13 = VAR_7;

        if (!FUNC_16(VAR_10,"down-after-milliseconds") && VAR_11 > 0) {

            robj *VAR_14 = VAR_5->argv[++VAR_7];
            if (FUNC_7(VAR_14,&VAR_12) == VAR_0 || VAR_12 <= 0) {
                VAR_9 = VAR_7;
                goto badfmt;
            }
            VAR_6->down_after_period = VAR_12;
            FUNC_15(VAR_6);
            VAR_8++;
        } else if (!FUNC_16(VAR_10,"failover-timeout") && VAR_11 > 0) {

            robj *VAR_15 = VAR_5->argv[++VAR_7];
            if (FUNC_7(VAR_15,&VAR_12) == VAR_0 || VAR_12 <= 0) {
                VAR_9 = VAR_7;
                goto badfmt;
            }
            VAR_6->failover_timeout = VAR_12;
            VAR_8++;
        } else if (!FUNC_16(VAR_10,"parallel-syncs") && VAR_11 > 0) {

            robj *VAR_16 = VAR_5->argv[++VAR_7];
            if (FUNC_7(VAR_16,&VAR_12) == VAR_0 || VAR_12 <= 0) {
                VAR_9 = VAR_7;
                goto badfmt;
            }
            VAR_6->parallel_syncs = VAR_12;
            VAR_8++;
        } else if (!FUNC_16(VAR_10,"notification-script") && VAR_11 > 0) {

            char *VAR_17 = VAR_5->argv[++VAR_7]->ptr;
            if (VAR_3.deny_scripts_reconfig) {
                FUNC_2(VAR_5,
                    "Reconfiguration of scripts path is denied for "
                    "security reasons. Check the deny-scripts-reconfig "
                    "configuration directive in your Sentinel configuration");
                return;
            }

            if (FUNC_17(VAR_17) && FUNC_0(VAR_17,VAR_2) == -1) {
                FUNC_2(VAR_5,
                    "Notification script seems non existing or non executable");
                if (VAR_8) FUNC_13();
                return;
            }
            FUNC_9(VAR_6->notification_script);
            VAR_6->notification_script = FUNC_17(VAR_17) ? FUNC_11(VAR_17) : ((void*)0);
            VAR_8++;
        } else if (!FUNC_16(VAR_10,"client-reconfig-script") && VAR_11 > 0) {

            char *VAR_18 = VAR_5->argv[++VAR_7]->ptr;
            if (VAR_3.deny_scripts_reconfig) {
                FUNC_2(VAR_5,
                    "Reconfiguration of scripts path is denied for "
                    "security reasons. Check the deny-scripts-reconfig "
                    "configuration directive in your Sentinel configuration");
                return;
            }

            if (FUNC_17(VAR_18) && FUNC_0(VAR_18,VAR_2) == -1) {
                FUNC_2(VAR_5,
                    "Client reconfiguration script seems non existing or "
                    "non executable");
                if (VAR_8) FUNC_13();
                return;
            }
            FUNC_9(VAR_6->client_reconfig_script);
            VAR_6->client_reconfig_script = FUNC_17(VAR_18) ? FUNC_11(VAR_18) : ((void*)0);
            VAR_8++;
        } else if (!FUNC_16(VAR_10,"auth-pass") && VAR_11 > 0) {

            char *VAR_19 = VAR_5->argv[++VAR_7]->ptr;
            FUNC_9(VAR_6->auth_pass);
            VAR_6->auth_pass = FUNC_17(VAR_19) ? FUNC_11(VAR_19) : ((void*)0);
            VAR_8++;
        } else if (!FUNC_16(VAR_10,"quorum") && VAR_11 > 0) {

            robj *VAR_20 = VAR_5->argv[++VAR_7];
            if (FUNC_7(VAR_20,&VAR_12) == VAR_0 || VAR_12 <= 0) {
                VAR_9 = VAR_7;
                goto badfmt;
            }
            VAR_6->quorum = VAR_12;
            VAR_8++;
        } else if (!FUNC_16(VAR_10,"rename-command") && VAR_11 > 1) {

            sds VAR_21 = VAR_5->argv[++VAR_7]->ptr;
            sds VAR_22 = VAR_5->argv[++VAR_7]->ptr;

            if ((FUNC_10(VAR_21) == 0) || (FUNC_10(VAR_22) == 0)) {
                VAR_9 = FUNC_10(VAR_22) ? VAR_7-1 : VAR_7;
                goto badfmt;
            }


            FUNC_5(VAR_6->renamed_commands,VAR_21);



            if (!FUNC_6(((void*)0),VAR_21,VAR_22)) {
                VAR_21 = FUNC_8(VAR_21);
                VAR_22 = FUNC_8(VAR_22);
                FUNC_4(VAR_6->renamed_commands,VAR_21,VAR_22);
            }
            VAR_8++;
        } else {
            FUNC_3(VAR_5,"Unknown option or number of arguments for "
                                  "SENTINEL SET '%s'", VAR_10);
            if (VAR_8) FUNC_13();
            return;
        }


        int VAR_23 = VAR_7-VAR_13+1;
        switch(VAR_23) {
        case 2:
            FUNC_12(VAR_1,"+set",VAR_6,"%@ %s %s",VAR_5->argv[VAR_13]->ptr,
                                                          VAR_5->argv[VAR_13+1]->ptr);
            break;
        case 3:
            FUNC_12(VAR_1,"+set",VAR_6,"%@ %s %s %s",VAR_5->argv[VAR_13]->ptr,
                                                             VAR_5->argv[VAR_13+1]->ptr,
                                                             VAR_5->argv[VAR_13+2]->ptr);
            break;
        default:
            FUNC_12(VAR_1,"+set",VAR_6,"%@ %s",VAR_5->argv[VAR_13]->ptr);
            break;
        }
    }

    if (VAR_8) FUNC_13();
    FUNC_1(VAR_5,VAR_4.ok);
    return;

badfmt:
    if (VAR_8) FUNC_13();
    FUNC_3(VAR_5,"Invalid argument '%s' for SENTINEL SET '%s'",
        (char*)VAR_5->argv[VAR_9]->ptr,VAR_10);
}
