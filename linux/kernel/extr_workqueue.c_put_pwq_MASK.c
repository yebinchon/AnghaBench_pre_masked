
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pool_workqueue {int unbound_release_work; TYPE_2__* wq; int refcnt; TYPE_1__* pool; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pool_workqueue *VAR_1)
{
 FUNC_2(&VAR_1->pool->lock);
 if (FUNC_1(--VAR_1->refcnt))
  return;
 if (FUNC_0(!(VAR_1->wq->flags & VAR_0)))
  return;
 FUNC_3(&VAR_1->unbound_release_work);
}
