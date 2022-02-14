
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {TYPE_1__* rseq; } ;
struct TYPE_2__ {int cpu_id; int cpu_id_start; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct task_struct *VAR_1)
{
 u32 VAR_2 = FUNC_1();

 if (FUNC_0(VAR_2, &VAR_1->rseq->cpu_id_start))
  return -VAR_0;
 if (FUNC_0(VAR_2, &VAR_1->rseq->cpu_id))
  return -VAR_0;
 FUNC_2(VAR_1);
 return 0;
}
