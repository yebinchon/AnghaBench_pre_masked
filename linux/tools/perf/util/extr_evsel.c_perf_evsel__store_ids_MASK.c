
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_thread_map {int nr; } ;
struct perf_cpu_map {int nr; } ;
struct TYPE_2__ {struct perf_thread_map* threads; struct perf_cpu_map* cpus; } ;
struct evsel {TYPE_1__ core; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (struct evsel*,struct evlist*) ;

int FUNC_2(struct evsel *VAR_1, struct evlist *VAR_2)
{
 struct perf_cpu_map *VAR_3 = VAR_1->core.cpus;
 struct perf_thread_map *VAR_4 = VAR_1->core.threads;

 if (FUNC_0(&VAR_1->core, VAR_3->nr, VAR_4->nr))
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2);
}
