
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_stat_config {TYPE_1__* cpus_aggr_map; } ;
struct perf_cpu_map {int nr; int* map; } ;
typedef int (* aggr_get_id_t ) (struct perf_stat_config*,struct perf_cpu_map*,int) ;
struct TYPE_2__ {int* map; } ;



__attribute__((used)) static int FUNC_0(struct perf_stat_config *VAR_0,
          aggr_get_id_t VAR_1, struct perf_cpu_map *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3 >= VAR_2->nr)
  return -1;

 VAR_4 = VAR_2->map[VAR_3];

 if (VAR_0->cpus_aggr_map->map[VAR_4] == -1)
  VAR_0->cpus_aggr_map->map[VAR_4] = VAR_1(VAR_0, VAR_2, VAR_3);

 return VAR_0->cpus_aggr_map->map[VAR_4];
}
