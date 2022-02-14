
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kthread_worker {int dummy; } ;
struct kthread_flush_work {int done; int work; int member_1; int member_0; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct kthread_worker*,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kthread_worker *VAR_1)
{
 struct kthread_flush_work VAR_2 = {
  FUNC_1(VAR_2.work, VAR_0),
  FUNC_0(VAR_2.done),
 };

 FUNC_2(VAR_1, &VAR_2.work);
 FUNC_3(&VAR_2.done);
}
