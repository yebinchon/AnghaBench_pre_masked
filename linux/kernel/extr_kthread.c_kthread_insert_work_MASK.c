
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct kthread_worker {int task; int current_work; } ;
struct kthread_work {struct kthread_worker* worker; int node; } ;


 int FUNC_0 (struct kthread_worker*,struct kthread_work*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct kthread_worker *VAR_0,
    struct kthread_work *VAR_1,
    struct list_head *VAR_2)
{
 FUNC_0(VAR_0, VAR_1);

 FUNC_2(&VAR_1->node, VAR_2);
 VAR_1->worker = VAR_0;
 if (!VAR_0->current_work && FUNC_1(VAR_0->task))
  FUNC_3(VAR_0->task);
}
