
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int list; scalar_t__ tbl; } ;
struct rhashtable_iter {TYPE_2__* ht; TYPE_1__ walker; } ;
struct TYPE_4__ {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rhashtable_iter *VAR_0)
{
 FUNC_1(&VAR_0->ht->lock);
 if (VAR_0->walker.tbl)
  FUNC_0(&VAR_0->walker.list);
 FUNC_2(&VAR_0->ht->lock);
}
