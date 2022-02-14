
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union perf_event {int auxtrace_error; } ;
struct perf_sample {int time; int tid; int pid; int cpu; } ;
struct intel_bts {int session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,int ,char*,int ) ;
 int FUNC_1 (int ,union perf_event*,int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct intel_bts *VAR_2, struct perf_sample *VAR_3)
{
 union perf_event VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4.auxtrace_error, VAR_1,
        VAR_0, VAR_3->cpu, VAR_3->pid,
        VAR_3->tid, 0, "Lost trace data", VAR_3->time);

 VAR_5 = FUNC_1(VAR_2->session, &VAR_4, ((void*)0));
 if (VAR_5)
  FUNC_2("Intel BTS: failed to deliver error event, error %d\n",
         VAR_5);

 return VAR_5;
}
