
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* tbl; int list; } ;
struct rhashtable_iter {TYPE_1__ walker; scalar_t__ end_of_table; scalar_t__ skip; scalar_t__ slot; int * p; struct rhashtable* ht; } ;
struct rhashtable {int lock; int tbl; } ;
struct TYPE_4__ {int walkers; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct rhashtable *VAR_0, struct rhashtable_iter *VAR_1)
{
 VAR_1->ht = VAR_0;
 VAR_1->p = ((void*)0);
 VAR_1->slot = 0;
 VAR_1->skip = 0;
 VAR_1->end_of_table = 0;

 FUNC_3(&VAR_0->lock);
 VAR_1->walker.tbl =
  FUNC_2(VAR_0->tbl, FUNC_1(&VAR_0->lock));
 FUNC_0(&VAR_1->walker.list, &VAR_1->walker.tbl->walkers);
 FUNC_4(&VAR_0->lock);
}
