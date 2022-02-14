
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int balance; } ;
typedef TYPE_1__ clusterManagerNode ;



int FUNC_0(const void *VAR_0, const void *VAR_1) {
    clusterManagerNode *VAR_2 = *((clusterManagerNode **) VAR_0);
    clusterManagerNode *VAR_3 = *((clusterManagerNode **) VAR_1);
    return VAR_2->balance - VAR_3->balance;
}
