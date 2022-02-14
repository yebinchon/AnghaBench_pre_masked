
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int dummy; } ;
struct hist_trigger_data {int dummy; } ;
struct hist_field {int dummy; } ;
struct ftrace_event_field {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hist_field* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ftrace_event_field*) ;
 int FUNC_2 (struct ftrace_event_field*) ;
 struct hist_field* FUNC_3 (struct hist_trigger_data*,struct hist_field*,char*) ;
 struct hist_field* FUNC_4 (struct hist_trigger_data*,struct ftrace_event_field*,unsigned long,char*) ;
 char* FUNC_5 (struct hist_trigger_data*,char*,char*,char*) ;
 struct ftrace_event_field* FUNC_6 (struct hist_trigger_data*,struct trace_event_file*,char*,unsigned long*) ;
 struct hist_field* FUNC_7 (struct hist_trigger_data*,char*,char*,char*) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char**,char*) ;

__attribute__((used)) static struct hist_field *FUNC_10(struct hist_trigger_data *VAR_2,
         struct trace_event_file *VAR_3, char *VAR_4,
         unsigned long *VAR_5, char *VAR_6)
{
 char *VAR_7, *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = VAR_4;
 struct ftrace_event_field *VAR_11 = ((void*)0);
 struct hist_field *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 VAR_7 = FUNC_8(VAR_4, '.');
 if (VAR_7) {
  VAR_7 = FUNC_8(++VAR_7, '.');
  if (VAR_7) {
   VAR_8 = FUNC_9(&VAR_4, ".");
   if (!VAR_4) {
    VAR_13 = -VAR_0;
    goto out;
   }
   VAR_9 = FUNC_9(&VAR_4, ".");
   if (!VAR_4) {
    VAR_13 = -VAR_0;
    goto out;
   }
   VAR_10 = VAR_4;
  }
 }

 VAR_7 = FUNC_5(VAR_2, VAR_8, VAR_9, VAR_10);
 if (!VAR_7) {
  VAR_12 = FUNC_7(VAR_2, VAR_8,
        VAR_9, VAR_10);
  if (VAR_12) {
   if (VAR_6) {
    VAR_12 = FUNC_3(VAR_2, VAR_12, VAR_6);
    if (!VAR_12) {
     VAR_13 = -VAR_1;
     goto out;
    }
   }
   return VAR_12;
  }
 } else
  VAR_4 = VAR_7;

 VAR_11 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);
 if (FUNC_1(VAR_11)) {
  VAR_13 = FUNC_2(VAR_11);
  goto out;
 }

 VAR_12 = FUNC_4(VAR_2, VAR_11, *VAR_5, VAR_6);
 if (!VAR_12) {
  VAR_13 = -VAR_1;
  goto out;
 }

 return VAR_12;
 out:
 return FUNC_0(VAR_13);
}
