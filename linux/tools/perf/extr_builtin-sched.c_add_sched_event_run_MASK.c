
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct task_desc {int dummy; } ;
struct sched_atom {scalar_t__ type; scalar_t__ duration; } ;
struct perf_sched {int nr_run_events; int nr_run_events_optimized; } ;


 scalar_t__ VAR_0 ;
 struct sched_atom* FUNC_0 (struct task_desc*,scalar_t__) ;
 struct sched_atom* FUNC_1 (struct task_desc*) ;

__attribute__((used)) static void FUNC_2(struct perf_sched *VAR_1, struct task_desc *VAR_2,
    u64 VAR_3, u64 VAR_4)
{
 struct sched_atom *VAR_5, *VAR_6 = FUNC_1(VAR_2);





 if (VAR_6 && VAR_6->type == VAR_0) {
  VAR_1->nr_run_events_optimized++;
  VAR_6->duration += VAR_4;
  return;
 }

 VAR_5 = FUNC_0(VAR_2, VAR_3);

 VAR_5->type = VAR_0;
 VAR_5->duration = VAR_4;

 VAR_1->nr_run_events++;
}
