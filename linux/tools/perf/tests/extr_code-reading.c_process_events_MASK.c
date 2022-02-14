
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct state {int dummy; } ;
struct mmap {int dummy; } ;
struct machine {int dummy; } ;
struct TYPE_2__ {int nr_mmaps; } ;
struct evlist {struct mmap* mmap; TYPE_1__ core; } ;


 int FUNC_0 (struct mmap*) ;
 int FUNC_1 (struct mmap*) ;
 union perf_event* FUNC_2 (struct mmap*) ;
 scalar_t__ FUNC_3 (struct mmap*) ;
 int FUNC_4 (struct machine*,struct evlist*,union perf_event*,struct state*) ;

__attribute__((used)) static int FUNC_5(struct machine *VAR_0, struct evlist *VAR_1,
     struct state *VAR_2)
{
 union perf_event *VAR_3;
 struct mmap *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1->core.nr_mmaps; VAR_5++) {
  VAR_4 = &VAR_1->mmap[VAR_5];
  if (FUNC_3(VAR_4) < 0)
   continue;

  while ((VAR_3 = FUNC_2(VAR_4)) != ((void*)0)) {
   VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_3, VAR_2);
   FUNC_0(VAR_4);
   if (VAR_6 < 0)
    return VAR_6;
  }
  FUNC_1(VAR_4);
 }
 return 0;
}
