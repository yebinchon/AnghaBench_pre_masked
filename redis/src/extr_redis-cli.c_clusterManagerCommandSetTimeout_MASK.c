
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int redisReply ;
struct TYPE_9__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_10__ {int port; int ip; } ;
typedef TYPE_2__ clusterManagerNode ;
struct TYPE_11__ {int nodes; } ;


 int * FUNC_0 (TYPE_2__*,char*,char*,...) ;
 char* VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int *,char**) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (char*,int ,int ,char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int ,int ) ;
 TYPE_2__* FUNC_8 (char*,int) ;
 TYPE_4__ VAR_1 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,char**,char**,int*) ;
 TYPE_1__* FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;
 int VAR_2 ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int FUNC_15(int VAR_3, char **VAR_4) {
    FUNC_1(VAR_3);
    int VAR_5 = 0;
    char *VAR_6 = ((void*)0);
    if (!FUNC_11(1, VAR_4, &VAR_6, &VAR_5)) goto invalid_args;
    int VAR_7 = FUNC_2(VAR_4[1]);
    if (VAR_7 < 100) {
        FUNC_9(VAR_2, "Setting a node timeout of less than 100 "
                "milliseconds is a bad idea.\n");
        return 0;
    }

    clusterManagerNode *VAR_8 = FUNC_8(VAR_6, VAR_5);
    if (!FUNC_4(VAR_8, 0)) return 0;
    int VAR_9 = 0, VAR_10 = 0;

    FUNC_6(">>> Reconfiguring node timeout in every "
                          "cluster node...\n");
    listIter VAR_11;
    listNode *VAR_12;
    FUNC_13(VAR_1.nodes, &VAR_11);
    while ((VAR_12 = FUNC_12(&VAR_11)) != ((void*)0)) {
        clusterManagerNode *VAR_13 = VAR_12->value;
        char *VAR_14 = ((void*)0);
        redisReply *VAR_15 = FUNC_0(VAR_13, "CONFIG %s %s %d",
                                                    "SET",
                                                    "cluster-node-timeout",
                                                    VAR_7);
        if (VAR_15 == ((void*)0)) goto reply_err;
        int VAR_16 = FUNC_3(VAR_13, VAR_15, &VAR_14);
        FUNC_10(VAR_15);
        if (!VAR_16) goto reply_err;
        VAR_15 = FUNC_0(VAR_13, "CONFIG %s", "REWRITE");
        if (VAR_15 == ((void*)0)) goto reply_err;
        VAR_16 = FUNC_3(VAR_13, VAR_15, &VAR_14);
        FUNC_10(VAR_15);
        if (!VAR_16) goto reply_err;
        FUNC_7("*** New timeout set for %s:%d\n", VAR_13->ip,
                              VAR_13->port);
        VAR_9++;
        continue;
reply_err:;
        int VAR_17 = 0;
        if (VAR_14 == ((void*)0)) VAR_14 = "";
        else VAR_17 = 1;
        FUNC_5("ERR setting node-timeot for %s:%d: %s\n", VAR_13->ip,
                             VAR_13->port, VAR_14);
        if (VAR_17) FUNC_14(VAR_14);
        VAR_10++;
    }
    FUNC_6(">>> New node timeout set. %d OK, %d ERR.\n",
                          VAR_9, VAR_10);
    return 1;
invalid_args:
    FUNC_9(VAR_2, "%s", VAR_0);
    return 0;
}
