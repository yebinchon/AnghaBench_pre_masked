
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct mmap {int dummy; } ;
struct TYPE_6__ {int data; int (* cb ) (union perf_event*,int ) ;} ;
struct evsel {TYPE_3__ side_band; } ;
struct TYPE_5__ {int nr_mmaps; } ;
struct TYPE_4__ {scalar_t__ done; } ;
struct evlist {struct mmap* mmap; TYPE_2__ core; TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (struct evlist*,int) ;
 struct evsel* FUNC_1 (struct evlist*,union perf_event*) ;
 int FUNC_2 (struct mmap*) ;
 int FUNC_3 (struct mmap*) ;
 union perf_event* FUNC_4 (struct mmap*) ;
 scalar_t__ FUNC_5 (struct mmap*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (union perf_event*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void *FUNC_9(void *VAR_1)
{
 struct evlist *VAR_2 = VAR_1;
 bool VAR_3 = 0;
 int VAR_4, VAR_5 = 0;







 FUNC_8(VAR_0);

 while (!VAR_5) {
  bool VAR_6 = 0;

  if (VAR_2->thread.done)
   VAR_3 = 1;

  if (!VAR_3)
   FUNC_0(VAR_2, 1000);

  for (VAR_4 = 0; VAR_4 < VAR_2->core.nr_mmaps; VAR_4++) {
   struct mmap *VAR_7 = &VAR_2->mmap[VAR_4];
   union perf_event *VAR_8;

   if (FUNC_5(VAR_7))
    continue;
   while ((VAR_8 = FUNC_4(VAR_7)) != ((void*)0)) {
    struct evsel *VAR_9 = FUNC_1(VAR_2, VAR_8);

    if (VAR_9 && VAR_9->side_band.cb)
     VAR_9->side_band.cb(VAR_8, VAR_9->side_band.data);
    else
     FUNC_6("cannot locate proper evsel for the side band event\n");

    FUNC_2(VAR_7);
    VAR_6 = 1;
   }
   FUNC_3(VAR_7);
  }

  if (VAR_3 && !VAR_6)
   break;
 }
 return ((void*)0);
}
