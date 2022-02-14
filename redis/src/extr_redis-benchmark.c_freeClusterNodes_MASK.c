
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int clusterNode ;
struct TYPE_2__ {int cluster_node_count; int ** cluster_nodes; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static void FUNC_2() {
    int VAR_1 = 0;
    for (; VAR_1 < VAR_0.cluster_node_count; VAR_1++) {
        clusterNode *VAR_2 = VAR_0.cluster_nodes[VAR_1];
        if (VAR_2) FUNC_0(VAR_2);
    }
    FUNC_1(VAR_0.cluster_nodes);
    VAR_0.cluster_nodes = ((void*)0);
}
