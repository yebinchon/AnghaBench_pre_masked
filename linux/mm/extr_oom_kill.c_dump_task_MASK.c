
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {int comm; TYPE_1__* signal; TYPE_2__* mm; int tgid; int pid; } ;
struct oom_control {int dummy; } ;
struct TYPE_6__ {int total_vm; } ;
struct TYPE_5__ {int oom_score_adj; } ;


 int VAR_0 ;
 struct task_struct* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (struct oom_control*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct task_struct*,struct oom_control*) ;
 scalar_t__ FUNC_7 (struct task_struct*) ;
 int FUNC_8 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 (struct task_struct*) ;

__attribute__((used)) static int FUNC_11(struct task_struct *VAR_2, void *VAR_3)
{
 struct oom_control *VAR_4 = VAR_3;
 struct task_struct *VAR_5;

 if (FUNC_7(VAR_2))
  return 0;


 if (!FUNC_4(VAR_4) && !FUNC_6(VAR_2, VAR_4))
  return 0;

 VAR_5 = FUNC_0(VAR_2);
 if (!VAR_5) {





  return 0;
 }

 FUNC_8("[%7d] %5d %5d %8lu %8lu %8ld %8lu         %5hd %s\n",
  VAR_5->pid, FUNC_1(&VAR_1, FUNC_9(VAR_5)),
  VAR_5->tgid, VAR_5->mm->total_vm, FUNC_3(VAR_5->mm),
  FUNC_5(VAR_5->mm),
  FUNC_2(VAR_5->mm, VAR_0),
  VAR_5->signal->oom_score_adj, VAR_5->comm);
 FUNC_10(VAR_5);

 return 0;
}
