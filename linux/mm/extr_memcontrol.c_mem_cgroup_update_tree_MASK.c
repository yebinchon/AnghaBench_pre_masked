
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mem_cgroup_tree_per_node {int lock; } ;
struct mem_cgroup_per_node {scalar_t__ on_tree; } ;
struct mem_cgroup {int dummy; } ;


 int FUNC_0 (struct mem_cgroup_per_node*,struct mem_cgroup_tree_per_node*,unsigned long) ;
 int FUNC_1 (struct mem_cgroup_per_node*,struct mem_cgroup_tree_per_node*) ;
 struct mem_cgroup_per_node* FUNC_2 (struct mem_cgroup*,struct page*) ;
 struct mem_cgroup* FUNC_3 (struct mem_cgroup*) ;
 unsigned long FUNC_4 (struct mem_cgroup*) ;
 struct mem_cgroup_tree_per_node* FUNC_5 (struct page*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct mem_cgroup *VAR_0, struct page *VAR_1)
{
 unsigned long VAR_2;
 struct mem_cgroup_per_node *VAR_3;
 struct mem_cgroup_tree_per_node *VAR_4;

 VAR_4 = FUNC_5(VAR_1);
 if (!VAR_4)
  return;




 for (; VAR_0; VAR_0 = FUNC_3(VAR_0)) {
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  VAR_2 = FUNC_4(VAR_0);




  if (VAR_2 || VAR_3->on_tree) {
   unsigned long VAR_5;

   FUNC_6(&VAR_4->lock, VAR_5);

   if (VAR_3->on_tree)
    FUNC_1(VAR_3, VAR_4);




   FUNC_0(VAR_3, VAR_4, VAR_2);
   FUNC_7(&VAR_4->lock, VAR_5);
  }
 }
}
