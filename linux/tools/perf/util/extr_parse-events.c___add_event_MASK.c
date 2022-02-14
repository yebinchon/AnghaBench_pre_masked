
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_pmu {int is_uncore; struct perf_cpu_map* cpus; } ;
struct perf_event_attr {int dummy; } ;
struct perf_cpu_map {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int system_wide; int node; void* own_cpus; void* cpus; } ;
struct evsel {int auto_merge_stats; TYPE_1__ core; int config_terms; int name; } ;


 int FUNC_0 (struct perf_event_attr*) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (struct list_head*,int *) ;
 void* FUNC_3 (struct perf_cpu_map*) ;
 struct perf_cpu_map* FUNC_4 (char const*) ;
 struct evsel* FUNC_5 (struct perf_event_attr*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static struct evsel *
FUNC_7(struct list_head *VAR_0, int *VAR_1,
     struct perf_event_attr *VAR_2,
     char *VAR_3, struct perf_pmu *VAR_4,
     struct list_head *VAR_5, bool VAR_6,
     const char *VAR_7)
{
 struct evsel *VAR_8;
 struct perf_cpu_map *VAR_9 = VAR_4 ? VAR_4->cpus :
          VAR_7 ? FUNC_4(VAR_7) : ((void*)0);

 FUNC_0(VAR_2);

 VAR_8 = FUNC_5(VAR_2, *VAR_1);
 if (!VAR_8)
  return ((void*)0);

 (*VAR_1)++;
 VAR_8->core.cpus = FUNC_3(VAR_9);
 VAR_8->core.own_cpus = FUNC_3(VAR_9);
 VAR_8->core.system_wide = VAR_4 ? VAR_4->is_uncore : 0;
 VAR_8->auto_merge_stats = VAR_6;

 if (VAR_3)
  VAR_8->name = FUNC_6(VAR_3);

 if (VAR_5)
  FUNC_2(VAR_5, &VAR_8->config_terms);

 FUNC_1(&VAR_8->core.node, VAR_0);
 return VAR_8;
}
