
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_file {int dummy; } ;
struct trace_array {int dummy; } ;
struct hist_trigger_data {TYPE_1__* event_file; } ;
struct hist_field {int dummy; } ;
struct TYPE_2__ {struct trace_array* tr; } ;


 scalar_t__ FUNC_0 (struct hist_field*) ;
 struct hist_field* FUNC_1 (struct trace_event_file*,char*) ;
 struct hist_field* FUNC_2 (struct hist_trigger_data*,char*) ;
 struct trace_event_file* FUNC_3 (struct trace_array*,char*,char*,char*) ;

__attribute__((used)) static struct hist_field *FUNC_4(struct hist_trigger_data *VAR_0,
      char *VAR_1,
      char *VAR_2,
      char *VAR_3)
{
 struct trace_array *VAR_4 = VAR_0->event_file->tr;
 struct hist_field *VAR_5 = ((void*)0);
 struct trace_event_file *VAR_6;

 if (!VAR_1 || !VAR_2) {
  VAR_5 = FUNC_2(VAR_0, VAR_3);
  if (FUNC_0(VAR_5))
   return ((void*)0);
  if (VAR_5)
   return VAR_5;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_1, VAR_2, VAR_3);
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_6, VAR_3);

 return VAR_5;
}
