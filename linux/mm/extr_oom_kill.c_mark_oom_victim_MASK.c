
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int pid; TYPE_1__* signal; struct mm_struct* mm; } ;
struct mm_struct {int flags; } ;
struct TYPE_2__ {int oom_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,struct mm_struct*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (struct task_struct*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct task_struct *VAR_4)
{
 struct mm_struct *VAR_5 = VAR_4->mm;

 FUNC_0(VAR_2);

 if (FUNC_6(VAR_4, VAR_1))
  return;


 if (!FUNC_3(&VAR_4->signal->oom_mm, ((void*)0), VAR_5)) {
  FUNC_4(VAR_4->signal->oom_mm);
  FUNC_5(VAR_0, &VAR_5->flags);
 }







 FUNC_1(VAR_4);
 FUNC_2(&VAR_3);
 FUNC_7(VAR_4->pid);
}
