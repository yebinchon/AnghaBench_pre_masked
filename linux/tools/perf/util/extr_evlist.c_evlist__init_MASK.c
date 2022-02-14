
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_thread_map {int dummy; } ;
struct perf_cpu_map {int dummy; } ;
struct TYPE_4__ {int pid; } ;
struct TYPE_5__ {int pollfd; } ;
struct evlist {int bkw_mmap_state; TYPE_1__ workload; TYPE_2__ core; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,struct perf_cpu_map*,struct perf_thread_map*) ;

void FUNC_3(struct evlist *VAR_1, struct perf_cpu_map *VAR_2,
    struct perf_thread_map *VAR_3)
{
 FUNC_1(&VAR_1->core);
 FUNC_2(&VAR_1->core, VAR_2, VAR_3);
 FUNC_0(&VAR_1->core.pollfd, 64);
 VAR_1->workload.pid = -1;
 VAR_1->bkw_mmap_state = VAR_0;
}
