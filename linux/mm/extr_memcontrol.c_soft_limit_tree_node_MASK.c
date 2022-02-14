
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_cgroup_tree_per_node {int dummy; } ;
struct TYPE_2__ {struct mem_cgroup_tree_per_node** rb_tree_per_node; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static struct mem_cgroup_tree_per_node *
FUNC_0(int VAR_1)
{
 return VAR_0.rb_tree_per_node[VAR_1];
}
