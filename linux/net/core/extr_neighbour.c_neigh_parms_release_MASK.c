
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neigh_parms {int dead; int rcu_head; scalar_t__ dev; int list; } ;
struct neigh_table {int lock; struct neigh_parms parms; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct neigh_table *VAR_1, struct neigh_parms *VAR_2)
{
 if (!VAR_2 || VAR_2 == &VAR_1->parms)
  return;
 FUNC_3(&VAR_1->lock);
 FUNC_2(&VAR_2->list);
 VAR_2->dead = 1;
 FUNC_4(&VAR_1->lock);
 if (VAR_2->dev)
  FUNC_1(VAR_2->dev);
 FUNC_0(&VAR_2->rcu_head, VAR_0);
}
