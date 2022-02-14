
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kthread_worker {int lock; } ;
struct kthread_work {scalar_t__ canceling; struct kthread_worker* worker; } ;
struct kthread_delayed_work {struct kthread_work work; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kthread_work*,int,unsigned long*) ;
 int FUNC_2 (struct kthread_worker*,struct kthread_delayed_work*,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

bool FUNC_5(struct kthread_worker *VAR_0,
         struct kthread_delayed_work *VAR_1,
         unsigned long VAR_2)
{
 struct kthread_work *VAR_3 = &VAR_1->work;
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_3(&VAR_0->lock, VAR_4);


 if (!VAR_3->worker)
  goto fast_queue;


 FUNC_0(VAR_3->worker != VAR_0);


 if (VAR_3->canceling)
  goto out;

 VAR_5 = FUNC_1(VAR_3, 1, &VAR_4);
fast_queue:
 FUNC_2(VAR_0, VAR_1, VAR_2);
out:
 FUNC_4(&VAR_0->lock, VAR_4);
 return VAR_5;
}
