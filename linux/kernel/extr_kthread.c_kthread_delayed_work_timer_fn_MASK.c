
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct kthread_worker {int lock; int work_list; } ;
struct kthread_work {int node; struct kthread_worker* worker; } ;
struct kthread_delayed_work {struct kthread_work work; } ;


 scalar_t__ FUNC_0 (int) ;
 struct kthread_delayed_work* VAR_0 ;
 struct kthread_delayed_work* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct kthread_worker*,struct kthread_work*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_1 ;

void FUNC_7(struct timer_list *VAR_2)
{
 struct kthread_delayed_work *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);
 struct kthread_work *VAR_4 = &VAR_3->work;
 struct kthread_worker *VAR_5 = VAR_4->worker;
 unsigned long VAR_6;





 if (FUNC_0(!VAR_5))
  return;

 FUNC_5(&VAR_5->lock, VAR_6);

 FUNC_0(VAR_4->worker != VAR_5);


 FUNC_0(FUNC_4(&VAR_4->node));
 FUNC_3(&VAR_4->node);
 FUNC_2(VAR_5, VAR_4, &VAR_5->work_list);

 FUNC_6(&VAR_5->lock, VAR_6);
}
