
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rotate; int mutex; int cond; struct ordered_events* in; } ;
struct perf_top {TYPE_1__ qe; } ;
struct ordered_events {int nr_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ordered_events*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ordered_events* FUNC_5 (struct perf_top*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void *FUNC_7(void *VAR_2)
{
 struct perf_top *VAR_3 = VAR_2;

 while (!VAR_1) {
  struct ordered_events *VAR_4, *VAR_5 = VAR_3->qe.in;

  if (!VAR_5->nr_events) {
   FUNC_6(100);
   continue;
  }

  VAR_4 = FUNC_5(VAR_3);

  FUNC_3(&VAR_3->qe.mutex);
  VAR_3->qe.rotate = 1;
  FUNC_2(&VAR_3->qe.cond, &VAR_3->qe.mutex);
  FUNC_4(&VAR_3->qe.mutex);

  if (FUNC_0(VAR_4, VAR_0))
   FUNC_1("failed to process events\n");
 }

 return ((void*)0);
}
