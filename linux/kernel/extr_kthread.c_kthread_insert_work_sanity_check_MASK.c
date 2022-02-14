
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kthread_worker {int lock; } ;
struct kthread_work {struct kthread_worker* worker; int node; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kthread_worker *VAR_0,
          struct kthread_work *VAR_1)
{
 FUNC_2(&VAR_0->lock);
 FUNC_0(!FUNC_1(&VAR_1->node));

 FUNC_0(VAR_1->worker && VAR_1->worker != VAR_0);
}
