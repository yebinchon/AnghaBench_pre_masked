
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse_events_state {scalar_t__ nr_groups; int list; struct evlist* evlist; struct parse_events_error* error; int idx; } ;
struct parse_events_error {int dummy; } ;
struct evsel {int cmdline_group_boundary; } ;
struct TYPE_2__ {int nr_entries; } ;
struct evlist {int nr_groups; TYPE_1__ core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 struct evsel* FUNC_2 (struct evlist*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char const*,struct parse_events_state*,int ) ;
 int FUNC_5 (struct evlist*,int *) ;
 int FUNC_6 () ;

int FUNC_7(struct evlist *VAR_1, const char *VAR_2,
   struct parse_events_error *VAR_3)
{
 struct parse_events_state VAR_4 = {
  .list = FUNC_0(VAR_4.list),
  .idx = VAR_1->core.nr_entries,
  .error = VAR_3,
  .evlist = VAR_1,
 };
 int VAR_5;

 VAR_5 = FUNC_4(VAR_2, &VAR_4, VAR_0);
 FUNC_6();
 if (!VAR_5) {
  struct evsel *VAR_6;

  if (FUNC_3(&VAR_4.list)) {
   FUNC_1(1, "WARNING: event parser found nothing\n");
   return -1;
  }

  FUNC_5(VAR_1, &VAR_4.list);
  VAR_1->nr_groups += VAR_4.nr_groups;
  VAR_6 = FUNC_2(VAR_1);
  VAR_6->cmdline_group_boundary = 1;

  return 0;
 }






 return VAR_5;
}
