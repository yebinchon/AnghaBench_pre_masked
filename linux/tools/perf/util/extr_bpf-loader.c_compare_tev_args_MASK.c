
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_event {int nargs; struct probe_trace_arg* args; } ;
struct probe_trace_arg_ref {int offset; struct probe_trace_arg_ref* next; } ;
struct probe_trace_arg {struct probe_trace_arg_ref* ref; int value; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 int VAR_2, VAR_3;
 const struct probe_trace_event *VAR_4 =
  *(const struct probe_trace_event **)VAR_0;
 const struct probe_trace_event *VAR_5 =
  *(const struct probe_trace_event **)VAR_1;

 VAR_3 = VAR_5->nargs - VAR_4->nargs;
 if (VAR_3)
  return VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_4->nargs; VAR_2++) {
  struct probe_trace_arg *VAR_6, *VAR_7;
  struct probe_trace_arg_ref *VAR_8, *VAR_9;

  VAR_6 = &VAR_4->args[VAR_2];
  VAR_7 = &VAR_5->args[VAR_2];

  VAR_3 = FUNC_0(VAR_6->value, VAR_7->value);
  if (VAR_3)
   return VAR_3;

  VAR_8 = VAR_6->ref;
  VAR_9 = VAR_7->ref;

  while (VAR_8 && VAR_9) {
   VAR_3 = VAR_9->offset - VAR_8->offset;
   if (VAR_3)
    return VAR_3;

   VAR_8 = VAR_8->next;
   VAR_9 = VAR_9->next;
  }

  if (VAR_8 || VAR_9)
   return VAR_9 ? 1 : -1;
 }

 return 0;
}
