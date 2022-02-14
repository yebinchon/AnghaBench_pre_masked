
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct track_data {TYPE_1__* val; } ;
struct trace_event_file {struct trace_array* tr; } ;
struct trace_array {int dummy; } ;
struct hist_trigger_data {int n_save_var_str; scalar_t__ n_save_vars; struct track_data** save_vars; int key_size; struct trace_event_file* event_file; } ;
struct field_var {TYPE_1__* val; } ;
struct action_data {scalar_t__ action; unsigned int n_params; int * params; } ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct track_data*) ;
 int FUNC_1 (struct track_data*) ;
 int VAR_9 ;
 struct track_data* FUNC_2 (struct hist_trigger_data*,int *,int *,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct trace_array*,int ,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct hist_trigger_data*,struct action_data*) ;
 int FUNC_8 (struct trace_array*,struct track_data*,int ) ;
 struct track_data* FUNC_9 (int ,struct action_data*,struct hist_trigger_data*) ;
 int FUNC_10 (struct track_data*) ;

__attribute__((used)) static int FUNC_11(struct hist_trigger_data *VAR_10,
    struct action_data *VAR_11)
{
 struct trace_event_file *VAR_12 = VAR_10->event_file;
 struct trace_array *VAR_13 = VAR_12->tr;
 struct track_data *VAR_14;
 struct field_var *VAR_15;
 unsigned int VAR_16;
 char *VAR_17;
 int VAR_18 = 0;

 if (VAR_11->action == VAR_2)
  return FUNC_7(VAR_10, VAR_11);

 if (VAR_11->action == VAR_1) {
  VAR_14 = FUNC_9(VAR_10->key_size, VAR_11, VAR_10);
  if (FUNC_0(VAR_14)) {
   VAR_18 = FUNC_1(VAR_14);
   goto out;
  }

  VAR_18 = FUNC_8(VAR_12->tr, VAR_14,
         VAR_9);
  if (VAR_18)
   FUNC_10(VAR_14);

  goto out;
 }

 if (VAR_11->action == VAR_0) {
  if (VAR_10->n_save_vars) {
   VAR_18 = -VAR_3;
   FUNC_4(VAR_13, VAR_7, 0);
   goto out;
  }

  for (VAR_16 = 0; VAR_16 < VAR_11->n_params; VAR_16++) {
   VAR_17 = FUNC_6(VAR_11->params[VAR_16], VAR_5);
   if (!VAR_17) {
    VAR_18 = -VAR_4;
    goto out;
   }

   VAR_15 = FUNC_2(VAR_10, ((void*)0), ((void*)0), VAR_17);
   if (FUNC_0(VAR_15)) {
    FUNC_4(VAR_13, VAR_6,
      FUNC_3(VAR_17));
    VAR_18 = FUNC_1(VAR_15);
    FUNC_5(VAR_17);
    goto out;
   }

   VAR_10->save_vars[VAR_10->n_save_vars++] = VAR_15;
   if (VAR_15->val->flags & VAR_8)
    VAR_10->n_save_var_str++;
   FUNC_5(VAR_17);
  }
 }
 out:
 return VAR_18;
}
