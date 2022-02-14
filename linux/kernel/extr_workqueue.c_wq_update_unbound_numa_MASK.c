
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct workqueue_struct {int flags; int mutex; struct pool_workqueue* dfl_pwq; int name; TYPE_3__* unbound_attrs; } ;
struct workqueue_attrs {int * cpumask; } ;
struct pool_workqueue {TYPE_1__* pool; } ;
typedef int cpumask_t ;
struct TYPE_6__ {scalar_t__ no_numa; } ;
struct TYPE_5__ {int cpumask; } ;
struct TYPE_4__ {int lock; TYPE_2__* attrs; } ;


 int VAR_0 ;
 struct pool_workqueue* FUNC_0 (struct workqueue_struct*,struct workqueue_attrs*) ;
 int FUNC_1 (struct workqueue_attrs*,TYPE_3__*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (struct pool_workqueue*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct pool_workqueue* FUNC_8 (struct workqueue_struct*,int,struct pool_workqueue*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct pool_workqueue*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct pool_workqueue* FUNC_13 (struct workqueue_struct*,int) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct workqueue_attrs* VAR_3 ;

__attribute__((used)) static void FUNC_15(struct workqueue_struct *VAR_4, int VAR_5,
       bool VAR_6)
{
 int VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = VAR_6 ? -1 : VAR_5;
 struct pool_workqueue *VAR_9 = ((void*)0), *VAR_10;
 struct workqueue_attrs *VAR_11;
 cpumask_t *VAR_12;

 FUNC_5(&VAR_2);

 if (!VAR_1 || !(VAR_4->flags & VAR_0) ||
     VAR_4->unbound_attrs->no_numa)
  return;






 VAR_11 = VAR_3;
 VAR_12 = VAR_11->cpumask;

 FUNC_1(VAR_11, VAR_4->unbound_attrs);
 VAR_10 = FUNC_13(VAR_4, VAR_7);







 if (FUNC_14(VAR_4->dfl_pwq->pool->attrs, VAR_7, VAR_8, VAR_12)) {
  if (FUNC_3(VAR_12, VAR_10->pool->attrs->cpumask))
   return;
 } else {
  goto use_dfl_pwq;
 }


 VAR_10 = FUNC_0(VAR_4, VAR_11);
 if (!VAR_10) {
  FUNC_9("workqueue: allocation failed while updating NUMA affinity of \"%s\"\n",
   VAR_4->name);
  goto use_dfl_pwq;
 }


 FUNC_6(&VAR_4->mutex);
 VAR_9 = FUNC_8(VAR_4, VAR_7, VAR_10);
 goto out_unlock;

use_dfl_pwq:
 FUNC_6(&VAR_4->mutex);
 FUNC_11(&VAR_4->dfl_pwq->pool->lock);
 FUNC_4(VAR_4->dfl_pwq);
 FUNC_12(&VAR_4->dfl_pwq->pool->lock);
 VAR_9 = FUNC_8(VAR_4, VAR_7, VAR_4->dfl_pwq);
out_unlock:
 FUNC_7(&VAR_4->mutex);
 FUNC_10(VAR_9);
}
