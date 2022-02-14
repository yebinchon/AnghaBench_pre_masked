
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct datarec {int info; int dropped; int processed; } ;
struct cpumap_kthread_ctx {scalar_t__ sched; scalar_t__ drops; scalar_t__ processed; } ;


 struct datarec* FUNC_0 (int *,int *) ;
 int VAR_0 ;

int FUNC_1(struct cpumap_kthread_ctx *VAR_1)
{
 struct datarec *VAR_2;
 u32 VAR_3 = 0;

 VAR_2 = FUNC_0(&VAR_0, &VAR_3);
 if (!VAR_2)
  return 0;
 VAR_2->processed += VAR_1->processed;
 VAR_2->dropped += VAR_1->drops;


 if (VAR_1->sched)
  VAR_2->info++;

 return 0;
}
