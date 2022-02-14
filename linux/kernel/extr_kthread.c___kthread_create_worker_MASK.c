
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct task_struct {int dummy; } ;
struct kthread_worker {unsigned int flags; struct task_struct* task; } ;


 int VAR_0 ;
 struct kthread_worker* FUNC_0 (struct task_struct*) ;
 struct kthread_worker* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 int VAR_2 ;
 struct task_struct* FUNC_3 (int ,struct kthread_worker*,int,char const*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct kthread_worker*) ;
 int FUNC_6 (struct task_struct*,int) ;
 int FUNC_7 (struct kthread_worker*) ;
 int VAR_3 ;
 struct kthread_worker* FUNC_8 (int,int ) ;
 int FUNC_9 (struct task_struct*) ;

struct kthread_worker *
FUNC_10(int VAR_4, unsigned int VAR_5,
   const char VAR_6[], va_list VAR_7)
{
 struct kthread_worker *VAR_8;
 struct task_struct *VAR_9;
 int VAR_10 = VAR_2;

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_1(-VAR_0);

 FUNC_7(VAR_8);

 if (VAR_4 >= 0)
  VAR_10 = FUNC_4(VAR_4);

 VAR_9 = FUNC_3(VAR_3, VAR_8,
      VAR_10, VAR_6, VAR_7);
 if (FUNC_2(VAR_9))
  goto fail_task;

 if (VAR_4 >= 0)
  FUNC_6(VAR_9, VAR_4);

 VAR_8->flags = VAR_5;
 VAR_8->task = VAR_9;
 FUNC_9(VAR_9);
 return VAR_8;

fail_task:
 FUNC_5(VAR_8);
 return FUNC_0(VAR_9);
}
