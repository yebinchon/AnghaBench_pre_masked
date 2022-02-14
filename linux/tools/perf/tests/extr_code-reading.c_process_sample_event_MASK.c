
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct thread {int dummy; } ;
struct state {int dummy; } ;
struct perf_sample {int cpumode; int ip; int tid; int pid; } ;
struct machine {int dummy; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 struct thread* FUNC_0 (struct machine*,int ,int ) ;
 scalar_t__ FUNC_1 (struct evlist*,union perf_event*,struct perf_sample*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,struct thread*,struct state*) ;
 int FUNC_4 (struct thread*) ;

__attribute__((used)) static int FUNC_5(struct machine *VAR_1,
    struct evlist *VAR_2,
    union perf_event *VAR_3, struct state *VAR_4)
{
 struct perf_sample VAR_5;
 struct thread *VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_2, VAR_3, &VAR_5)) {
  FUNC_2("perf_evlist__parse_sample failed\n");
  return -1;
 }

 VAR_6 = FUNC_0(VAR_1, VAR_5.pid, VAR_5.tid);
 if (!VAR_6) {
  FUNC_2("machine__findnew_thread failed\n");
  return -1;
 }

 VAR_7 = FUNC_3(VAR_5.ip, VAR_0, VAR_5.cpumode, VAR_6, VAR_4);
 FUNC_4(VAR_6);
 return VAR_7;
}
