
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_lru_node {unsigned long nr_items; } ;
struct list_lru {struct list_lru_node* node; } ;



unsigned long FUNC_0(struct list_lru *VAR_0, int VAR_1)
{
 struct list_lru_node *VAR_2;

 VAR_2 = &VAR_0->node[VAR_1];
 return VAR_2->nr_items;
}
