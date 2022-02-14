
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_record_record_cpu_map {int dummy; } ;
struct perf_record_cpu_map_data {scalar_t__ type; scalar_t__ data; } ;
struct perf_cpu_map {int dummy; } ;
struct cpu_map_entries {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct perf_cpu_map* FUNC_0 (struct cpu_map_entries*) ;
 struct perf_cpu_map* FUNC_1 (struct perf_record_record_cpu_map*) ;

struct perf_cpu_map *FUNC_2(struct perf_record_cpu_map_data *VAR_1)
{
 if (VAR_1->type == VAR_0)
  return FUNC_0((struct cpu_map_entries *)VAR_1->data);
 else
  return FUNC_1((struct perf_record_record_cpu_map *)VAR_1->data);
}
