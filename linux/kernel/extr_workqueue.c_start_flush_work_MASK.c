
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wq_barrier {int dummy; } ;
struct worker_pool {int lock; } ;
struct worker {struct pool_workqueue* current_pwq; } ;
struct work_struct {int dummy; } ;
struct pool_workqueue {TYPE_1__* wq; struct worker_pool* pool; } ;
struct TYPE_2__ {int saved_max_active; int lockdep_map; scalar_t__ rescuer; } ;


 int FUNC_0 (TYPE_1__*,struct work_struct*) ;
 struct worker* FUNC_1 (struct worker_pool*,struct work_struct*) ;
 struct worker_pool* FUNC_2 (struct work_struct*) ;
 struct pool_workqueue* FUNC_3 (struct work_struct*) ;
 int FUNC_4 (struct pool_workqueue*,struct wq_barrier*,struct work_struct*,struct worker*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static bool FUNC_13(struct work_struct *VAR_0, struct wq_barrier *VAR_1,
        bool VAR_2)
{
 struct worker *VAR_3 = ((void*)0);
 struct worker_pool *VAR_4;
 struct pool_workqueue *VAR_5;

 FUNC_7();

 FUNC_8();
 VAR_4 = FUNC_2(VAR_0);
 if (!VAR_4) {
  FUNC_9();
  return 0;
 }

 FUNC_10(&VAR_4->lock);

 VAR_5 = FUNC_3(VAR_0);
 if (VAR_5) {
  if (FUNC_12(VAR_5->pool != VAR_4))
   goto already_gone;
 } else {
  VAR_3 = FUNC_1(VAR_4, VAR_0);
  if (!VAR_3)
   goto already_gone;
  VAR_5 = VAR_3->current_pwq;
 }

 FUNC_0(VAR_5->wq, VAR_0);

 FUNC_4(VAR_5, VAR_1, VAR_0, VAR_3);
 FUNC_11(&VAR_4->lock);
 if (!VAR_2 &&
     (VAR_5->wq->saved_max_active == 1 || VAR_5->wq->rescuer)) {
  FUNC_5(&VAR_5->wq->lockdep_map);
  FUNC_6(&VAR_5->wq->lockdep_map);
 }
 FUNC_9();
 return 1;
already_gone:
 FUNC_11(&VAR_4->lock);
 FUNC_9();
 return 0;
}
