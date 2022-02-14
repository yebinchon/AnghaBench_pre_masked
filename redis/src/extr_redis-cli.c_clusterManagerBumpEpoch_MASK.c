
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int redisReply ;
typedef int clusterManagerNode ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(clusterManagerNode *VAR_0) {
    redisReply *VAR_1 = FUNC_0(VAR_0, "CLUSTER BUMPEPOCH");
    int VAR_2 = FUNC_1(VAR_0, VAR_1, ((void*)0));
    if (VAR_1) FUNC_2(VAR_1);
    return VAR_2;
}
