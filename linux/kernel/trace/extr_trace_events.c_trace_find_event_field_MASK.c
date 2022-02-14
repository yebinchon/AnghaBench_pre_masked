
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_call {int dummy; } ;
struct list_head {int dummy; } ;
struct ftrace_event_field {int dummy; } ;


 struct ftrace_event_field* FUNC_0 (struct list_head*,char*) ;
 struct list_head VAR_0 ;
 struct list_head VAR_1 ;
 struct list_head* FUNC_1 (struct trace_event_call*) ;

struct ftrace_event_field *
FUNC_2(struct trace_event_call *VAR_2, char *VAR_3)
{
 struct ftrace_event_field *VAR_4;
 struct list_head *VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 VAR_4 = FUNC_0(VAR_5, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(&VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(&VAR_0, VAR_3);
}
