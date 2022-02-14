
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct TYPE_2__ {int start; int prev; int overwrite; int end; int refcnt; } ;
struct mmap {TYPE_1__ core; } ;


 union perf_event* FUNC_0 (struct mmap*,int *,int ) ;
 int FUNC_1 (struct mmap*) ;
 int FUNC_2 (int *) ;

union perf_event *FUNC_3(struct mmap *VAR_0)
{
 union perf_event *VAR_1;




 if (!FUNC_2(&VAR_0->core.refcnt))
  return ((void*)0);


 if (!VAR_0->core.overwrite)
  VAR_0->core.end = FUNC_1(VAR_0);

 VAR_1 = FUNC_0(VAR_0, &VAR_0->core.start, VAR_0->core.end);

 if (!VAR_0->core.overwrite)
  VAR_0->core.prev = VAR_0->core.start;

 return VAR_1;
}
