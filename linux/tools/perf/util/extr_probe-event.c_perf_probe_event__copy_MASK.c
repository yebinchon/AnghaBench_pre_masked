
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_event {int nargs; int * args; int point; int uprobes; void* target; void* group; void* event; } ;
struct perf_probe_arg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_probe_event*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 void* FUNC_3 (void*,int ) ;
 int * FUNC_4 (int) ;

int FUNC_5(struct perf_probe_event *VAR_2,
      struct perf_probe_event *VAR_3)
{
 int VAR_4;

 VAR_2->event = FUNC_3(VAR_3->event, VAR_1);
 VAR_2->group = FUNC_3(VAR_3->group, VAR_1);
 VAR_2->target = FUNC_3(VAR_3->target, VAR_1);
 VAR_2->uprobes = VAR_3->uprobes;

 if (FUNC_2(&VAR_2->point, &VAR_3->point) < 0)
  goto out_err;

 VAR_2->args = FUNC_4(sizeof(struct perf_probe_arg) * VAR_3->nargs);
 if (!VAR_2->args)
  goto out_err;
 VAR_2->nargs = VAR_3->nargs;

 for (VAR_4 = 0; VAR_4 < VAR_3->nargs; VAR_4++)
  if (FUNC_1(&VAR_2->args[VAR_4], &VAR_3->args[VAR_4]) < 0)
   goto out_err;
 return 0;

out_err:
 FUNC_0(VAR_2);
 return -VAR_0;
}
