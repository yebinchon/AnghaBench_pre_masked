
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int clusterNode ;
struct TYPE_2__ {int cluster_node_count; int ** cluster_nodes; } ;


 TYPE_1__ VAR_0 ;
 int ** FUNC_0 (int **,int) ;

__attribute__((used)) static clusterNode **FUNC_1(clusterNode *VAR_1) {
    int VAR_2 = VAR_0.cluster_node_count + 1;
    VAR_0.cluster_nodes = FUNC_0(VAR_0.cluster_nodes,
                                    VAR_2 * sizeof(*VAR_1));
    if (!VAR_0.cluster_nodes) return ((void*)0);
    VAR_0.cluster_nodes[VAR_0.cluster_node_count++] = VAR_1;
    return VAR_0.cluster_nodes;
}
