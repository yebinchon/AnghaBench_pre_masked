
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_stat_config {int metric_only; TYPE_1__* aggr_map; scalar_t__ aggr_get_id; int * output; } ;
struct evsel {int dummy; } ;
struct TYPE_2__ {int nr; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (struct perf_stat_config*,struct evsel*,int,char*,int,int*) ;

__attribute__((used)) static void FUNC_3(struct perf_stat_config *VAR_0,
     struct evsel *VAR_1, char *VAR_2)
{
 bool VAR_3 = VAR_0->metric_only;
 FILE *VAR_4 = VAR_0->output;
 int VAR_5;
 bool VAR_6 = 1;

 if (!(VAR_0->aggr_map || VAR_0->aggr_get_id))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_0->aggr_map->nr; VAR_5++) {
  if (VAR_2 && VAR_3)
   FUNC_0(VAR_4, "%s", VAR_2);

  FUNC_2(VAR_0, VAR_1, VAR_5,
           VAR_2, VAR_3,
           &VAR_6);
 }

 if (VAR_3)
  FUNC_1('\n', VAR_4);
}
