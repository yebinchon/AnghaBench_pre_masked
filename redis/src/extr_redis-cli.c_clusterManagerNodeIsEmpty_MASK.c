
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int str; } ;
typedef TYPE_1__ redisReply ;
typedef int clusterManagerNode ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_1__*,char**) ;
 TYPE_1__* FUNC_2 (int *,char**) ;
 int FUNC_3 (TYPE_1__*) ;
 long FUNC_4 (int ,char*) ;
 int * FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(clusterManagerNode *VAR_0, char **VAR_1) {
    redisReply *VAR_2 = FUNC_2(VAR_0, VAR_1);
    int VAR_3 = 1;
    if (VAR_2 == ((void*)0)) return 0;
    if (FUNC_5(VAR_2->str, "db0:") != ((void*)0)) {
        VAR_3 = 0;
        goto result;
    }
    FUNC_3(VAR_2);
    VAR_2 = FUNC_0(VAR_0, "CLUSTER INFO");
    if (VAR_1 != ((void*)0)) *VAR_1 = ((void*)0);
    if (!FUNC_1(VAR_0, VAR_2, VAR_1)) {
        VAR_3 = 0;
        goto result;
    }
    long VAR_4 = FUNC_4(VAR_2->str, "cluster_known_nodes");
    VAR_3 = (VAR_4 == 1);
result:
    FUNC_3(VAR_2);
    return VAR_3;
}
