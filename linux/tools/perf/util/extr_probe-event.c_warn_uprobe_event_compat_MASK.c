
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct probe_trace_point {scalar_t__ ref_ctr_offset; } ;
struct probe_trace_event {int nargs; TYPE_1__* args; int uprobes; int event; int group; struct probe_trace_point point; } ;
struct TYPE_2__ {int value; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,...) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 char* FUNC_3 (struct probe_trace_event*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct probe_trace_event *VAR_0)
{
 int VAR_1;
 char *VAR_2 = FUNC_3(VAR_0);
 struct probe_trace_point *VAR_3 = &VAR_0->point;

 if (VAR_3->ref_ctr_offset && !FUNC_4()) {
  FUNC_1("A semaphore is associated with %s:%s and "
      "seems your kernel doesn't support it.\n",
      VAR_0->group, VAR_0->event);
 }


 if (!VAR_0->uprobes || VAR_0->nargs == 0 || !VAR_2)
  goto out;

 for (VAR_1 = 0; VAR_1 < VAR_0->nargs; VAR_1++)
  if (FUNC_2(VAR_0->args[VAR_1].value, "[$@+-]*")) {
   FUNC_1("Please upgrade your kernel to at least "
       "3.14 to have access to feature %s\n",
       VAR_0->args[VAR_1].value);
   break;
  }
out:
 FUNC_0(VAR_2);
}
