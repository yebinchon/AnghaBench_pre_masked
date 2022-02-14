
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_sample_id {int idx; int cpu; int tid; } ;
struct TYPE_5__ {int system_wide; } ;
struct evsel {TYPE_2__ core; } ;
struct TYPE_6__ {scalar_t__ threads; TYPE_1__* cpus; } ;
struct evlist {TYPE_3__ core; } ;
struct TYPE_4__ {int* map; } ;


 struct perf_sample_id* FUNC_0 (struct evsel*,int,int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct evlist *VAR_0,
         struct evsel *VAR_1, int VAR_2, int VAR_3,
         int VAR_4)
{
 struct perf_sample_id *VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_4);
 VAR_5->idx = VAR_2;
 if (VAR_0->core.cpus && VAR_3 >= 0)
  VAR_5->cpu = VAR_0->core.cpus->map[VAR_3];
 else
  VAR_5->cpu = -1;
 if (!VAR_1->core.system_wide && VAR_0->core.threads && VAR_4 >= 0)
  VAR_5->tid = FUNC_1(VAR_0->core.threads, VAR_4);
 else
  VAR_5->tid = -1;
}
