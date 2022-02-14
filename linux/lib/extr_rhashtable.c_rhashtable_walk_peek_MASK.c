
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhash_head {int dummy; } ;
struct rhlist_head {struct rhash_head rhead; } ;
struct rhashtable_iter {scalar_t__ skip; struct rhash_head* p; struct rhashtable* ht; struct rhlist_head* list; } ;
struct rhashtable {scalar_t__ rhlist; } ;


 void* FUNC_0 (struct rhashtable_iter*) ;
 void* FUNC_1 (struct rhashtable*,struct rhash_head*) ;

void *FUNC_2(struct rhashtable_iter *VAR_0)
{
 struct rhlist_head *VAR_1 = VAR_0->list;
 struct rhashtable *VAR_2 = VAR_0->ht;
 struct rhash_head *VAR_3 = VAR_0->p;

 if (VAR_3)
  return FUNC_1(VAR_2, VAR_2->rhlist ? &VAR_1->rhead : VAR_3);



 if (VAR_0->skip) {






  VAR_0->skip--;
 }

 return FUNC_0(VAR_0);
}
