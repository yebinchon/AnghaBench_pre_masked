
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_file {int dummy; } ;
struct trace_array {int dummy; } ;
struct hist_trigger_data {unsigned int n_vars; int remove; TYPE_1__* event_file; } ;
struct TYPE_2__ {struct trace_array* tr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hist_trigger_data*,unsigned int,struct trace_event_file*,char*,char*,unsigned long) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct hist_trigger_data*,struct trace_event_file*,char*) ;
 int FUNC_4 (struct trace_array*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hist_trigger_data *VAR_5,
       unsigned int VAR_6,
       struct trace_event_file *VAR_7,
       char *VAR_8, char *VAR_9)
{
 struct trace_array *VAR_10 = VAR_5->event_file->tr;
 unsigned long VAR_11 = 0;

 if (FUNC_0(VAR_6 >= VAR_3 + VAR_4))
  return -VAR_0;

 if (FUNC_3(VAR_5, VAR_7, VAR_8) && !VAR_5->remove) {
  FUNC_4(VAR_10, VAR_1, FUNC_2(VAR_8));
  return -VAR_0;
 }

 VAR_11 |= VAR_2;
 VAR_5->n_vars++;
 if (FUNC_0(VAR_5->n_vars > VAR_4))
  return -VAR_0;

 return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_11);
}
