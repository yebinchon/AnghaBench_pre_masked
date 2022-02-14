
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat_config {scalar_t__ no_merge; } ;
struct evsel {scalar_t__ auto_merge_stats; scalar_t__ merged_stat; } ;


 int FUNC_0 (struct perf_stat_config*,struct evsel*,void (*) (struct perf_stat_config*,struct evsel*,void*,int),void*) ;
 int FUNC_1 (struct evsel*) ;

__attribute__((used)) static bool FUNC_2(struct perf_stat_config *VAR_0, struct evsel *VAR_1,
       void (*VAR_2)(struct perf_stat_config *VAR_3, struct evsel *VAR_4, void *VAR_5,
           bool VAR_6),
       void *VAR_7)
{
 if (VAR_1->merged_stat)
  return 0;
 VAR_2(VAR_0, VAR_1, VAR_7, 1);
 if (VAR_0->no_merge)
  FUNC_1(VAR_1);
 else if (VAR_1->auto_merge_stats)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_7);
 return 1;
}
