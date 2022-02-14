
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int redisReply ;
struct TYPE_22__ {char* ip; int port; int name; } ;
typedef TYPE_2__ clusterManagerNode ;
struct TYPE_25__ {int nodes; } ;
struct TYPE_21__ {int flags; char* master_id; } ;
struct TYPE_24__ {TYPE_1__ cluster_manager_command; } ;
struct TYPE_23__ {TYPE_2__* value; } ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*,char*,char*,...) ;
 char* VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int *,int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*,char*,int,...) ;
 int FUNC_8 (char*) ;
 TYPE_2__* FUNC_9 (char*,int) ;
 TYPE_2__* FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,char**) ;
 int FUNC_13 (TYPE_2__*,char**) ;
 int FUNC_14 (TYPE_2__*,int ,char**) ;
 TYPE_2__* FUNC_15 () ;
 int FUNC_16 (TYPE_2__*,char*) ;
 int FUNC_17 (TYPE_2__*,char*) ;
 int FUNC_18 () ;
 TYPE_7__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int,char**,char**,int*) ;
 int FUNC_23 (int ,TYPE_2__*) ;
 TYPE_3__* FUNC_24 (int ) ;
 int FUNC_25 (char*,char*,int) ;
 int FUNC_26 (int) ;
 int VAR_4 ;
 int FUNC_27 (char*) ;

__attribute__((used)) static int FUNC_28(int VAR_5, char **VAR_6) {
    int VAR_7 = 1;
    redisReply *VAR_8 = ((void*)0);
    char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    int VAR_11 = 0, VAR_12 = 0;
    if (!FUNC_22(VAR_5 - 1, VAR_6 + 1, &VAR_9, &VAR_11))
        goto invalid_args;
    if (!FUNC_22(1, VAR_6, &VAR_10, &VAR_12))
        goto invalid_args;
    FUNC_7(">>> Adding node %s:%d to cluster %s:%d\n", VAR_10, VAR_12,
                          VAR_9, VAR_11);

    clusterManagerNode *VAR_13 = FUNC_9(VAR_9, VAR_11);
    if (!FUNC_5(VAR_13, 0)) return 0;
    if (!FUNC_3(0)) return 0;



    clusterManagerNode *VAR_14 = ((void*)0);
    if (VAR_3.cluster_manager_command.flags & VAR_0) {
        char *VAR_15 = VAR_3.cluster_manager_command.master_id;
        if (VAR_15 != ((void*)0)) {
            VAR_14 = FUNC_10(VAR_15);
            if (VAR_14 == ((void*)0)) {
                FUNC_6("[ERR] No such master ID %s\n", VAR_15);
                return 0;
            }
        } else {
            VAR_14 = FUNC_15();
            FUNC_2(VAR_14 != ((void*)0));
            FUNC_25("Automatically selected master %s:%d\n", VAR_14->ip,
                   VAR_14->port);
        }
    }


    clusterManagerNode *VAR_16 = FUNC_9(VAR_10, VAR_12);
    int VAR_17 = 0;
    if (!FUNC_11(VAR_16)) {
        FUNC_6("[ERR] Sorry, can't connect to node %s:%d\n",
                             VAR_10, VAR_12);
        VAR_7 = 0;
        goto cleanup;
    }
    char *VAR_18 = ((void*)0);
    if (!(VAR_7 = FUNC_12(VAR_16, &VAR_18))) {
        FUNC_16(VAR_16, VAR_18);
        if (VAR_18) FUNC_27(VAR_18);
        goto cleanup;
    }
    if (!FUNC_14(VAR_16, 0, &VAR_18)) {
        if (VAR_18) {
            FUNC_1(VAR_16, VAR_18);
            FUNC_27(VAR_18);
        }
        VAR_7 = 0;
        goto cleanup;
    }
    if (!(VAR_7 = FUNC_13(VAR_16, &VAR_18))) {
        FUNC_17(VAR_16, VAR_18);
        if (VAR_18) FUNC_27(VAR_18);
        goto cleanup;
    }
    clusterManagerNode *VAR_19 = FUNC_24(VAR_2.nodes)->value;
    FUNC_23(VAR_2.nodes, VAR_16);
    VAR_17 = 1;


    FUNC_7(">>> Send CLUSTER MEET to node %s:%d to make it "
                          "join the cluster.\n", VAR_10, VAR_12);
    VAR_8 = FUNC_0(VAR_16, "CLUSTER MEET %s %d",
                                    VAR_19->ip, VAR_19->port);
    if (!(VAR_7 = FUNC_4(VAR_16, VAR_8, ((void*)0))))
        goto cleanup;


    if (VAR_14) {
        FUNC_26(1);
        FUNC_18();
        FUNC_7(">>> Configure node as replica of %s:%d.\n",
                              VAR_14->ip, VAR_14->port);
        FUNC_21(VAR_8);
        VAR_8 = FUNC_0(VAR_16, "CLUSTER REPLICATE %s",
                                        VAR_14->name);
        if (!(VAR_7 = FUNC_4(VAR_16, VAR_8, ((void*)0))))
            goto cleanup;
    }
    FUNC_8("[OK] New node added correctly.\n");
cleanup:
    if (!VAR_17 && VAR_16) FUNC_20(VAR_16);
    if (VAR_8) FUNC_21(VAR_8);
    return VAR_7;
invalid_args:
    FUNC_19(VAR_4, "%s", VAR_1);
    return 0;
}
