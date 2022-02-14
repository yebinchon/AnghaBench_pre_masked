
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kthread_worker {int lock; struct kthread_work* current_work; } ;
struct kthread_work {int canceling; struct kthread_worker* worker; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kthread_work*,int,unsigned long*) ;
 int FUNC_2 (struct kthread_work*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_5(struct kthread_work *VAR_0, bool VAR_1)
{
 struct kthread_worker *VAR_2 = VAR_0->worker;
 unsigned long VAR_3;
 int VAR_4 = 0;

 if (!VAR_2)
  goto out;

 FUNC_3(&VAR_2->lock, VAR_3);

 FUNC_0(VAR_0->worker != VAR_2);

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);

 if (VAR_2->current_work != VAR_0)
  goto out_fast;





 VAR_0->canceling++;
 FUNC_4(&VAR_2->lock, VAR_3);
 FUNC_2(VAR_0);
 FUNC_3(&VAR_2->lock, VAR_3);
 VAR_0->canceling--;

out_fast:
 FUNC_4(&VAR_2->lock, VAR_3);
out:
 return VAR_4;
}
