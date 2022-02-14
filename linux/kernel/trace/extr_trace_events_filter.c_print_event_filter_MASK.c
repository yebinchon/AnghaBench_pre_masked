
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_event_file {int dummy; } ;
struct event_filter {scalar_t__ filter_string; } ;


 struct event_filter* FUNC_0 (struct trace_event_file*) ;
 int FUNC_1 (struct trace_seq*,char*,scalar_t__) ;
 int FUNC_2 (struct trace_seq*,char*) ;

void FUNC_3(struct trace_event_file *VAR_0, struct trace_seq *VAR_1)
{
 struct event_filter *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 && VAR_2->filter_string)
  FUNC_1(VAR_1, "%s\n", VAR_2->filter_string);
 else
  FUNC_2(VAR_1, "none\n");
}
