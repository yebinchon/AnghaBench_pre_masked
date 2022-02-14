
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_segcblist {scalar_t__* tails; unsigned long* gp_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct rcu_segcblist*) ;
 scalar_t__ FUNC_4 (struct rcu_segcblist*,int) ;

bool FUNC_5(struct rcu_segcblist *VAR_3, unsigned long VAR_4)
{
 int VAR_5;

 FUNC_1(!FUNC_3(VAR_3));
 if (FUNC_4(VAR_3, VAR_0))
  return 0;
 for (VAR_5 = VAR_1; VAR_5 > VAR_0; VAR_5--)
  if (VAR_3->tails[VAR_5] != VAR_3->tails[VAR_5 - 1] &&
      FUNC_0(VAR_3->gp_seq[VAR_5], VAR_4))
   break;
 if (++VAR_5 >= VAR_2)
  return 0;
 for (; VAR_5 < VAR_2; VAR_5++) {
  FUNC_2(VAR_3->tails[VAR_5], VAR_3->tails[VAR_2]);
  VAR_3->gp_seq[VAR_5] = VAR_4;
 }
 return 1;
}
