
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {struct trace_array* tr; } ;
struct trace_array {int dummy; } ;
struct hist_trigger_data {scalar_t__ n_field_vars; } ;
struct hist_field {int type; int size; } ;
struct field_var {struct hist_field* val; struct hist_field* var; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct field_var* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_1 (struct hist_field*) ;
 int FUNC_2 (struct hist_field*) ;
 scalar_t__ VAR_7 ;
 struct hist_field* FUNC_3 (struct hist_trigger_data*,struct trace_event_file*,char*,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct trace_array*,int ,int ) ;
 int FUNC_6 (struct hist_field*) ;
 struct field_var* FUNC_7 (int,int ) ;
 struct hist_field* FUNC_8 (struct hist_trigger_data*,struct trace_event_file*,char*,unsigned long*,int *) ;

__attribute__((used)) static struct field_var *FUNC_9(struct hist_trigger_data *VAR_8,
       struct trace_event_file *VAR_9,
       char *VAR_10)
{
 struct hist_field *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 unsigned long VAR_13 = VAR_6;
 struct trace_array *VAR_14 = VAR_9->tr;
 struct field_var *VAR_15;
 int VAR_16 = 0;

 if (VAR_8->n_field_vars >= VAR_7) {
  FUNC_5(VAR_14, VAR_4, FUNC_4(VAR_10));
  VAR_16 = -VAR_0;
  goto err;
 }

 VAR_11 = FUNC_8(VAR_8, VAR_9, VAR_10, &VAR_13, ((void*)0));
 if (FUNC_1(VAR_11)) {
  FUNC_5(VAR_14, VAR_3, FUNC_4(VAR_10));
  VAR_16 = FUNC_2(VAR_11);
  goto err;
 }

 VAR_12 = FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11->size, VAR_11->type);
 if (FUNC_1(VAR_12)) {
  FUNC_5(VAR_14, VAR_5, FUNC_4(VAR_10));
  FUNC_6(VAR_11);
  VAR_16 = FUNC_2(VAR_12);
  goto err;
 }

 VAR_15 = FUNC_7(sizeof(struct field_var), VAR_2);
 if (!VAR_15) {
  FUNC_6(VAR_11);
  FUNC_6(VAR_12);
  VAR_16 = -VAR_1;
  goto err;
 }

 VAR_15->var = VAR_12;
 VAR_15->val = VAR_11;
 out:
 return VAR_15;
 err:
 VAR_15 = FUNC_0(VAR_16);
 goto out;
}
