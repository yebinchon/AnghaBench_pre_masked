
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ type; int len; int str; } ;
typedef TYPE_2__ redisReply ;
struct TYPE_20__ {TYPE_4__* value; } ;
typedef TYPE_3__ listNode ;
typedef int listIter ;
struct TYPE_21__ {char* ip; int port; int flags; int* slots; int name; } ;
typedef TYPE_4__ clusterManagerNode ;
struct TYPE_23__ {int nodes; } ;
struct TYPE_18__ {int pipeline; int timeout; } ;
struct TYPE_22__ {TYPE_1__ cluster_manager_command; } ;


 TYPE_2__* FUNC_0 (TYPE_4__*,char*,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int,int,int,int,char**) ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*,int,char*,char**) ;
 TYPE_8__ VAR_6 ;
 TYPE_7__ VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (char*,...) ;
 int VAR_8 ;
 int FUNC_9 (char*,int ) ;
 char* FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(clusterManagerNode *VAR_9,
                                  clusterManagerNode *VAR_10,
                                  int VAR_11, int VAR_12, char**VAR_13)
{
    if (!(VAR_12 & VAR_2)) {
        FUNC_8("Moving slot %d from %s:%d to %s:%d: ", VAR_11, VAR_9->ip,
               VAR_9->port, VAR_10->ip, VAR_10->port);
        FUNC_4(VAR_8);
    }
    if (VAR_13 != ((void*)0)) *VAR_13 = ((void*)0);
    int VAR_14 = VAR_7.cluster_manager_command.pipeline,
        VAR_15 = VAR_7.cluster_manager_command.timeout,
        VAR_16 = (VAR_12 & VAR_4),
        VAR_17 = (VAR_12 & VAR_1),
        VAR_18 = 1;
    if (!VAR_17) {
        VAR_18 = FUNC_3(VAR_10, VAR_9, VAR_11,
                                        "importing", VAR_13);
        if (!VAR_18) return 0;
        VAR_18 = FUNC_3(VAR_9, VAR_10, VAR_11,
                                        "migrating", VAR_13);
        if (!VAR_18) return 0;
    }
    VAR_18 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_15,
                                              VAR_14, VAR_16, VAR_13);
    if (!(VAR_12 & VAR_2)) FUNC_8("\n");
    if (!VAR_18) return 0;

    if (!VAR_17) {
        listIter VAR_19;
        listNode *VAR_20;
        FUNC_7(VAR_6.nodes, &VAR_19);
        while ((VAR_20 = FUNC_6(&VAR_19)) != ((void*)0)) {
            clusterManagerNode *VAR_21 = VAR_20->value;
            if (VAR_21->flags & VAR_0) continue;
            redisReply *VAR_22 = FUNC_0(VAR_21, "CLUSTER "
                                                    "SETSLOT %d %s %s",
                                                    VAR_11, "node",
                                                    VAR_10->name);
            VAR_18 = (VAR_22 != ((void*)0));
            if (!VAR_18) return 0;
            if (VAR_22->type == VAR_5) {
                VAR_18 = 0;
                if (VAR_13 != ((void*)0)) {
                    *VAR_13 = FUNC_10((VAR_22->len + 1) * sizeof(char));
                    FUNC_9(*VAR_13, VAR_22->str);
                    FUNC_1(VAR_21, *VAR_13);
                }
            }
            FUNC_5(VAR_22);
            if (!VAR_18) return 0;
        }
    }

    if (VAR_12 & VAR_3) {
        VAR_9->slots[VAR_11] = 0;
        VAR_10->slots[VAR_11] = 1;
    }
    return 1;
}
