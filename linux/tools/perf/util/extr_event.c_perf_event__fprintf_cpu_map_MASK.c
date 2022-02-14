
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
union perf_event {TYPE_1__ cpu_map; } ;
struct perf_cpu_map {int dummy; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (struct perf_cpu_map*,int *) ;
 struct perf_cpu_map* FUNC_1 (int *) ;
 size_t FUNC_2 (int *,char*) ;
 int FUNC_3 (struct perf_cpu_map*) ;

size_t FUNC_4(union perf_event *VAR_0, FILE *VAR_1)
{
 struct perf_cpu_map *VAR_2 = FUNC_1(&VAR_0->cpu_map.data);
 size_t VAR_3;

 VAR_3 = FUNC_2(VAR_1, ": ");

 if (VAR_2)
  VAR_3 += FUNC_0(VAR_2, VAR_1);
 else
  VAR_3 += FUNC_2(VAR_1, "failed to get cpumap from event\n");

 FUNC_3(VAR_2);
 return VAR_3;
}
