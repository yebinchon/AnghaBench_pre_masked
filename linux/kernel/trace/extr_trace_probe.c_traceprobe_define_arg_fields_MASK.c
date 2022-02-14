
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_probe {int nr_args; struct probe_arg* args; } ;
struct trace_event_call {int dummy; } ;
struct probe_arg {char* fmt; int count; TYPE_1__* type; scalar_t__ offset; int name; } ;
struct TYPE_2__ {char* fmttype; int size; int is_signed; } ;


 int VAR_0 ;
 int FUNC_0 (struct trace_event_call*,char const*,int ,scalar_t__,int,int ,int ) ;

int FUNC_1(struct trace_event_call *VAR_1,
     size_t VAR_2, struct trace_probe *VAR_3)
{
 int VAR_4, VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_3->nr_args; VAR_5++) {
  struct probe_arg *VAR_6 = &VAR_3->args[VAR_5];
  const char *VAR_7 = VAR_6->type->fmttype;
  int VAR_8 = VAR_6->type->size;

  if (VAR_6->fmt)
   VAR_7 = VAR_6->fmt;
  if (VAR_6->count)
   VAR_8 *= VAR_6->count;
  VAR_4 = FUNC_0(VAR_1, VAR_7, VAR_6->name,
      VAR_2 + VAR_6->offset, VAR_8,
      VAR_6->type->is_signed,
      VAR_0);
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
