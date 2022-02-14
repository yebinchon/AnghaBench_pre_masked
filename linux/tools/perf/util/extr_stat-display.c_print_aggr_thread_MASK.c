
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target {int dummy; } ;
struct perf_stat_config {int * stats; int * output; } ;
struct perf_aggr_thread_value {int id; int ena; int run; int uval; int counter; } ;
struct TYPE_2__ {int cpus; int threads; } ;
struct evsel {TYPE_1__ core; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (struct perf_aggr_thread_value*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct perf_stat_config*,int,int ,int ,int ,char*,int ,int ,double,int *) ;
 int VAR_0 ;
 struct perf_aggr_thread_value* FUNC_7 (struct evsel*,int,int,int*,struct target*) ;

__attribute__((used)) static void FUNC_8(struct perf_stat_config *VAR_1,
         struct target *VAR_2,
         struct evsel *VAR_3, char *VAR_4)
{
 FILE *VAR_5 = VAR_1->output;
 int VAR_6 = FUNC_4(VAR_3->core.threads);
 int VAR_7 = FUNC_3(VAR_3->core.cpus);
 int VAR_8, VAR_9, VAR_10;
 struct perf_aggr_thread_value *VAR_11;

 VAR_11 = FUNC_7(VAR_3, VAR_6, VAR_7, &VAR_9, VAR_2);
 if (!VAR_11) {
  FUNC_5("cannot sort aggr thread");
  return;
 }

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  if (VAR_4)
   FUNC_0(VAR_5, "%s", VAR_4);

  VAR_10 = VAR_11[VAR_8].id;
  if (VAR_1->stats)
   FUNC_6(VAR_1, VAR_10, 0, VAR_11[VAR_8].counter, VAR_11[VAR_8].uval,
     VAR_4, VAR_11[VAR_8].run, VAR_11[VAR_8].ena, 1.0,
     &VAR_1->stats[VAR_10]);
  else
   FUNC_6(VAR_1, VAR_10, 0, VAR_11[VAR_8].counter, VAR_11[VAR_8].uval,
     VAR_4, VAR_11[VAR_8].run, VAR_11[VAR_8].ena, 1.0,
     &VAR_0);
  FUNC_1('\n', VAR_5);
 }

 FUNC_2(VAR_11);
}
