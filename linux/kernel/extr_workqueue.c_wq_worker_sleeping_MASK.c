
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int lock; int worklist; int nr_running; } ;
struct worker {int flags; int sleeping; int task; struct worker_pool* pool; } ;
struct task_struct {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 struct worker* FUNC_2 (struct worker_pool*) ;
 struct worker* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct task_struct *VAR_1)
{
 struct worker *VAR_2, *VAR_3 = FUNC_3(VAR_1);
 struct worker_pool *VAR_4;






 if (VAR_3->flags & VAR_0)
  return;

 VAR_4 = VAR_3->pool;

 if (FUNC_0(VAR_3->sleeping))
  return;

 VAR_3->sleeping = 1;
 FUNC_5(&VAR_4->lock);
 if (FUNC_1(&VAR_4->nr_running) &&
     !FUNC_4(&VAR_4->worklist)) {
  VAR_2 = FUNC_2(VAR_4);
  if (VAR_2)
   FUNC_7(VAR_2->task);
 }
 FUNC_6(&VAR_4->lock);
}
