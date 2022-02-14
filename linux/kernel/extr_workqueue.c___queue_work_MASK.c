
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int flags; int name; int cpu_pwqs; } ;
struct list_head {int dummy; } ;
struct worker_pool {int lock; int watchdog_ts; struct list_head worklist; } ;
struct worker {struct pool_workqueue* current_pwq; } ;
struct work_struct {struct list_head entry; } ;
struct pool_workqueue {size_t work_color; scalar_t__ nr_active; scalar_t__ max_active; struct worker_pool* pool; struct list_head delayed_works; int * nr_in_flight; int refcnt; struct workqueue_struct* wq; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct work_struct*) ;
 struct worker* FUNC_6 (struct worker_pool*,struct work_struct*) ;
 struct worker_pool* FUNC_7 (struct work_struct*) ;
 int FUNC_8 (struct pool_workqueue*,struct work_struct*,struct list_head*,unsigned int) ;
 int FUNC_9 (struct workqueue_struct*) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct list_head*) ;
 int FUNC_12 () ;
 struct pool_workqueue* FUNC_13 (int ,int) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct work_struct*) ;
 int FUNC_20 (unsigned int,struct pool_workqueue*,struct work_struct*) ;
 struct pool_workqueue* FUNC_21 (struct workqueue_struct*,int ) ;
 scalar_t__ FUNC_22 (int) ;
 unsigned int FUNC_23 (size_t) ;
 int FUNC_24 (int ) ;

__attribute__((used)) static void FUNC_25(int VAR_5, struct workqueue_struct *VAR_6,
    struct work_struct *VAR_7)
{
 struct pool_workqueue *VAR_8;
 struct worker_pool *VAR_9;
 struct list_head *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12 = VAR_5;







 FUNC_12();

 FUNC_5(VAR_7);


 if (FUNC_22(VAR_6->flags & VAR_3) &&
     FUNC_2(!FUNC_9(VAR_6)))
  return;
 FUNC_15();
retry:
 if (VAR_12 == VAR_0)
  VAR_5 = FUNC_24(FUNC_14());


 if (!(VAR_6->flags & VAR_2))
  VAR_8 = FUNC_13(VAR_6->cpu_pwqs, VAR_5);
 else
  VAR_8 = FUNC_21(VAR_6, FUNC_4(VAR_5));






 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9 && VAR_9 != VAR_8->pool) {
  struct worker *VAR_13;

  FUNC_17(&VAR_9->lock);

  VAR_13 = FUNC_6(VAR_9, VAR_7);

  if (VAR_13 && VAR_13->current_pwq->wq == VAR_6) {
   VAR_8 = VAR_13->current_pwq;
  } else {

   FUNC_18(&VAR_9->lock);
   FUNC_17(&VAR_8->pool->lock);
  }
 } else {
  FUNC_17(&VAR_8->pool->lock);
 }
 if (FUNC_22(!VAR_8->refcnt)) {
  if (VAR_6->flags & VAR_2) {
   FUNC_18(&VAR_8->pool->lock);
   FUNC_3();
   goto retry;
  }

  FUNC_1(1, "workqueue: per-cpu pwq for %s on cpu%d has 0 refcnt",
     VAR_6->name, VAR_5);
 }


 FUNC_20(VAR_12, VAR_8, VAR_7);

 if (FUNC_0(!FUNC_11(&VAR_7->entry)))
  goto out;

 VAR_8->nr_in_flight[VAR_8->work_color]++;
 VAR_11 = FUNC_23(VAR_8->work_color);

 if (FUNC_10(VAR_8->nr_active < VAR_8->max_active)) {
  FUNC_19(VAR_7);
  VAR_8->nr_active++;
  VAR_10 = &VAR_8->pool->worklist;
  if (FUNC_11(VAR_10))
   VAR_8->pool->watchdog_ts = VAR_4;
 } else {
  VAR_11 |= VAR_1;
  VAR_10 = &VAR_8->delayed_works;
 }

 FUNC_8(VAR_8, VAR_7, VAR_10, VAR_11);

out:
 FUNC_18(&VAR_8->pool->lock);
 FUNC_16();
}
