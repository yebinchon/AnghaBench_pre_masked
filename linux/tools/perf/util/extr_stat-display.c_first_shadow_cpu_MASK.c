
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_stat_config {int (* aggr_get_id ) (struct perf_stat_config*,int ,int) ;scalar_t__ aggr_mode; } ;
struct evsel {struct evlist* evlist; } ;
struct TYPE_3__ {int cpus; } ;
struct evlist {TYPE_1__ core; } ;
struct TYPE_4__ {int* map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct evsel*) ;
 int FUNC_1 (struct evsel*) ;
 int FUNC_2 (struct perf_stat_config*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct perf_stat_config *VAR_2,
       struct evsel *VAR_3, int VAR_4)
{
 struct evlist *VAR_5 = VAR_3->evlist;
 int VAR_6;

 if (!VAR_2->aggr_get_id)
  return 0;

 if (VAR_2->aggr_mode == VAR_1)
  return VAR_4;

 if (VAR_2->aggr_mode == VAR_0)
  return 0;

 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_3); VAR_6++) {
  int VAR_7 = FUNC_0(VAR_3)->map[VAR_6];

  if (VAR_2->aggr_get_id(VAR_2, VAR_5->core.cpus, VAR_7) == VAR_4)
   return VAR_7;
 }
 return 0;
}
