
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_bts_queue {unsigned int queue_nr; int pid; int tid; int cpu; struct intel_bts* bts; } ;
struct intel_bts {int dummy; } ;


 struct intel_bts_queue* FUNC_0 (int) ;

__attribute__((used)) static struct intel_bts_queue *FUNC_1(struct intel_bts *VAR_0,
           unsigned int VAR_1)
{
 struct intel_bts_queue *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct intel_bts_queue));
 if (!VAR_2)
  return ((void*)0);

 VAR_2->bts = VAR_0;
 VAR_2->queue_nr = VAR_1;
 VAR_2->pid = -1;
 VAR_2->tid = -1;
 VAR_2->cpu = -1;

 return VAR_2;
}
