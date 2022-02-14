
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_segcblist {scalar_t__* tails; int * gp_seq; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct rcu_segcblist*) ;
 scalar_t__ FUNC_4 (struct rcu_segcblist*,size_t) ;

void FUNC_5(struct rcu_segcblist *VAR_3, unsigned long VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_1(!FUNC_3(VAR_3));
 if (FUNC_4(VAR_3, VAR_0))
  return;





 for (VAR_5 = VAR_2; VAR_5 < VAR_1; VAR_5++) {
  if (FUNC_0(VAR_4, VAR_3->gp_seq[VAR_5]))
   break;
  FUNC_2(VAR_3->tails[VAR_0], VAR_3->tails[VAR_5]);
 }


 if (VAR_5 == VAR_2)
  return;


 for (VAR_6 = VAR_2; VAR_6 < VAR_5; VAR_6++)
  FUNC_2(VAR_3->tails[VAR_6], VAR_3->tails[VAR_0]);







 for (VAR_6 = VAR_2; VAR_5 < VAR_1; VAR_5++, VAR_6++) {
  if (VAR_3->tails[VAR_6] == VAR_3->tails[VAR_1])
   break;
  FUNC_2(VAR_3->tails[VAR_6], VAR_3->tails[VAR_5]);
  VAR_3->gp_seq[VAR_6] = VAR_3->gp_seq[VAR_5];
 }
}
