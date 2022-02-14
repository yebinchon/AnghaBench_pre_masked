
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int dummy; } ;
struct evsel {int core; } ;


 struct perf_cpu_map* FUNC_0 (int *) ;

__attribute__((used)) static inline struct perf_cpu_map *FUNC_1(struct evsel *VAR_0)
{
 return FUNC_0(&VAR_0->core);
}
