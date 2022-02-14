
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_19__ {TYPE_3__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_20__ {float weight; int flags; scalar_t__ slots_count; int balance; char* ip; int port; int slot; int source; scalar_t__ replicate; } ;
typedef TYPE_3__ clusterManagerReshardTableItem ;
typedef TYPE_3__ clusterManagerNode ;
struct TYPE_18__ {char** weight; int weight_argc; int flags; float threshold; } ;
struct TYPE_17__ {int * errors; int * nodes; } ;
struct TYPE_16__ {TYPE_1__ cluster_manager_command; scalar_t__ verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 float FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int,float) ;
 int FUNC_7 (char*,float) ;
 int FUNC_8 (int ,TYPE_3__*,int ,int,int *) ;
 TYPE_3__* FUNC_9 (char*,int) ;
 TYPE_3__* FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 TYPE_11__ VAR_8 ;
 TYPE_10__ VAR_9 ;
 float FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int,char**,char**,int*) ;
 int FUNC_16 (int *,TYPE_3__*) ;
 int * FUNC_17 () ;
 scalar_t__ FUNC_18 (int *) ;
 TYPE_2__* FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (char*,...) ;
 int FUNC_23 (TYPE_3__**,int,int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_24 (char*,char) ;
 int FUNC_25 (TYPE_3__**) ;
 TYPE_3__** FUNC_26 (int) ;

__attribute__((used)) static int FUNC_27(int VAR_12, char **VAR_13) {
    int VAR_14 = 0;
    char *VAR_15 = ((void*)0);
    clusterManagerNode **VAR_16 = ((void*)0);
    list *VAR_17 = ((void*)0);
    if (!FUNC_15(VAR_12, VAR_13, &VAR_15, &VAR_14)) goto invalid_args;
    clusterManagerNode *VAR_18 = FUNC_9(VAR_15, VAR_14);
    if (!FUNC_4(VAR_18, 0)) return 0;
    int VAR_19 = 1, VAR_20;
    if (VAR_9.cluster_manager_command.weight != ((void*)0)) {
        for (VAR_20 = 0; VAR_20 < VAR_9.cluster_manager_command.weight_argc; VAR_20++) {
            char *VAR_21 = VAR_9.cluster_manager_command.weight[VAR_20];
            char *VAR_22 = FUNC_24(VAR_21, '=');
            if (VAR_22 == ((void*)0)) {
                VAR_19 = 0;
                goto cleanup;
            }
            *VAR_22 = '\0';
            float VAR_23 = FUNC_1(++VAR_22);
            clusterManagerNode *VAR_24 = FUNC_10(VAR_21);
            if (VAR_24 == ((void*)0)) {
                FUNC_5("*** No such master node %s\n", VAR_21);
                VAR_19 = 0;
                goto cleanup;
            }
            VAR_24->weight = VAR_23;
        }
    }
    float VAR_25 = 0;
    int VAR_26 = 0;
    int VAR_27 = VAR_9.cluster_manager_command.flags &
                    VAR_0;
    VAR_17 = FUNC_17();
    listIter VAR_28;
    listNode *VAR_29;
    FUNC_21(VAR_8.nodes, &VAR_28);

    while ((VAR_29 = FUNC_19(&VAR_28)) != ((void*)0)) {
        clusterManagerNode *VAR_30 = VAR_29->value;
        if (VAR_30->flags & VAR_2 || VAR_30->replicate)
            continue;
        if (!VAR_27 && VAR_30->slots_count == 0) {
            VAR_30->weight = 0;
            continue;
        }
        VAR_25 += VAR_30->weight;
        VAR_26++;
        FUNC_16(VAR_17, VAR_30);
    }
    VAR_16 = FUNC_26(VAR_26 * sizeof(clusterManagerNode *));
    if (VAR_16 == ((void*)0)) goto cleanup;

    FUNC_2(1);
    if (VAR_8.errors && FUNC_18(VAR_8.errors) > 0) {
        FUNC_5("*** Please fix your cluster problems "
                             "before rebalancing\n");
        VAR_19 = 0;
        goto cleanup;
    }



    int VAR_31 = 0, VAR_32 = 0;
    float VAR_33 = VAR_9.cluster_manager_command.threshold;
    VAR_20 = 0;
    FUNC_21(VAR_17, &VAR_28);
    while ((VAR_29 = FUNC_19(&VAR_28)) != ((void*)0)) {
        clusterManagerNode *VAR_34 = VAR_29->value;
        VAR_16[VAR_20++] = VAR_34;
        int VAR_35 = (int) (((float)VAR_6 / VAR_25) *
                        VAR_34->weight);
        VAR_34->balance = VAR_34->slots_count - VAR_35;
        VAR_32 += VAR_34->balance;



        int VAR_36 = 0;
        if (VAR_33 > 0) {
            if (VAR_34->slots_count > 0) {
                float VAR_37 = FUNC_12((100-(100.0*VAR_35/VAR_34->slots_count)));
                if (VAR_37 > VAR_33) VAR_36 = 1;
            } else if (VAR_35 > 1) {
                VAR_36 = 1;
            }
        }
        if (VAR_36) VAR_31 = 1;
    }
    if (!VAR_31) {
        FUNC_7("*** No rebalancing needed! "
                             "All nodes are within the %.2f%% threshold.\n",
                             VAR_9.cluster_manager_command.threshold);
        goto cleanup;
    }



    while (VAR_32 > 0) {
        FUNC_21(VAR_17, &VAR_28);
        while ((VAR_29 = FUNC_19(&VAR_28)) != ((void*)0)) {
            clusterManagerNode *VAR_38 = VAR_29->value;
            if (VAR_38->balance <= 0 && VAR_32 > 0) {
                VAR_38->balance--;
                VAR_32--;
            }
        }
    }

    FUNC_23(VAR_16, VAR_26, sizeof(clusterManagerNode *),
          VAR_7);
    FUNC_6(">>> Rebalancing across %d nodes. "
                          "Total weight = %.2f\n",
                          VAR_26, VAR_25);
    if (VAR_9.verbose) {
        for (VAR_20 = 0; VAR_20 < VAR_26; VAR_20++) {
            clusterManagerNode *VAR_39 = VAR_16[VAR_20];
            FUNC_22("%s:%d balance is %d slots\n", VAR_39->ip, VAR_39->port, VAR_39->balance);
        }
    }





    int VAR_40 = 0;
    int VAR_41 = VAR_26 - 1;
    int VAR_42 = VAR_9.cluster_manager_command.flags &
                   VAR_1;
    while (VAR_40 < VAR_41) {
        clusterManagerNode *VAR_43 = VAR_16[VAR_40];
        clusterManagerNode *VAR_44 = VAR_16[VAR_41];
        int VAR_45 = FUNC_0(VAR_43->balance);
        int VAR_46 = FUNC_0(VAR_44->balance);
        int VAR_47 = (VAR_45 < VAR_46 ? VAR_45 : VAR_46);
        if (VAR_47 > 0) {
            FUNC_22("Moving %d slots from %s:%d to %s:%d\n", VAR_47,
                                                            VAR_44->ip,
                                                            VAR_44->port,
                                                            VAR_43->ip,
                                                            VAR_43->port);

            list *VAR_48 = FUNC_17(), *VAR_49 = ((void*)0);
            FUNC_16(VAR_48, VAR_44);
            VAR_49 = FUNC_3(VAR_48, VAR_47);
            FUNC_20(VAR_48);
            int VAR_50 = (int) FUNC_18(VAR_49);
            if (!VAR_49 || VAR_50 != VAR_47) {
                FUNC_5("*** Assertion failed: Reshard table "
                                     "!= number of slots");
                VAR_19 = 0;
                goto end_move;
            }
            if (VAR_42) {
                for (VAR_20 = 0; VAR_20 < VAR_50; VAR_20++) FUNC_22("#");
            } else {
                int VAR_51 = VAR_4 |
                           VAR_5;
                FUNC_21(VAR_49, &VAR_28);
                while ((VAR_29 = FUNC_19(&VAR_28)) != ((void*)0)) {
                    clusterManagerReshardTableItem *VAR_52 = VAR_29->value;
                    VAR_19 = FUNC_8(VAR_52->source,
                                                    VAR_43,
                                                    VAR_52->slot,
                                                    VAR_51, ((void*)0));
                    if (!VAR_19) goto end_move;
                    FUNC_22("#");
                    FUNC_13(VAR_11);
                }

            }
            FUNC_22("\n");
end_move:
            FUNC_11(VAR_49);
            if (!VAR_19) goto cleanup;
        }

        VAR_43->balance += VAR_47;
        VAR_44->balance -= VAR_47;
        if (VAR_43->balance == 0) VAR_40++;
        if (VAR_44->balance == 0) VAR_41 --;
    }
cleanup:
    if (VAR_17 != ((void*)0)) FUNC_20(VAR_17);
    if (VAR_16 != ((void*)0)) FUNC_25(VAR_16);
    return VAR_19;
invalid_args:
    FUNC_14(VAR_10, "%s", VAR_3);
    return 0;
}
