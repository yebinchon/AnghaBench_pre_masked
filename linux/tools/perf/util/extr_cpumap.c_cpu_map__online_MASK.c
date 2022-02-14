
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int dummy; } ;


 struct perf_cpu_map* FUNC_0 (int *) ;

const struct perf_cpu_map *FUNC_1(void)
{
 static const struct perf_cpu_map *VAR_0 = ((void*)0);

 if (!VAR_0)
  VAR_0 = FUNC_0(((void*)0));

 return VAR_0;
}
