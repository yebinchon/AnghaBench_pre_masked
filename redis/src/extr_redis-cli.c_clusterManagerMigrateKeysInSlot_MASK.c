
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_25__ {scalar_t__ type; int len; char* str; size_t elements; } ;
typedef TYPE_2__ redisReply ;
struct TYPE_26__ {char* value; } ;
typedef TYPE_3__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_27__ {int port; int ip; } ;
typedef TYPE_4__ clusterManagerNode ;
struct TYPE_24__ {int flags; } ;
struct TYPE_28__ {TYPE_1__ cluster_manager_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_4__*,char*,int,int) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*,TYPE_2__*,int *) ;
 TYPE_4__* FUNC_4 (TYPE_4__*,int,char**) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,...) ;
 TYPE_2__* FUNC_7 (TYPE_4__*,TYPE_4__*,TYPE_2__*,int,int,char*) ;
 int FUNC_8 (TYPE_4__*,TYPE_4__*,int,char*,int *) ;
 TYPE_7__ VAR_4 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int * FUNC_11 () ;
 scalar_t__ FUNC_12 (int *) ;
 TYPE_3__* FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (char*,...) ;
 int VAR_5 ;
 int FUNC_17 (char*,char*) ;
 int * FUNC_18 (char*,char*) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(clusterManagerNode *VAR_6,
                                           clusterManagerNode *VAR_7,
                                           int VAR_8, int VAR_9,
                                           int VAR_10, int VAR_11,
                                           char **VAR_12)
{
    int VAR_13 = 1;
    int VAR_14 = VAR_4.cluster_manager_command.flags &
                 VAR_0;
    int VAR_15 = VAR_4.cluster_manager_command.flags &
                     VAR_1;
    while (1) {
        char *VAR_16 = ((void*)0);
        redisReply *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
        VAR_17 = FUNC_0(VAR_6, "CLUSTER "
                                        "GETKEYSINSLOT %d %d", VAR_8,
                                        VAR_10);
        VAR_13 = (VAR_17 != ((void*)0));
        if (!VAR_13) return 0;
        if (VAR_17->type == VAR_3) {
            VAR_13 = 0;
            if (VAR_12 != ((void*)0)) {
                *VAR_12 = FUNC_20((VAR_17->len + 1) * sizeof(char));
                FUNC_17(*VAR_12, VAR_17->str);
                FUNC_1(VAR_6, *VAR_12);
            }
            goto next;
        }
        FUNC_2(VAR_17->type == VAR_2);
        size_t VAR_19 = VAR_17->elements;
        if (VAR_19 == 0) {
            FUNC_10(VAR_17);
            break;
        }
        if (VAR_11) VAR_16 = FUNC_20((VAR_19+1) * sizeof(char));

        VAR_18 = FUNC_7(VAR_6, VAR_7,
                                                         VAR_17, 0, VAR_9,
                                                         VAR_16);
        if (VAR_18 == ((void*)0)) goto next;
        if (VAR_18->type == VAR_3) {
            int VAR_20 = FUNC_18(VAR_18->str, "BUSYKEY") != ((void*)0);
            int VAR_21 = 0;
            if (!VAR_20) {


                char *VAR_22 = ((void*)0);
                clusterManagerNode *VAR_23 =
                    FUNC_4(VAR_6, VAR_8, &VAR_22);
                if (!VAR_23) {
                    if (VAR_22 == ((void*)0)) VAR_21 = 1;
                    else {
                        FUNC_1(VAR_6,
                                                          VAR_22);
                        FUNC_19(VAR_22);
                    }
                }
            }

            if (VAR_20 || VAR_21) {


                if (VAR_14 && VAR_21) {
                    FUNC_6("*** Slot was not served, setting "
                                          "owner to node %s:%d.\n",
                                          VAR_7->ip, VAR_7->port);
                    FUNC_8(VAR_6, VAR_7, VAR_8, "node", ((void*)0));
                }
                if (VAR_20) {
                    FUNC_6("\n*** Target key exists\n");
                    if (!VAR_15) {
                        FUNC_6("*** Checking key values on "
                                              "both nodes...\n");
                        list *VAR_24 = FUNC_11();
                        VAR_13 = FUNC_3(VAR_6,
                            VAR_7, VAR_17, VAR_24);
                        if (!VAR_13) {
                            FUNC_5("*** Value check failed!\n");
                            FUNC_14(VAR_24);
                            goto next;
                        }
                        if (FUNC_12(VAR_24) > 0) {
                            VAR_13 = 0;
                            FUNC_5(
                                "*** Found %d key(s) in both source node and "
                                "target node having different values.\n"
                                "    Source node: %s:%d\n"
                                "    Target node: %s:%d\n"
                                "    Keys(s):\n",
                                FUNC_12(VAR_24),
                                VAR_6->ip, VAR_6->port,
                                VAR_7->ip, VAR_7->port);
                            listIter VAR_25;
                            listNode *VAR_26;
                            FUNC_15(VAR_24, &VAR_25);
                            while((VAR_26 = FUNC_13(&VAR_25)) != ((void*)0)) {
                                char *VAR_27 = VAR_26->value;
                                FUNC_5("    - %s\n", VAR_27);
                            }
                            FUNC_5("Please fix the above key(s) "
                                                 "manually and try again "
                                                 "or relaunch the command \n"
                                                 "with --cluster-replace "
                                                 "option to force key "
                                                 "overriding.\n");
                            FUNC_14(VAR_24);
                            goto next;
                        }
                        FUNC_14(VAR_24);
                    }
                    FUNC_6("*** Replacing target keys...\n");
                }
                FUNC_10(VAR_18);
                VAR_18 = FUNC_7(VAR_6,
                                                                 VAR_7,
                                                                 VAR_17,
                                                                 VAR_20,
                                                                 VAR_9,
                                                                 ((void*)0));
                VAR_13 = (VAR_18 != ((void*)0) &&
                           VAR_18->type != VAR_3);
            } else VAR_13 = 0;
            if (!VAR_13) {
                if (VAR_18 != ((void*)0)) {
                    if (VAR_12) {
                        *VAR_12 = FUNC_20((VAR_18->len + 1) * sizeof(char));
                        FUNC_17(*VAR_12, VAR_18->str);
                    }
                    FUNC_16("\n");
                    FUNC_1(VAR_6,
                                                      VAR_18->str);
                }
                goto next;
            }
        }
        if (VAR_11) {
            FUNC_16("%s", VAR_16);
            FUNC_9(VAR_5);
        }
next:
        if (VAR_17 != ((void*)0)) FUNC_10(VAR_17);
        if (VAR_18 != ((void*)0)) FUNC_10(VAR_18);
        if (VAR_16) FUNC_19(VAR_16);
        if (!VAR_13) break;
    }
    return VAR_13;
}
