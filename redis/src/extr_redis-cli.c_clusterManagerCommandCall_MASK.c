
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ sds ;
typedef int redisReply ;
struct TYPE_8__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_9__ {char* ip; int port; int context; } ;
typedef TYPE_2__ clusterManagerNode ;
struct TYPE_10__ {int nodes; } ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_4__ VAR_2 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,char**,char**,int*) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,int,char const**,size_t*) ;
 int FUNC_12 (int ,void**) ;
 int FUNC_13 (scalar_t__) ;
 int VAR_3 ;
 size_t FUNC_14 (char*) ;
 int FUNC_15 (size_t*) ;
 size_t* FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(int VAR_4, char **VAR_5) {
    int VAR_6 = 0, VAR_7;
    char *VAR_8 = ((void*)0);
    if (!FUNC_7(1, VAR_5, &VAR_8, &VAR_6)) goto invalid_args;
    clusterManagerNode *VAR_9 = FUNC_3(VAR_8, VAR_6);
    if (!FUNC_1(VAR_9, 0)) return 0;
    VAR_4--;
    VAR_5++;
    size_t *VAR_10 = FUNC_16(VAR_4*sizeof(size_t));
    FUNC_2(">>> Calling");
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        VAR_10[VAR_7] = FUNC_14(VAR_5[VAR_7]);
        FUNC_10(" %s", VAR_5[VAR_7]);
    }
    FUNC_10("\n");
    listIter VAR_11;
    listNode *VAR_12;
    FUNC_9(VAR_2.nodes, &VAR_11);
    while ((VAR_12 = FUNC_8(&VAR_11)) != ((void*)0)) {
        clusterManagerNode *VAR_13 = VAR_12->value;
        if (!VAR_13->context && !FUNC_4(VAR_13)) continue;
        redisReply *VAR_14 = ((void*)0);
        FUNC_11(VAR_13->context, VAR_4, (const char **) VAR_5, VAR_10);
        int VAR_15 = FUNC_12(VAR_13->context, (void **)(&VAR_14));
        if (VAR_15 != VAR_1 || VAR_14 == ((void*)0) )
            FUNC_10("%s:%d: Failed!\n", VAR_13->ip, VAR_13->port);
        else {
            sds VAR_16 = FUNC_0(VAR_14);
            FUNC_10("%s:%d: %s\n", VAR_13->ip, VAR_13->port, (char *) VAR_16);
            FUNC_13(VAR_16);
        }
        if (VAR_14 != ((void*)0)) FUNC_6(VAR_14);
    }
    FUNC_15(VAR_10);
    return 1;
invalid_args:
    FUNC_5(VAR_3, "%s", VAR_0);
    return 0;
}
