
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_env {int nr_cpus_avail; } ;


 int FUNC_0 (struct perf_env*) ;

int FUNC_1(struct perf_env *VAR_0)
{
 return VAR_0 && !FUNC_0(VAR_0) ? VAR_0->nr_cpus_avail : 0;
}
