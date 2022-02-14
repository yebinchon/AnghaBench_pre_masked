
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_12__ {TYPE_3__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
struct TYPE_13__ {int port; int ip; scalar_t__ replicate; } ;
typedef TYPE_3__ clusterManagerNode ;
struct TYPE_15__ {int nodes; int errors; } ;
struct TYPE_11__ {char* backup_dir; } ;
struct TYPE_14__ {TYPE_1__ cluster_manager_command; } ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 TYPE_3__* FUNC_7 (char*,int) ;
 char* FUNC_8 (TYPE_3__*,int) ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*,int *) ;
 int FUNC_14 (int,char**,char**,int*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int ) ;
 TYPE_2__* FUNC_17 (int *) ;
 int FUNC_18 (int ,int *) ;
 char* FUNC_19 (char*,char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 char* FUNC_22 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_23(int VAR_5, char **VAR_6) {
    FUNC_0(VAR_5);
    int VAR_7 = 1, VAR_8 = 0;
    char *VAR_9 = ((void*)0);
    if (!FUNC_14(1, VAR_6, &VAR_9, &VAR_8)) goto invalid_args;
    clusterManagerNode *VAR_10 = FUNC_7(VAR_9, VAR_8);
    if (!FUNC_2(VAR_10, 0)) return 0;
    int VAR_11 = FUNC_1(0);
    int VAR_12 = (VAR_11 ? 0 :
                                FUNC_16(VAR_1.errors));
    VAR_2.cluster_manager_command.backup_dir = VAR_6[1];

    sds VAR_13 = FUNC_22("[\n");
    int VAR_14 = 0;
    listIter VAR_15;
    listNode *VAR_16;
    FUNC_18(VAR_1.nodes, &VAR_15);
    while ((VAR_16 = FUNC_17(&VAR_15)) != ((void*)0)) {
        if (!VAR_14) VAR_14 = 1;
        else VAR_13 = FUNC_19(VAR_13, ",\n");
        clusterManagerNode *VAR_17 = VAR_16->value;
        sds VAR_18 = FUNC_8(VAR_17, VAR_12);
        VAR_13 = FUNC_19(VAR_13, VAR_18);
        FUNC_20(VAR_18);
        if (VAR_17->replicate)
            continue;
        FUNC_4(">>> Node %s:%d -> Saving RDB...\n",
                              VAR_17->ip, VAR_17->port);
        FUNC_10(VAR_4);
        FUNC_15(VAR_17);
    }
    VAR_13 = FUNC_19(VAR_13, "\n]");
    sds VAR_19 = FUNC_22(VAR_2.cluster_manager_command.backup_dir);
    if (VAR_19[FUNC_21(VAR_19) - 1] != '/')
        VAR_19 = FUNC_19(VAR_19, "/");
    VAR_19 = FUNC_19(VAR_19, "nodes.json");
    FUNC_10(VAR_4);
    FUNC_4("Saving cluster configuration to: %s\n", VAR_19);
    FILE *VAR_20 = FUNC_11(VAR_19, "w+");
    if (!VAR_20) {
        FUNC_3("Could not save nodes to: %s\n", VAR_19);
        VAR_7 = 0;
        goto cleanup;
    }
    FUNC_13(VAR_13, VAR_20);
    FUNC_9(VAR_20);
cleanup:
    FUNC_20(VAR_13);
    FUNC_20(VAR_19);
    if (VAR_7) {
        if (!VAR_11) {
            FUNC_6("*** Cluster seems to have some problems, "
                                  "please be aware of it if you're going "
                                  "to restore this backup.\n");
        }
        FUNC_5("[OK] Backup created into: %s\n",
                            VAR_2.cluster_manager_command.backup_dir);
    } else FUNC_5("[ERR] Failed to back cluster!\n");
    return VAR_7;
invalid_args:
    FUNC_12(VAR_3, VAR_0);
    return 0;
}
