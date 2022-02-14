
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {TYPE_1__* rseq; } ;
struct TYPE_2__ {int cpu_id; int cpu_id_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct task_struct *VAR_2)
{
 u32 VAR_3 = 0, VAR_4 = VAR_1;




 if (FUNC_0(VAR_3, &VAR_2->rseq->cpu_id_start))
  return -VAR_0;





 if (FUNC_0(VAR_4, &VAR_2->rseq->cpu_id))
  return -VAR_0;
 return 0;
}
