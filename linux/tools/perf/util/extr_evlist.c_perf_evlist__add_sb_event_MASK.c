
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event_attr {int sample_id_all; } ;
struct TYPE_4__ {void* data; int cb; } ;
struct evsel {TYPE_2__ side_band; } ;
struct TYPE_3__ {int nr_entries; } ;
struct evlist {TYPE_1__ core; } ;
typedef int perf_evsel__sb_cb_t ;


 int FUNC_0 (struct evlist*,struct evsel*) ;
 int FUNC_1 (struct evlist*) ;
 struct evlist* FUNC_2 () ;
 struct evsel* FUNC_3 (struct perf_event_attr*,int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct evlist **VAR_0,
         struct perf_event_attr *VAR_1,
         perf_evsel__sb_cb_t VAR_2,
         void *VAR_3)
{
 struct evsel *VAR_4;
 bool VAR_5 = (*VAR_0) == ((void*)0);

 if (*VAR_0 == ((void*)0))
  *VAR_0 = FUNC_2();
 if (*VAR_0 == ((void*)0))
  return -1;

 if (!VAR_1->sample_id_all) {
  FUNC_4("enabling sample_id_all for all side band events\n");
  VAR_1->sample_id_all = 1;
 }

 VAR_4 = FUNC_3(VAR_1, (*VAR_0)->core.nr_entries);
 if (!VAR_4)
  goto out_err;

 VAR_4->side_band.cb = VAR_2;
 VAR_4->side_band.data = VAR_3;
 FUNC_0(*VAR_0, VAR_4);
 return 0;

out_err:
 if (VAR_5) {
  FUNC_1(*VAR_0);
  *VAR_0 = ((void*)0);
 }
 return -1;
}
