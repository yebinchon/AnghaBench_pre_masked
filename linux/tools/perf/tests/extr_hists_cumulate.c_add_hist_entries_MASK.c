
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_sample {int period; struct ip_callchain* callchain; int ip; int tid; int pid; int cpumode; } ;
struct machine {int dummy; } ;
struct ip_callchain {int dummy; } ;
struct hists {int dummy; } ;
struct hist_entry_iter {int hide_unresolved; int * ops; struct perf_sample* sample; struct evsel* evsel; } ;
struct evsel {int dummy; } ;
struct addr_location {int sym; int map; int thread; } ;
struct TYPE_5__ {int sym; int map; int thread; int ip; int pid; } ;
struct TYPE_4__ {scalar_t__ cumulate_callchain; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct addr_location*) ;
 scalar_t__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_2 (struct hist_entry_iter*,struct addr_location*,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 struct evsel* FUNC_3 (struct hists*) ;
 scalar_t__ FUNC_4 (struct machine*,struct addr_location*,struct perf_sample*) ;
 int FUNC_5 (char*) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct hists *VAR_9, struct machine *VAR_10)
{
 struct addr_location VAR_11;
 struct evsel *VAR_12 = FUNC_3(VAR_9);
 struct perf_sample VAR_13 = { .period = 1000, };
 size_t VAR_14;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_4); VAR_14++) {
  struct hist_entry_iter VAR_15 = {
   .evsel = VAR_12,
   .sample = &VAR_13,
   .hide_unresolved = 0,
  };

  if (VAR_7.cumulate_callchain)
   VAR_15.ops = &VAR_5;
  else
   VAR_15.ops = &VAR_6;

  VAR_13.cpumode = VAR_0;
  VAR_13.pid = VAR_4[VAR_14].pid;
  VAR_13.tid = VAR_4[VAR_14].pid;
  VAR_13.ip = VAR_4[VAR_14].ip;
  VAR_13.callchain = (struct ip_callchain *)VAR_3[VAR_14];

  if (FUNC_4(VAR_10, &VAR_11, &VAR_13) < 0)
   goto out;

  if (FUNC_2(&VAR_15, &VAR_11, VAR_8,
      ((void*)0)) < 0) {
   FUNC_1(&VAR_11);
   goto out;
  }

  VAR_4[VAR_14].thread = VAR_11.thread;
  VAR_4[VAR_14].map = VAR_11.map;
  VAR_4[VAR_14].sym = VAR_11.sym;
 }

 return VAR_2;

out:
 FUNC_5("Not enough memory for adding a hist entry\n");
 return VAR_1;
}
