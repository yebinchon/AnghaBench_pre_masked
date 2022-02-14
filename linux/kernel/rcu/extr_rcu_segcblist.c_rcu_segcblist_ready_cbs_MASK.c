
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_segcblist {int ** tails; int head; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct rcu_segcblist*) ;

bool FUNC_1(struct rcu_segcblist *VAR_1)
{
 return FUNC_0(VAR_1) &&
        &VAR_1->head != VAR_1->tails[VAR_0];
}
