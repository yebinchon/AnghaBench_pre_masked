
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int redisReply ;
typedef int clusterManagerNode ;


 int * FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(clusterManagerNode *VAR_0, int VAR_1) {
    redisReply *VAR_2 = FUNC_0(VAR_0,
        "CLUSTER ADDSLOTS %d", VAR_1);
    int VAR_3 = FUNC_1(VAR_0, VAR_2, ((void*)0));
    if (VAR_2) FUNC_2(VAR_2);
    return VAR_3;
}
