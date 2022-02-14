
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct datarec {int info; int dropped; int processed; } ;
struct cpumap_enqueue_ctx {scalar_t__ to_cpu; scalar_t__ processed; scalar_t__ drops; } ;


 scalar_t__ VAR_0 ;
 struct datarec* FUNC_0 (int *,scalar_t__*) ;
 int VAR_1 ;

int FUNC_1(struct cpumap_enqueue_ctx *VAR_2)
{
 u32 VAR_3 = VAR_2->to_cpu;
 struct datarec *VAR_4;

 if (VAR_3 >= VAR_0)
  return 1;

 VAR_4 = FUNC_0(&VAR_1, &VAR_3);
 if (!VAR_4)
  return 0;
 VAR_4->processed += VAR_2->processed;
 VAR_4->dropped += VAR_2->drops;


 if (VAR_2->processed > 0)
  VAR_4->info += 1;

 return 0;
}
