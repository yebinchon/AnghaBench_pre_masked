
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_segcblist {int enabled; scalar_t__ len_lazy; int * head; int *** tails; int *** gp_seq; } ;


 scalar_t__ FUNC_0 (int ***) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct rcu_segcblist*,int ) ;

void FUNC_3(struct rcu_segcblist *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1 + 1 != FUNC_0(VAR_2->gp_seq));
 FUNC_1(FUNC_0(VAR_2->tails) != FUNC_0(VAR_2->gp_seq));
 VAR_2->head = ((void*)0);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->tails[VAR_3] = &VAR_2->head;
 FUNC_2(VAR_2, 0);
 VAR_2->len_lazy = 0;
 VAR_2->enabled = 1;
}
