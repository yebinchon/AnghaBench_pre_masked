
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kthread_worker {int lock; } ;
struct kthread_work {int dummy; } ;
struct kthread_delayed_work {struct kthread_work work; } ;


 int FUNC_0 (struct kthread_worker*,struct kthread_delayed_work*,unsigned long) ;
 int FUNC_1 (struct kthread_worker*,struct kthread_work*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

bool FUNC_4(struct kthread_worker *VAR_0,
    struct kthread_delayed_work *VAR_1,
    unsigned long VAR_2)
{
 struct kthread_work *VAR_3 = &VAR_1->work;
 unsigned long VAR_4;
 bool VAR_5 = 0;

 FUNC_2(&VAR_0->lock, VAR_4);

 if (!FUNC_1(VAR_0, VAR_3)) {
  FUNC_0(VAR_0, VAR_1, VAR_2);
  VAR_5 = 1;
 }

 FUNC_3(&VAR_0->lock, VAR_4);
 return VAR_5;
}
