
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_lru_one {int nr_items; } ;
struct list_lru_node {int lock; int nr_items; } ;
struct list_lru {struct list_lru_node* node; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*) ;
 struct list_lru_one* FUNC_2 (struct list_lru_node*,struct list_head*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct list_head*) ;

bool FUNC_7(struct list_lru *VAR_0, struct list_head *VAR_1)
{
 int VAR_2 = FUNC_3(FUNC_6(VAR_1));
 struct list_lru_node *VAR_3 = &VAR_0->node[VAR_2];
 struct list_lru_one *VAR_4;

 FUNC_4(&VAR_3->lock);
 if (!FUNC_1(VAR_1)) {
  VAR_4 = FUNC_2(VAR_3, VAR_1, ((void*)0));
  FUNC_0(VAR_1);
  VAR_4->nr_items--;
  VAR_3->nr_items--;
  FUNC_5(&VAR_3->lock);
  return 1;
 }
 FUNC_5(&VAR_3->lock);
 return 0;
}
