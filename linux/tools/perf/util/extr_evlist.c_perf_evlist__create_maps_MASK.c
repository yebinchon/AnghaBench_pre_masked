
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target {int cpu_list; int uid; int tid; int pid; scalar_t__ system_wide; scalar_t__ per_thread; } ;
struct perf_thread_map {int dummy; } ;
struct perf_cpu_map {int dummy; } ;
struct TYPE_2__ {int has_user_cpus; } ;
struct evlist {TYPE_1__ core; } ;


 struct perf_cpu_map* FUNC_0 () ;
 struct perf_cpu_map* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct perf_cpu_map*,struct perf_thread_map*) ;
 int FUNC_3 (struct perf_thread_map*) ;
 scalar_t__ FUNC_4 (struct target*) ;
 struct perf_thread_map* FUNC_5 (int ,int ,int ,int) ;

int FUNC_6(struct evlist *VAR_0, struct target *VAR_1)
{
 bool VAR_2 = (VAR_1->per_thread && VAR_1->system_wide);
 struct perf_cpu_map *VAR_3;
 struct perf_thread_map *VAR_4;
 VAR_4 = FUNC_5(VAR_1->pid, VAR_1->tid, VAR_1->uid,
          VAR_2);

 if (!VAR_4)
  return -1;

 if (FUNC_4(VAR_1))
  VAR_3 = FUNC_0();
 else
  VAR_3 = FUNC_1(VAR_1->cpu_list);

 if (!VAR_3)
  goto out_delete_threads;

 VAR_0->core.has_user_cpus = !!VAR_1->cpu_list;

 FUNC_2(&VAR_0->core, VAR_3, VAR_4);

 return 0;

out_delete_threads:
 FUNC_3(VAR_4);
 return -1;
}
