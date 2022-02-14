
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct perf_sample {int raw_size; scalar_t__ raw_data; int transaction; int weight; int addr; int phys_addr; int period; int time; int ip; int cpu; int tid; int pid; } ;
struct TYPE_5__ {int attr; } ;
struct evsel {TYPE_1__ core; } ;
struct addr_location {int thread; TYPE_4__* sym; TYPE_3__* map; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {TYPE_2__* dso; } ;
struct TYPE_6__ {int name; } ;
typedef int PyObject ;


 int * FUNC_0 () ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char const*,int) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (struct evsel*) ;
 int FUNC_7 (int *,char*,int *) ;
 int * FUNC_8 (struct perf_sample*,int ) ;
 int * FUNC_9 (struct perf_sample*,int ) ;
 int FUNC_10 (int *,struct perf_sample*,struct evsel*) ;
 int FUNC_11 (int *,struct perf_sample*) ;
 int FUNC_12 (int *,struct perf_sample*,struct evsel*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static PyObject *FUNC_14(struct perf_sample *VAR_0,
      struct evsel *VAR_1,
      struct addr_location *VAR_2,
      PyObject *VAR_3)
{
 PyObject *VAR_4, *VAR_5, *VAR_6, *VAR_7;

 VAR_4 = FUNC_0();
 if (!VAR_4)
  FUNC_2("couldn't create Python dictionary");

 VAR_5 = FUNC_0();
 if (!VAR_5)
  FUNC_2("couldn't create Python dictionary");

 FUNC_7(VAR_4, "ev_name", FUNC_5(FUNC_6(VAR_1)));
 FUNC_7(VAR_4, "attr", FUNC_3((const char *)&VAR_1->core.attr, sizeof(VAR_1->core.attr)));

 FUNC_7(VAR_5, "pid",
   FUNC_4(VAR_0->pid));
 FUNC_7(VAR_5, "tid",
   FUNC_4(VAR_0->tid));
 FUNC_7(VAR_5, "cpu",
   FUNC_4(VAR_0->cpu));
 FUNC_7(VAR_5, "ip",
   FUNC_1(VAR_0->ip));
 FUNC_7(VAR_5, "time",
   FUNC_1(VAR_0->time));
 FUNC_7(VAR_5, "period",
   FUNC_1(VAR_0->period));
 FUNC_7(VAR_5, "phys_addr",
   FUNC_1(VAR_0->phys_addr));
 FUNC_7(VAR_5, "addr",
   FUNC_1(VAR_0->addr));
 FUNC_12(VAR_5, VAR_0, VAR_1);
 FUNC_7(VAR_5, "weight",
   FUNC_1(VAR_0->weight));
 FUNC_7(VAR_5, "transaction",
   FUNC_1(VAR_0->transaction));
 FUNC_11(VAR_5, VAR_0);
 FUNC_7(VAR_4, "sample", VAR_5);

 FUNC_7(VAR_4, "raw_buf", FUNC_3(
   (const char *)VAR_0->raw_data, VAR_0->raw_size));
 FUNC_7(VAR_4, "comm",
   FUNC_5(FUNC_13(VAR_2->thread)));
 if (VAR_2->map) {
  FUNC_7(VAR_4, "dso",
   FUNC_5(VAR_2->map->dso->name));
 }
 if (VAR_2->sym) {
  FUNC_7(VAR_4, "symbol",
   FUNC_5(VAR_2->sym->name));
 }

 FUNC_7(VAR_4, "callchain", VAR_3);

 VAR_6 = FUNC_8(VAR_0, VAR_2->thread);
 FUNC_7(VAR_4, "brstack", VAR_6);

 VAR_7 = FUNC_9(VAR_0, VAR_2->thread);
 FUNC_7(VAR_4, "brstacksym", VAR_7);

 FUNC_10(VAR_4, VAR_0, VAR_1);

 return VAR_4;
}
