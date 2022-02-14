
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {int dummy; } ;
struct synth_event {unsigned int n_fields; char* name; int ref; } ;
struct hist_trigger_data {unsigned int n_var_refs; TYPE_1__* event_file; } ;
struct hist_field {int dummy; } ;
struct action_data {char* synth_event_name; char* action_name; unsigned int n_params; unsigned int var_ref_idx; struct synth_event* synth_event; int * params; scalar_t__ use_trace_keyword; } ;
struct TYPE_2__ {struct trace_array* tr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct synth_event*,struct hist_field*,unsigned int) ;
 struct hist_field* FUNC_1 (struct hist_trigger_data*,struct hist_field*,char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 struct synth_event* FUNC_3 (char*) ;
 int FUNC_4 (struct trace_array*,int ,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (char**,char*) ;
 struct hist_field* FUNC_9 (struct hist_trigger_data*,struct action_data*,char*,char*,char*) ;
 struct hist_field* FUNC_10 (struct hist_trigger_data*,struct action_data*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_11(struct hist_trigger_data *VAR_7,
          struct action_data *VAR_8)
{
 struct trace_array *VAR_9 = VAR_7->event_file->tr;
 char *VAR_10, *VAR_11, *VAR_12 = ((void*)0);
 struct hist_field *VAR_13, *VAR_14;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17 = 0;
 struct synth_event *VAR_18;
 char *VAR_19;
 int VAR_20 = 0;

 FUNC_7(&VAR_6);

 if (VAR_8->use_trace_keyword)
  VAR_19 = VAR_8->synth_event_name;
 else
  VAR_19 = VAR_8->action_name;

 VAR_18 = FUNC_3(VAR_19);
 if (!VAR_18) {
  FUNC_4(VAR_9, VAR_4, FUNC_2(VAR_19));
  return -VAR_0;
 }

 VAR_18->ref++;

 VAR_16 = VAR_7->n_var_refs;

 for (VAR_15 = 0; VAR_15 < VAR_8->n_params; VAR_15++) {
  char *VAR_21;

  VAR_21 = VAR_11 = FUNC_6(VAR_8->params[VAR_15], VAR_2);
  if (!VAR_11) {
   VAR_20 = -VAR_1;
   goto err;
  }

  VAR_12 = FUNC_8(&VAR_11, ".");
  if (!VAR_11) {
   VAR_11 = (char *)VAR_12;
   VAR_12 = VAR_10 = ((void*)0);
  } else {
   VAR_10 = FUNC_8(&VAR_11, ".");
   if (!VAR_11) {
    FUNC_5(VAR_21);
    VAR_20 = -VAR_0;
    goto err;
   }
  }

  if (VAR_11[0] == '$')
   VAR_13 = FUNC_10(VAR_7, VAR_8,
          VAR_12, VAR_10,
          VAR_11);
  else
   VAR_13 = FUNC_9(VAR_7,
           VAR_8,
           VAR_12,
           VAR_10,
           VAR_11);

  if (!VAR_13) {
   FUNC_5(VAR_21);
   VAR_20 = -VAR_0;
   goto err;
  }

  if (FUNC_0(VAR_18, VAR_13, VAR_17) == 0) {
   VAR_14 = FUNC_1(VAR_7, VAR_13,
       VAR_12, VAR_10);
   if (!VAR_14) {
    FUNC_5(VAR_21);
    VAR_20 = -VAR_1;
    goto err;
   }

   VAR_17++;
   FUNC_5(VAR_21);
   continue;
  }

  FUNC_4(VAR_9, VAR_5, FUNC_2(VAR_11));
  FUNC_5(VAR_21);
  VAR_20 = -VAR_0;
  goto err;
 }

 if (VAR_17 != VAR_18->n_fields) {
  FUNC_4(VAR_9, VAR_3, FUNC_2(VAR_18->name));
  VAR_20 = -VAR_0;
  goto err;
 }

 VAR_8->synth_event = VAR_18;
 VAR_8->var_ref_idx = VAR_16;
 out:
 return VAR_20;
 err:
 VAR_18->ref--;

 goto out;
}
