
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int dummy; } ;
struct hist_trigger_data {int dummy; } ;


 int FUNC_0 (struct hist_trigger_data*,struct trace_event_file*) ;
 int FUNC_1 (struct hist_trigger_data*,struct trace_event_file*) ;
 int FUNC_2 (struct hist_trigger_data*,struct trace_event_file*) ;
 int FUNC_3 (struct hist_trigger_data*) ;
 int FUNC_4 (struct hist_trigger_data*) ;

__attribute__((used)) static int FUNC_5(struct hist_trigger_data *VAR_0,
         struct trace_event_file *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  goto out;
 out:
 FUNC_3(VAR_0);

 return VAR_2;
}
