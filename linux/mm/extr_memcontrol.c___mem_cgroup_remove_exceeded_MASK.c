
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_tree_per_node {int rb_root; int * rb_rightmost; } ;
struct mem_cgroup_per_node {int on_tree; int tree_node; } ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mem_cgroup_per_node *VAR_0,
      struct mem_cgroup_tree_per_node *VAR_1)
{
 if (!VAR_0->on_tree)
  return;

 if (&VAR_0->tree_node == VAR_1->rb_rightmost)
  VAR_1->rb_rightmost = FUNC_1(&VAR_0->tree_node);

 FUNC_0(&VAR_0->tree_node, &VAR_1->rb_root);
 VAR_0->on_tree = 0;
}
