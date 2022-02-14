
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int dummy; } ;
struct hist_trigger_data {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hist_trigger_data*,unsigned int,struct trace_event_file*,int *,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct hist_trigger_data *VAR_2,
       unsigned int VAR_3,
       struct trace_event_file *VAR_4,
       char *VAR_5)
{
 if (FUNC_0(VAR_3 >= VAR_1))
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_3, VAR_4, ((void*)0), VAR_5, 0);
}
