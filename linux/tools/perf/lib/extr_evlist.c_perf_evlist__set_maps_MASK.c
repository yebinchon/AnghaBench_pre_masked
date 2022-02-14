
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int dummy; } ;
struct perf_evlist {struct perf_thread_map* threads; struct perf_cpu_map* cpus; } ;
struct perf_cpu_map {int dummy; } ;


 struct perf_cpu_map* FUNC_0 (struct perf_cpu_map*) ;
 int FUNC_1 (struct perf_cpu_map*) ;
 int FUNC_2 (struct perf_evlist*) ;
 struct perf_thread_map* FUNC_3 (struct perf_thread_map*) ;
 int FUNC_4 (struct perf_thread_map*) ;

void FUNC_5(struct perf_evlist *VAR_0,
      struct perf_cpu_map *VAR_1,
      struct perf_thread_map *VAR_2)
{







 if (VAR_1 != VAR_0->cpus) {
  FUNC_1(VAR_0->cpus);
  VAR_0->cpus = FUNC_0(VAR_1);
 }

 if (VAR_2 != VAR_0->threads) {
  FUNC_4(VAR_0->threads);
  VAR_0->threads = FUNC_3(VAR_2);
 }

 FUNC_2(VAR_0);
}
