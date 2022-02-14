
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct perf_sample {int period; int ip; int tid; int pid; int cpu; int cpumode; } ;
struct machine {int dummy; } ;
struct hists {int dummy; } ;
struct hist_entry_iter {int hide_unresolved; int * ops; struct perf_sample* sample; struct evsel* evsel; } ;
struct evsel {int dummy; } ;
struct addr_location {int sym; int map; int thread; } ;
struct TYPE_3__ {int sym; int map; int thread; int ip; int pid; int cpu; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct addr_location*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_2 (struct hist_entry_iter*,struct addr_location*,int ,int *) ;
 int VAR_4 ;
 struct evsel* FUNC_3 (struct hists*) ;
 scalar_t__ FUNC_4 (struct machine*,struct addr_location*,struct perf_sample*) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct hists *VAR_6, struct machine *VAR_7)
{
 struct addr_location VAR_8;
 struct evsel *VAR_9 = FUNC_3(VAR_6);
 struct perf_sample VAR_10 = { .period = 100, };
 size_t VAR_11;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
  struct hist_entry_iter VAR_12 = {
   .evsel = VAR_9,
   .sample = &VAR_10,
   .ops = &VAR_4,
   .hide_unresolved = 0,
  };

  VAR_10.cpumode = VAR_0;
  VAR_10.cpu = VAR_3[VAR_11].cpu;
  VAR_10.pid = VAR_3[VAR_11].pid;
  VAR_10.tid = VAR_3[VAR_11].pid;
  VAR_10.ip = VAR_3[VAR_11].ip;

  if (FUNC_4(VAR_7, &VAR_8, &VAR_10) < 0)
   goto out;

  if (FUNC_2(&VAR_12, &VAR_8, VAR_5,
      ((void*)0)) < 0) {
   FUNC_1(&VAR_8);
   goto out;
  }

  VAR_3[VAR_11].thread = VAR_8.thread;
  VAR_3[VAR_11].map = VAR_8.map;
  VAR_3[VAR_11].sym = VAR_8.sym;
 }

 return VAR_2;

out:
 FUNC_5("Not enough memory for adding a hist entry\n");
 return VAR_1;
}
