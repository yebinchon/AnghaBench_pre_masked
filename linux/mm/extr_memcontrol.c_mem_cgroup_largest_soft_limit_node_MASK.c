
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_tree_per_node {int lock; } ;
struct mem_cgroup_per_node {int dummy; } ;


 struct mem_cgroup_per_node* FUNC_0 (struct mem_cgroup_tree_per_node*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct mem_cgroup_per_node *
FUNC_3(struct mem_cgroup_tree_per_node *VAR_0)
{
 struct mem_cgroup_per_node *VAR_1;

 FUNC_1(&VAR_0->lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->lock);
 return VAR_1;
}
