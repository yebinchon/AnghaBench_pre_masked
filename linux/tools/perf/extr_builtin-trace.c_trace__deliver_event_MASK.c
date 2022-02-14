
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct TYPE_2__ {int last; int data; } ;
struct trace {TYPE_1__ oe; int evlist; int sort_events; } ;


 int FUNC_0 (struct trace*,union perf_event*) ;
 int FUNC_1 (int *,union perf_event*,int ,int ) ;
 int FUNC_2 (int ,union perf_event*,int *) ;
 int FUNC_3 (struct trace*) ;

__attribute__((used)) static int FUNC_4(struct trace *VAR_0, union perf_event *VAR_1)
{
 int VAR_2;

 if (!VAR_0->sort_events)
  return FUNC_0(VAR_0, VAR_1);

 VAR_2 = FUNC_2(VAR_0->evlist, VAR_1, &VAR_0->oe.last);
 if (VAR_2 && VAR_2 != -1)
  return VAR_2;

 VAR_2 = FUNC_1(&VAR_0->oe.data, VAR_1, VAR_0->oe.last, 0);
 if (VAR_2)
  return VAR_2;

 return FUNC_3(VAR_0);
}
