
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat_evsel {struct perf_stat_evsel* group_data; } ;
struct evsel {struct perf_stat_evsel* stats; } ;


 int FUNC_0 (struct perf_stat_evsel**) ;

__attribute__((used)) static void FUNC_1(struct evsel *VAR_0)
{
 struct perf_stat_evsel *VAR_1 = VAR_0->stats;

 if (VAR_1)
  FUNC_0(&VAR_1->group_data);
 FUNC_0(&VAR_0->stats);
}
