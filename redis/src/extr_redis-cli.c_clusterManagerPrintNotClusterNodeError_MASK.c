
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port; int ip; } ;
typedef TYPE_1__ clusterManagerNode ;


 int FUNC_0 (char*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_1(clusterManagerNode *VAR_0,
                                                   char *VAR_1)
{
    char *VAR_2 = (VAR_1 ? VAR_1 : "is not configured as a cluster node.");
    FUNC_0("[ERR] Node %s:%d %s\n", VAR_0->ip, VAR_0->port, VAR_2);
}
