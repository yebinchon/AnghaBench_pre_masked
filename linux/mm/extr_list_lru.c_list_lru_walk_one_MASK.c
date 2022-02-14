
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int dummy; } ;
struct list_lru_node {int lock; } ;
struct list_lru {struct list_lru_node* node; } ;
typedef int list_lru_walk_cb ;


 unsigned long FUNC_0 (struct list_lru_node*,int ,int ,void*,unsigned long*) ;
 int FUNC_1 (struct mem_cgroup*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

unsigned long
FUNC_4(struct list_lru *VAR_0, int VAR_1, struct mem_cgroup *VAR_2,
    list_lru_walk_cb VAR_3, void *VAR_4,
    unsigned long *VAR_5)
{
 struct list_lru_node *VAR_6 = &VAR_0->node[VAR_1];
 unsigned long VAR_7;

 FUNC_2(&VAR_6->lock);
 VAR_7 = FUNC_0(VAR_6, FUNC_1(VAR_2), VAR_3, VAR_4,
      VAR_5);
 FUNC_3(&VAR_6->lock);
 return VAR_7;
}
