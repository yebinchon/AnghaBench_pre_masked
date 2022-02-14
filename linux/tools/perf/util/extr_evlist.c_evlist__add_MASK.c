
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evsel {int idx; int tracking; int core; struct evlist* evlist; } ;
struct TYPE_2__ {int nr_entries; } ;
struct evlist {TYPE_1__ core; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct evlist*) ;

void FUNC_2(struct evlist *VAR_0, struct evsel *VAR_1)
{
 VAR_1->evlist = VAR_0;
 VAR_1->idx = VAR_0->core.nr_entries;
 VAR_1->tracking = !VAR_1->idx;

 FUNC_0(&VAR_0->core, &VAR_1->core);

 if (VAR_0->core.nr_entries == 1)
  FUNC_1(VAR_0);
}
