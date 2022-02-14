
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {int hist_vars; } ;
struct hist_var_data {int list; struct hist_trigger_data* hist_data; } ;
struct hist_trigger_data {TYPE_1__* event_file; } ;
struct TYPE_2__ {struct trace_array* tr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hist_var_data* FUNC_0 (struct hist_trigger_data*) ;
 struct hist_var_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct trace_array*) ;
 scalar_t__ FUNC_4 (struct trace_array*) ;

__attribute__((used)) static int FUNC_5(struct hist_trigger_data *VAR_3)
{
 struct trace_array *VAR_4 = VAR_3->event_file->tr;
 struct hist_var_data *VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5)
  return 0;

 if (FUNC_4(VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_2);
 if (!VAR_5) {
  FUNC_3(VAR_4);
  return -VAR_1;
 }

 VAR_5->hist_data = VAR_3;
 FUNC_2(&VAR_5->list, &VAR_4->hist_vars);

 return 0;
}
