
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int time; int tid; int pid; int cpu; } ;
struct intel_pt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_pt*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct intel_pt *VAR_1, struct perf_sample *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0, VAR_2->cpu,
        VAR_2->pid, VAR_2->tid, 0, VAR_2->time);
}
