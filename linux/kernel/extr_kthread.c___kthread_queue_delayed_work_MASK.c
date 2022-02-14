
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {scalar_t__ function; scalar_t__ expires; } ;
struct kthread_worker {int delayed_work_list; int work_list; } ;
struct kthread_work {struct kthread_worker* worker; int node; } ;
struct kthread_delayed_work {struct kthread_work work; struct timer_list timer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct timer_list*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct kthread_worker*,struct kthread_work*,int *) ;
 int FUNC_3 (struct kthread_worker*,struct kthread_work*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct kthread_worker *VAR_2,
      struct kthread_delayed_work *VAR_3,
      unsigned long VAR_4)
{
 struct timer_list *VAR_5 = &VAR_3->timer;
 struct kthread_work *VAR_6 = &VAR_3->work;

 FUNC_0(VAR_5->function != VAR_1);







 if (!VAR_4) {
  FUNC_2(VAR_2, VAR_6, &VAR_2->work_list);
  return;
 }


 FUNC_3(VAR_2, VAR_6);

 FUNC_4(&VAR_6->node, &VAR_2->delayed_work_list);
 VAR_6->worker = VAR_2;
 VAR_5->expires = VAR_0 + VAR_4;
 FUNC_1(VAR_5);
}
