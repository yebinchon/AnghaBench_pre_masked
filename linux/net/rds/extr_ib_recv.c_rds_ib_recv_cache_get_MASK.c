
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_refill_cache {struct list_head* ready; } ;
struct list_head {struct list_head* next; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*) ;

__attribute__((used)) static struct list_head *FUNC_2(struct rds_ib_refill_cache *VAR_0)
{
 struct list_head *VAR_1 = VAR_0->ready;

 if (VAR_1) {
  if (!FUNC_1(VAR_1)) {
   VAR_0->ready = VAR_1->next;
   FUNC_0(VAR_1);
  } else
   VAR_0->ready = ((void*)0);
 }

 return VAR_1;
}
