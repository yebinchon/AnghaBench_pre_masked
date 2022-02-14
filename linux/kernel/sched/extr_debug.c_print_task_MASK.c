
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sum_sleep_runtime; int wait_sum; } ;
struct TYPE_4__ {TYPE_1__ statistics; int sum_exec_runtime; int vruntime; } ;
struct task_struct {TYPE_2__ se; int prio; scalar_t__ nivcsw; scalar_t__ nvcsw; int comm; } ;
struct seq_file {int dummy; } ;
struct rq {struct task_struct* curr; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct task_struct*) ;

__attribute__((used)) static void
FUNC_9(struct seq_file *VAR_0, struct rq *VAR_1, struct task_struct *VAR_2)
{
 if (VAR_1->curr == VAR_2)
  FUNC_0(VAR_0, ">R");
 else
  FUNC_0(VAR_0, " %c", FUNC_8(VAR_2));

 FUNC_0(VAR_0, "%15s %5d %9Ld.%06ld %9Ld %5d ",
  VAR_2->comm, FUNC_7(VAR_2),
  FUNC_1(VAR_2->se.vruntime),
  (long long)(VAR_2->nvcsw + VAR_2->nivcsw),
  VAR_2->prio);

 FUNC_0(VAR_0, "%9Ld.%06ld %9Ld.%06ld %9Ld.%06ld",
  FUNC_1(FUNC_2(VAR_2->se.statistics.wait_sum)),
  FUNC_1(VAR_2->se.sum_exec_runtime),
  FUNC_1(FUNC_2(VAR_2->se.statistics.sum_sleep_runtime)));
 FUNC_0(VAR_0, "\n");
}
