
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct record_opts {scalar_t__ overwrite; } ;
struct TYPE_2__ {int rotate; int mutex; int cond; int in; } ;
struct perf_top {TYPE_1__ qe; struct evlist* evlist; struct record_opts record_opts; } ;
struct mmap {int dummy; } ;
struct evlist {struct mmap* mmap; struct mmap* overwrite_mmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,union perf_event*,int ,int ) ;
 int FUNC_1 (struct evlist*,union perf_event*,int *) ;
 int FUNC_2 (struct mmap*) ;
 int FUNC_3 (struct mmap*) ;
 union perf_event* FUNC_4 (struct mmap*) ;
 scalar_t__ FUNC_5 (struct mmap*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct perf_top *VAR_1, int VAR_2)
{
 struct record_opts *VAR_3 = &VAR_1->record_opts;
 struct evlist *VAR_4 = VAR_1->evlist;
 struct mmap *VAR_5;
 union perf_event *VAR_6;

 VAR_5 = VAR_3->overwrite ? &VAR_4->overwrite_mmap[VAR_2] : &VAR_4->mmap[VAR_2];
 if (FUNC_5(VAR_5) < 0)
  return;

 while ((VAR_6 = FUNC_4(VAR_5)) != ((void*)0)) {
  int VAR_7;

  VAR_7 = FUNC_1(VAR_4, VAR_6, &VAR_0);
  if (VAR_7 && VAR_7 != -1)
   break;

  VAR_7 = FUNC_0(VAR_1->qe.in, VAR_6, VAR_0, 0);
  if (VAR_7)
   break;

  FUNC_2(VAR_5);

  if (VAR_1->qe.rotate) {
   FUNC_7(&VAR_1->qe.mutex);
   VAR_1->qe.rotate = 0;
   FUNC_6(&VAR_1->qe.cond);
   FUNC_8(&VAR_1->qe.mutex);
  }
 }

 FUNC_3(VAR_5);
}
