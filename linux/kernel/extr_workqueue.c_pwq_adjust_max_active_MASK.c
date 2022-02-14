
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct workqueue_struct {int flags; scalar_t__ saved_max_active; int mutex; } ;
struct pool_workqueue {scalar_t__ max_active; scalar_t__ nr_active; TYPE_1__* pool; int delayed_works; struct workqueue_struct* wq; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pool_workqueue*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct pool_workqueue *VAR_2)
{
 struct workqueue_struct *VAR_3 = VAR_2->wq;
 bool VAR_4 = VAR_3->flags & VAR_0;
 unsigned long VAR_5;


 FUNC_1(&VAR_3->mutex);


 if (!VAR_4 && VAR_2->max_active == VAR_3->saved_max_active)
  return;


 FUNC_3(&VAR_2->pool->lock, VAR_5);






 if (!VAR_4 || !VAR_1) {
  VAR_2->max_active = VAR_3->saved_max_active;

  while (!FUNC_0(&VAR_2->delayed_works) &&
         VAR_2->nr_active < VAR_2->max_active)
   FUNC_2(VAR_2);





  FUNC_5(VAR_2->pool);
 } else {
  VAR_2->max_active = 0;
 }

 FUNC_4(&VAR_2->pool->lock, VAR_5);
}
