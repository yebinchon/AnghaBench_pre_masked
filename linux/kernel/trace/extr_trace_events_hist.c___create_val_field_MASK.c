
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int dummy; } ;
struct hist_trigger_data {scalar_t__ n_vals; int n_fields; struct hist_field** fields; } ;
struct hist_field {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hist_field*) ;
 int FUNC_1 (struct hist_field*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 struct hist_field* FUNC_3 (struct hist_trigger_data*,struct trace_event_file*,char*,unsigned long,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct hist_trigger_data *VAR_3,
         unsigned int VAR_4,
         struct trace_event_file *VAR_5,
         char *VAR_6, char *VAR_7,
         unsigned long VAR_8)
{
 struct hist_field *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_3(VAR_3, VAR_5, VAR_7, VAR_8, VAR_6, 0);
 if (FUNC_0(VAR_9)) {
  VAR_10 = FUNC_1(VAR_9);
  goto out;
 }

 VAR_3->fields[VAR_4] = VAR_9;

 ++VAR_3->n_vals;
 ++VAR_3->n_fields;

 if (FUNC_2(VAR_3->n_vals > VAR_1 + VAR_2))
  VAR_10 = -VAR_0;
 out:
 return VAR_10;
}
