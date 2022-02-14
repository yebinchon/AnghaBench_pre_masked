
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int str; } ;
typedef TYPE_1__ redisReply ;
typedef int clusterManagerNode ;


 TYPE_1__* FUNC_0 (int *,char**) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(clusterManagerNode *VAR_0, char **VAR_1) {
    redisReply *VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2 == ((void*)0)) return 0;
    int VAR_3 = (int) FUNC_2(VAR_2->str, "cluster_enabled");
    FUNC_1(VAR_2);
    return VAR_3;
}
