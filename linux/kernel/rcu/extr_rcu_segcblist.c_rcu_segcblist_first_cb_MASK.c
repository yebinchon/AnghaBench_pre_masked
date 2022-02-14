
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_segcblist {struct rcu_head* head; } ;
struct rcu_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct rcu_segcblist*) ;

struct rcu_head *FUNC_1(struct rcu_segcblist *VAR_0)
{
 if (FUNC_0(VAR_0))
  return VAR_0->head;
 return ((void*)0);
}
