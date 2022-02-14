
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct res_sample {int tid; int cpu; int time; } ;
struct perf_sample {int tid; int cpu; int time; } ;
struct hist_entry {scalar_t__ num_res; struct res_sample* res_samples; } ;
struct TYPE_2__ {scalar_t__ res_sample; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct hist_entry *VAR_1, struct perf_sample *VAR_2)
{
 struct res_sample *VAR_3;
 int VAR_4;

 if (VAR_1->num_res < VAR_0.res_sample) {
  VAR_4 = VAR_1->num_res++;
 } else {
  VAR_4 = FUNC_0(VAR_0.res_sample);
 }
 VAR_3 = &VAR_1->res_samples[VAR_4];
 VAR_3->time = VAR_2->time;
 VAR_3->cpu = VAR_2->cpu;
 VAR_3->tid = VAR_2->tid;
}
