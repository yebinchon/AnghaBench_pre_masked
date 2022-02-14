
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct perf_env {int nr_numa_nodes; int caches_cnt; int nr_memory_nodes; TYPE_1__* memory_nodes; TYPE_1__* caches; TYPE_1__* numa_nodes; TYPE_1__* cpu; TYPE_1__* pmu_mappings; TYPE_1__* sibling_threads; TYPE_1__* sibling_cores; TYPE_1__* cmdline_argv; TYPE_1__* cmdline; TYPE_1__* cpuid; TYPE_1__* cpu_desc; TYPE_1__* arch; TYPE_1__* version; TYPE_1__* os_release; TYPE_1__* hostname; } ;
struct TYPE_3__ {struct TYPE_3__* set; int map; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct perf_env*) ;
 int FUNC_3 (TYPE_1__**) ;

void FUNC_4(struct perf_env *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0);
 FUNC_3(&VAR_0->hostname);
 FUNC_3(&VAR_0->os_release);
 FUNC_3(&VAR_0->version);
 FUNC_3(&VAR_0->arch);
 FUNC_3(&VAR_0->cpu_desc);
 FUNC_3(&VAR_0->cpuid);
 FUNC_3(&VAR_0->cmdline);
 FUNC_3(&VAR_0->cmdline_argv);
 FUNC_3(&VAR_0->sibling_cores);
 FUNC_3(&VAR_0->sibling_threads);
 FUNC_3(&VAR_0->pmu_mappings);
 FUNC_3(&VAR_0->cpu);

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_numa_nodes; VAR_1++)
  FUNC_1(VAR_0->numa_nodes[VAR_1].map);
 FUNC_3(&VAR_0->numa_nodes);

 for (VAR_1 = 0; VAR_1 < VAR_0->caches_cnt; VAR_1++)
  FUNC_0(&VAR_0->caches[VAR_1]);
 FUNC_3(&VAR_0->caches);

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_memory_nodes; VAR_1++)
  FUNC_3(&VAR_0->memory_nodes[VAR_1].set);
 FUNC_3(&VAR_0->memory_nodes);
}
