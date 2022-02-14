
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_ftrace {int target; TYPE_2__* evlist; } ;
struct perf_cpu_map {int dummy; } ;
struct TYPE_3__ {struct perf_cpu_map* cpus; } ;
struct TYPE_4__ {TYPE_1__ core; } ;


 int FUNC_0 (struct perf_cpu_map*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct perf_ftrace *VAR_0)
{
 struct perf_cpu_map *VAR_1 = VAR_0->evlist->core.cpus;

 if (!FUNC_1(&VAR_0->target))
  return 0;

 return FUNC_0(VAR_1);
}
