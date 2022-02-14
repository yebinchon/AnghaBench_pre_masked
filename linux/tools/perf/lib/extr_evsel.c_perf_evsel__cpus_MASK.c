
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {struct perf_cpu_map* cpus; } ;
struct perf_cpu_map {int dummy; } ;



struct perf_cpu_map *FUNC_0(struct perf_evsel *VAR_0)
{
 return VAR_0->cpus;
}
