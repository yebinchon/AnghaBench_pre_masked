
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_event_file {TYPE_2__* event_call; } ;
struct trace_array {int dummy; } ;
struct TYPE_4__ {int flags; TYPE_1__* class; } ;
struct TYPE_3__ {int reg; } ;


 int VAR_0 ;
 struct trace_event_file* FUNC_0 (struct trace_array*,char const*,char const*) ;

struct trace_event_file *
FUNC_1(struct trace_array *VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct trace_event_file *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_4 || !VAR_4->event_call->class->reg ||
     VAR_4->event_call->flags & VAR_0)
  return ((void*)0);

 return VAR_4;
}
