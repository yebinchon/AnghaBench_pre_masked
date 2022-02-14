
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct perf_thread_map {int nr; } ;
struct perf_stat_config {scalar_t__ aggr_mode; } ;
struct perf_cpu_map {int nr; int* map; } ;
struct TYPE_3__ {struct perf_cpu_map* cpus; struct perf_thread_map* threads; } ;
struct evsel {TYPE_2__* counts; TYPE_1__ core; } ;
struct TYPE_4__ {int aggr; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (struct perf_thread_map*,int) ;
 int FUNC_2 (struct evsel*,int,int,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct perf_stat_config *VAR_1,
    struct evsel *VAR_2, u64 VAR_3)
{
 struct perf_thread_map *VAR_4 = VAR_2->core.threads;
 struct perf_cpu_map *VAR_5 = VAR_2->core.cpus;
 int VAR_6, VAR_7;

 if (VAR_1->aggr_mode == VAR_0) {
  FUNC_2(VAR_2, -1, -1, VAR_3,
        &VAR_2->counts->aggr);
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->nr; VAR_7++) {
  for (VAR_6 = 0; VAR_6 < VAR_5->nr; VAR_6++) {
   FUNC_2(VAR_2, VAR_5->map[VAR_6],
         FUNC_1(VAR_4, VAR_7), VAR_3,
         FUNC_0(VAR_2->counts, VAR_6, VAR_7));
  }
 }
}
