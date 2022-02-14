
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct perf_stat {int maps_allocated; int threads; int cpus; } ;
struct TYPE_3__ {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct perf_stat *VAR_3)
{
 if (!VAR_3->cpus || !VAR_3->threads)
  return 0;

 if (FUNC_0(VAR_3->maps_allocated, "stats double allocation\n"))
  return -VAR_0;

 FUNC_2(&VAR_2->core, VAR_3->cpus, VAR_3->threads);

 if (FUNC_1(VAR_2, 1))
  return -VAR_1;

 VAR_3->maps_allocated = 1;
 return 0;
}
