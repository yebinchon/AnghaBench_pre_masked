
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_segcblist {struct rcu_head*** tails; } ;
struct rcu_head {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct rcu_segcblist*) ;

struct rcu_head *FUNC_1(struct rcu_segcblist *VAR_1)
{
 if (FUNC_0(VAR_1))
  return *VAR_1->tails[VAR_0];
 return ((void*)0);
}
