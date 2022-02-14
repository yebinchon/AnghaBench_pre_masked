
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int dummy; } ;
struct list_lru_one {int nr_items; int list; } ;
struct list_lru_node {int lock; int nr_items; } ;
struct list_lru {struct list_lru_node* node; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*,int *) ;
 scalar_t__ FUNC_1 (struct list_head*) ;
 struct list_lru_one* FUNC_2 (struct list_lru_node*,struct list_head*,struct mem_cgroup**) ;
 int FUNC_3 (struct list_lru*) ;
 int FUNC_4 (struct mem_cgroup*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct list_head*) ;

bool FUNC_9(struct list_lru *VAR_0, struct list_head *VAR_1)
{
 int VAR_2 = FUNC_5(FUNC_8(VAR_1));
 struct list_lru_node *VAR_3 = &VAR_0->node[VAR_2];
 struct mem_cgroup *VAR_4;
 struct list_lru_one *VAR_5;

 FUNC_6(&VAR_3->lock);
 if (FUNC_1(VAR_1)) {
  VAR_5 = FUNC_2(VAR_3, VAR_1, &VAR_4);
  FUNC_0(VAR_1, &VAR_5->list);

  if (!VAR_5->nr_items++)
   FUNC_4(VAR_4, VAR_2,
            FUNC_3(VAR_0));
  VAR_3->nr_items++;
  FUNC_7(&VAR_3->lock);
  return 1;
 }
 FUNC_7(&VAR_3->lock);
 return 0;
}
