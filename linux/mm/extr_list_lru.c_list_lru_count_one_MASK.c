
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int dummy; } ;
struct list_lru_one {unsigned long nr_items; } ;
struct list_lru_node {int dummy; } ;
struct list_lru {struct list_lru_node* node; } ;


 struct list_lru_one* FUNC_0 (struct list_lru_node*,int ) ;
 int FUNC_1 (struct mem_cgroup*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

unsigned long FUNC_4(struct list_lru *VAR_0,
     int VAR_1, struct mem_cgroup *VAR_2)
{
 struct list_lru_node *VAR_3 = &VAR_0->node[VAR_1];
 struct list_lru_one *VAR_4;
 unsigned long VAR_5;

 FUNC_2();
 VAR_4 = FUNC_0(VAR_3, FUNC_1(VAR_2));
 VAR_5 = VAR_4->nr_items;
 FUNC_3();

 return VAR_5;
}
