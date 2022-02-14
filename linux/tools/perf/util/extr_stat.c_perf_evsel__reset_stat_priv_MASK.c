
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat_evsel {int * res_stats; } ;
struct evsel {struct perf_stat_evsel* stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct evsel*) ;

__attribute__((used)) static void FUNC_2(struct evsel *VAR_0)
{
 int VAR_1;
 struct perf_stat_evsel *VAR_2 = VAR_0->stats;

 for (VAR_1 = 0; VAR_1 < 3; VAR_1++)
  FUNC_0(&VAR_2->res_stats[VAR_1]);

 FUNC_1(VAR_0);
}
