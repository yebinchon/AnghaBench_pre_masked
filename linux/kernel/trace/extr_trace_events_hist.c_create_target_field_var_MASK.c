
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_file {struct trace_event_call* event_call; } ;
struct trace_event_call {TYPE_1__* class; } ;
struct hist_trigger_data {struct trace_event_file* event_file; } ;
struct field_var {int dummy; } ;
struct TYPE_2__ {int system; } ;


 struct field_var* create_field_var (struct hist_trigger_data*,struct trace_event_file*,char*) ;
 scalar_t__ strcmp (char*,int ) ;
 int trace_event_name (struct trace_event_call*) ;

__attribute__((used)) static struct field_var *
create_target_field_var(struct hist_trigger_data *target_hist_data,
   char *subsys_name, char *event_name, char *var_name)
{
 struct trace_event_file *file = target_hist_data->event_file;

 if (subsys_name) {
  struct trace_event_call *call;

  if (!event_name)
   return ((void*)0);

  call = file->event_call;

  if (strcmp(subsys_name, call->class->system) != 0)
   return ((void*)0);

  if (strcmp(event_name, trace_event_name(call)) != 0)
   return ((void*)0);
 }

 return create_field_var(target_hist_data, file, var_name);
}
