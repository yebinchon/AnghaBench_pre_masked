
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int next; } ;
struct kthread_worker {int lock; TYPE_1__ work_list; struct kthread_work* current_work; } ;
struct TYPE_4__ {int next; } ;
struct kthread_work {TYPE_2__ node; struct kthread_worker* worker; } ;
struct kthread_flush_work {int done; int work; int member_1; int member_0; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct kthread_worker*,int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct kthread_work *VAR_1)
{
 struct kthread_flush_work VAR_2 = {
  FUNC_1(VAR_2.work, VAR_0),
  FUNC_0(VAR_2.done),
 };
 struct kthread_worker *VAR_3;
 bool VAR_4 = 0;

 VAR_3 = VAR_1->worker;
 if (!VAR_3)
  return;

 FUNC_5(&VAR_3->lock);

 FUNC_2(VAR_1->worker != VAR_3);

 if (!FUNC_4(&VAR_1->node))
  FUNC_3(VAR_3, &VAR_2.work, VAR_1->node.next);
 else if (VAR_3->current_work == VAR_1)
  FUNC_3(VAR_3, &VAR_2.work,
        VAR_3->work_list.next);
 else
  VAR_4 = 1;

 FUNC_6(&VAR_3->lock);

 if (!VAR_4)
  FUNC_7(&VAR_2.done);
}
