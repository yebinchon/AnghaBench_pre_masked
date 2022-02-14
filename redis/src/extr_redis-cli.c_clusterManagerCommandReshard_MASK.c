
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_16__ {TYPE_3__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_17__ {int flags; int slot; int source; int name; scalar_t__ replicate; } ;
typedef TYPE_3__ clusterManagerReshardTableItem ;
typedef TYPE_3__ clusterManagerNode ;
struct TYPE_19__ {int * nodes; int * errors; } ;
struct TYPE_15__ {int slots; char* to; char* from; int flags; } ;
struct TYPE_18__ {TYPE_1__ cluster_manager_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,TYPE_3__*,int ,int,char**) ;
 TYPE_3__* FUNC_5 (char*,int) ;
 char* FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_3__* FUNC_9 (char*,TYPE_3__*,int*) ;
 TYPE_8__ VAR_6 ;
 TYPE_7__ VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int,char**,char**,int*) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,TYPE_3__*) ;
 int * FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 TYPE_2__* FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (char*,...) ;
 int FUNC_23 (int ,char*,int) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_26 (char*,char) ;
 scalar_t__ FUNC_27 (char*,char*) ;
 scalar_t__ FUNC_28 (char*) ;
 int FUNC_29 (char*) ;

__attribute__((used)) static int FUNC_30(int VAR_11, char **VAR_12) {
    int VAR_13 = 0;
    char *VAR_14 = ((void*)0);
    if (!FUNC_13(VAR_11, VAR_12, &VAR_14, &VAR_13)) goto invalid_args;
    clusterManagerNode *VAR_15 = FUNC_5(VAR_14, VAR_13);
    if (!FUNC_3(VAR_15, 0)) return 0;
    FUNC_1(0);
    if (VAR_6.errors && FUNC_18(VAR_6.errors) > 0) {
        FUNC_10(VAR_10);
        FUNC_12(VAR_8,
                "*** Please fix your cluster problems before resharding\n");
        return 0;
    }
    int VAR_16 = VAR_7.cluster_manager_command.slots;
    if (!VAR_16) {
        while (VAR_16 <= 0 || VAR_16 > VAR_4) {
            FUNC_22("How many slots do you want to move (from 1 to %d)? ",
                   VAR_4);
            FUNC_10(VAR_10);
            char VAR_17[6];
            int VAR_18 = FUNC_23(FUNC_11(VAR_9),VAR_17,6);
            if (VAR_18 <= 0) continue;
            int VAR_19 = VAR_18 - 1;
            if (VAR_17[VAR_19] != '\n') {
                int VAR_20;
                while ((VAR_20 = FUNC_14()) != '\n' && VAR_20 != VAR_5) {}
            }
            VAR_17[VAR_19] = '\0';
            VAR_16 = FUNC_0(VAR_17);
        }
    }
    char VAR_21[255];
    char *VAR_22 = VAR_7.cluster_manager_command.to,
         *VAR_23 = VAR_7.cluster_manager_command.from;
    while (VAR_22 == ((void*)0)) {
        FUNC_22("What is the receiving node ID? ");
        FUNC_10(VAR_10);
        int VAR_24 = FUNC_23(FUNC_11(VAR_9),VAR_21,255);
        if (VAR_24 <= 0) continue;
        int VAR_25 = VAR_24 - 1;
        if (VAR_21[VAR_25] != '\n') {
            int VAR_26;
            while ((VAR_26 = FUNC_14()) != '\n' && VAR_26 != VAR_5) {}
        }
        VAR_21[VAR_25] = '\0';
        if (FUNC_28(VAR_21) > 0) VAR_22 = VAR_21;
    }
    int VAR_27 = 0;
    clusterManagerNode *VAR_28 = FUNC_9(VAR_22, ((void*)0), &VAR_27);
    if (VAR_28 == ((void*)0)) return 0;
    list *VAR_29 = FUNC_16();
    list *VAR_30 = ((void*)0);
    int VAR_31 = 0, VAR_32 = 1;
    if (VAR_23 == ((void*)0)) {
        FUNC_22("Please enter all the source node IDs.\n");
        FUNC_22("  Type 'all' to use all the nodes as source nodes for "
               "the hash slots.\n");
        FUNC_22("  Type 'done' once you entered all the source nodes IDs.\n");
        while (1) {
            FUNC_22("Source node #%lu: ", FUNC_18(VAR_29) + 1);
            FUNC_10(VAR_10);
            int VAR_33 = FUNC_23(FUNC_11(VAR_9),VAR_21,255);
            if (VAR_33 <= 0) continue;
            int VAR_34 = VAR_33 - 1;
            if (VAR_21[VAR_34] != '\n') {
                int VAR_35;
                while ((VAR_35 = FUNC_14()) != '\n' && VAR_35 != VAR_5) {}
            }
            VAR_21[VAR_34] = '\0';
            if (!FUNC_27(VAR_21, "done")) break;
            else if (!FUNC_27(VAR_21, "all")) {
                VAR_31 = 1;
                break;
            } else {
                clusterManagerNode *VAR_36 =
                    FUNC_9(VAR_21, VAR_28, &VAR_27);
                if (VAR_36 != ((void*)0)) FUNC_15(VAR_29, VAR_36);
                else if (VAR_27) {
                    VAR_32 = 0;
                    goto cleanup;
                }
            }
        }
    } else {
        char *VAR_37;
        while((VAR_37 = FUNC_26(VAR_23, ',')) != ((void*)0)) {
            *VAR_37 = '\0';
            if (!FUNC_27(VAR_23, "all")) {
                VAR_31 = 1;
                break;
            } else {
                clusterManagerNode *VAR_38 =
                    FUNC_9(VAR_23, VAR_28, &VAR_27);
                if (VAR_38 != ((void*)0)) FUNC_15(VAR_29, VAR_38);
                else if (VAR_27) {
                    VAR_32 = 0;
                    goto cleanup;
                }
            }
            VAR_23 = VAR_37 + 1;
        }

        if (!VAR_31 && FUNC_28(VAR_23) > 0) {
            if (!FUNC_27(VAR_23, "all")) VAR_31 = 1;
            if (!VAR_31) {
                clusterManagerNode *VAR_39 =
                    FUNC_9(VAR_23, VAR_28, &VAR_27);
                if (VAR_39 != ((void*)0)) FUNC_15(VAR_29, VAR_39);
                else if (VAR_27) {
                    VAR_32 = 0;
                    goto cleanup;
                }
            }
        }
    }
    listIter VAR_40;
    listNode *VAR_41;
    if (VAR_31) {
        FUNC_17(VAR_29);
        FUNC_21(VAR_6.nodes, &VAR_40);
        while ((VAR_41 = FUNC_19(&VAR_40)) != ((void*)0)) {
            clusterManagerNode *VAR_42 = VAR_41->value;
            if (VAR_42->flags & VAR_1 || VAR_42->replicate)
                continue;
            if (!FUNC_24(VAR_42->name, VAR_28->name)) continue;
            FUNC_15(VAR_29, VAR_42);
        }
    }
    if (FUNC_18(VAR_29) == 0) {
        FUNC_12(VAR_8, "*** No source nodes given, operation aborted.\n");
        VAR_32 = 0;
        goto cleanup;
    }
    FUNC_22("\nReady to move %d slots.\n", VAR_16);
    FUNC_22("  Source nodes:\n");
    FUNC_21(VAR_29, &VAR_40);
    while ((VAR_41 = FUNC_19(&VAR_40)) != ((void*)0)) {
        clusterManagerNode *VAR_43 = VAR_41->value;
        sds VAR_44 = FUNC_6(VAR_43, 4);
        FUNC_22("%s\n", VAR_44);
        FUNC_25(VAR_44);
    }
    FUNC_22("  Destination node:\n");
    sds VAR_45 = FUNC_6(VAR_28, 4);
    FUNC_22("%s\n", VAR_45);
    FUNC_25(VAR_45);
    VAR_30 = FUNC_2(VAR_29, VAR_16);
    FUNC_22("  Resharding plan:\n");
    FUNC_8(VAR_30);
    if (!(VAR_7.cluster_manager_command.flags &
          VAR_0))
    {
        FUNC_22("Do you want to proceed with the proposed "
               "reshard plan (yes/no)? ");
        FUNC_10(VAR_10);
        char VAR_46[4];
        int VAR_47 = FUNC_23(FUNC_11(VAR_9),VAR_46,4);
        VAR_46[3] = '\0';
        if (VAR_47 <= 0 || FUNC_27("yes", VAR_46) != 0) {
            VAR_32 = 0;
            goto cleanup;
        }
    }
    int VAR_48 = VAR_3;
    FUNC_21(VAR_30, &VAR_40);
    while ((VAR_41 = FUNC_19(&VAR_40)) != ((void*)0)) {
        clusterManagerReshardTableItem *VAR_49 = VAR_41->value;
        char *VAR_50 = ((void*)0);
        VAR_32 = FUNC_4(VAR_49->source, VAR_28, VAR_49->slot,
                                        VAR_48, &VAR_50);
        if (!VAR_32) {
            if (VAR_50 != ((void*)0)) {

                FUNC_29(VAR_50);
            }
            goto cleanup;
        }
    }
cleanup:
    FUNC_20(VAR_29);
    FUNC_7(VAR_30);
    return VAR_32;
invalid_args:
    FUNC_12(VAR_8, "%s", VAR_2);
    return 0;
}
