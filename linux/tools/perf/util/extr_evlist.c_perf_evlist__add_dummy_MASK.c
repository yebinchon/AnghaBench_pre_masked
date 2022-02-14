
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {int size; int config; int type; } ;
struct evsel {int dummy; } ;
struct TYPE_2__ {int nr_entries; } ;
struct evlist {TYPE_1__ core; } ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evlist*,struct evsel*) ;
 struct evsel* FUNC_1 (struct perf_event_attr*,int ) ;

int FUNC_2(struct evlist *VAR_3)
{
 struct perf_event_attr VAR_4 = {
  .type = VAR_2,
  .config = VAR_1,
  .size = sizeof(VAR_4),
 };
 struct evsel *VAR_5 = FUNC_1(&VAR_4, VAR_3->core.nr_entries);

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_0(VAR_3, VAR_5);
 return 0;
}
