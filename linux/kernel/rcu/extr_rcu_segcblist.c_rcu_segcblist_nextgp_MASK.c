
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_segcblist {unsigned long* gp_seq; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct rcu_segcblist*) ;

bool FUNC_1(struct rcu_segcblist *VAR_1, unsigned long *VAR_2)
{
 if (!FUNC_0(VAR_1))
  return 0;
 *VAR_2 = VAR_1->gp_seq[VAR_0];
 return 1;
}
