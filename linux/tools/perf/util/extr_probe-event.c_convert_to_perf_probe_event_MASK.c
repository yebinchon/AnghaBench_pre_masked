
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct probe_trace_event {int nargs; TYPE_2__* args; int point; scalar_t__ group; scalar_t__ event; } ;
struct perf_probe_event {int nargs; TYPE_1__* args; int point; int * group; int * event; } ;
struct perf_probe_arg {int dummy; } ;
struct TYPE_4__ {scalar_t__ name; } ;
struct TYPE_3__ {int * name; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct perf_probe_event*) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (struct strbuf*,int *) ;
 int FUNC_3 (struct strbuf*,int) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,struct strbuf*) ;
 TYPE_1__* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct probe_trace_event *VAR_2,
          struct perf_probe_event *VAR_3, bool VAR_4)
{
 struct strbuf VAR_5 = VAR_1;
 int VAR_6, VAR_7;


 VAR_3->event = FUNC_4(VAR_2->event);
 VAR_3->group = FUNC_4(VAR_2->group);
 if (VAR_3->event == ((void*)0) || VAR_3->group == ((void*)0))
  return -VAR_0;


 VAR_7 = FUNC_1(&VAR_2->point, &VAR_3->point, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_3->nargs = VAR_2->nargs;
 VAR_3->args = FUNC_6(sizeof(struct perf_probe_arg) * VAR_3->nargs);
 if (VAR_3->args == ((void*)0))
  return -VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_2->nargs && VAR_7 >= 0; VAR_6++) {
  if (VAR_2->args[VAR_6].name)
   VAR_3->args[VAR_6].name = FUNC_4(VAR_2->args[VAR_6].name);
  else {
   if ((VAR_7 = FUNC_3(&VAR_5, 32)) < 0)
    goto error;
   VAR_7 = FUNC_5(&VAR_2->args[VAR_6], &VAR_5);
   VAR_3->args[VAR_6].name = FUNC_2(&VAR_5, ((void*)0));
  }
  if (VAR_3->args[VAR_6].name == ((void*)0) && VAR_7 >= 0)
   VAR_7 = -VAR_0;
 }
error:
 if (VAR_7 < 0)
  FUNC_0(VAR_3);

 return VAR_7;
}
