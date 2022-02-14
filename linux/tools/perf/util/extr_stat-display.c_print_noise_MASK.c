
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat_evsel {int * res_stats; } ;
struct perf_stat_config {int run_count; } ;
struct evsel {struct perf_stat_evsel* stats; } ;


 int FUNC_0 (struct perf_stat_config*,int ,double) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct perf_stat_config *VAR_0,
   struct evsel *VAR_1, double VAR_2)
{
 struct perf_stat_evsel *VAR_3;

 if (VAR_0->run_count == 1)
  return;

 VAR_3 = VAR_1->stats;
 FUNC_0(VAR_0, FUNC_1(&VAR_3->res_stats[0]), VAR_2);
}
