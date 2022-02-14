
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kthread_worker {int lock; int work_list; } ;
struct kthread_work {int dummy; } ;


 int FUNC_0 (struct kthread_worker*,struct kthread_work*,int *) ;
 int FUNC_1 (struct kthread_worker*,struct kthread_work*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

bool FUNC_4(struct kthread_worker *VAR_0,
   struct kthread_work *VAR_1)
{
 bool VAR_2 = 0;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->lock, VAR_3);
 if (!FUNC_1(VAR_0, VAR_1)) {
  FUNC_0(VAR_0, VAR_1, &VAR_0->work_list);
  VAR_2 = 1;
 }
 FUNC_3(&VAR_0->lock, VAR_3);
 return VAR_2;
}
