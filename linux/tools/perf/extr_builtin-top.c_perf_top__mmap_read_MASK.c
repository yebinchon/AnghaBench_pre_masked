
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int overwrite; } ;
struct perf_top {struct evlist* evlist; TYPE_1__ record_opts; } ;
struct TYPE_4__ {int nr_mmaps; } ;
struct evlist {TYPE_2__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evlist*,int ) ;
 int FUNC_1 (struct perf_top*,int) ;

__attribute__((used)) static void FUNC_2(struct perf_top *VAR_3)
{
 bool VAR_4 = VAR_3->record_opts.overwrite;
 struct evlist *VAR_5 = VAR_3->evlist;
 int VAR_6;

 if (VAR_4)
  FUNC_0(VAR_5, VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_3->evlist->core.nr_mmaps; VAR_6++)
  FUNC_1(VAR_3, VAR_6);

 if (VAR_4) {
  FUNC_0(VAR_5, VAR_1);
  FUNC_0(VAR_5, VAR_2);
 }
}
