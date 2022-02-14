
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct trace_event_file {struct trace_array* tr; } ;
struct trace_array {int dummy; } ;
struct hist_trigger_data {struct trace_event_file* event_file; } ;
struct hist_field {int dummy; } ;
struct TYPE_2__ {char* var_str; struct hist_field* track_var; struct hist_field* var_ref; } ;
struct action_data {scalar_t__ handler; TYPE_1__ track_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct hist_field*) ;
 int FUNC_1 (struct hist_field*) ;
 int FUNC_2 (struct hist_trigger_data*,struct action_data*) ;
 struct hist_field* FUNC_3 (struct hist_trigger_data*,struct trace_event_file*,char*,int,char*) ;
 struct hist_field* FUNC_4 (struct hist_trigger_data*,struct hist_field*,int *,int *) ;
 int FUNC_5 (char*) ;
 struct hist_field* FUNC_6 (struct hist_trigger_data*,int *,int *,char*) ;
 int FUNC_7 (struct trace_array*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct hist_trigger_data *VAR_7,
        struct action_data *VAR_8)
{
 struct hist_field *VAR_9, *VAR_10, *VAR_11 = ((void*)0);
 struct trace_event_file *VAR_12 = VAR_7->event_file;
 struct trace_array *VAR_13 = VAR_12->tr;
 char *VAR_14;
 int VAR_15 = 0;

 VAR_14 = VAR_8->track_data.var_str;
 if (VAR_14[0] != '$') {
  FUNC_7(VAR_13, VAR_4, FUNC_5(VAR_14));
  return -VAR_0;
 }
 VAR_14++;

 VAR_9 = FUNC_6(VAR_7, ((void*)0), ((void*)0), VAR_14);
 if (!VAR_9) {
  FUNC_7(VAR_13, VAR_6, FUNC_5(VAR_14));
  return -VAR_0;
 }

 VAR_10 = FUNC_4(VAR_7, VAR_9, ((void*)0), ((void*)0));
 if (!VAR_10)
  return -VAR_1;

 VAR_8->track_data.var_ref = VAR_10;

 if (VAR_8->handler == VAR_3)
  VAR_11 = FUNC_3(VAR_7, VAR_12, "__max", sizeof(u64), "u64");
 if (FUNC_0(VAR_11)) {
  FUNC_7(VAR_13, VAR_5, 0);
  VAR_15 = FUNC_1(VAR_11);
  goto out;
 }

 if (VAR_8->handler == VAR_2)
  VAR_11 = FUNC_3(VAR_7, VAR_12, "__change", sizeof(u64), "u64");
 if (FUNC_0(VAR_11)) {
  FUNC_7(VAR_13, VAR_5, 0);
  VAR_15 = FUNC_1(VAR_11);
  goto out;
 }
 VAR_8->track_data.track_var = VAR_11;

 VAR_15 = FUNC_2(VAR_7, VAR_8);
 out:
 return VAR_15;
}
