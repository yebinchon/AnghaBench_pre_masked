
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int dummy; } ;
struct trace_event_call {int dummy; } ;
struct trace_array {int event_dir; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct trace_event_file*) ;
 struct trace_event_file* FUNC_1 (struct trace_event_call*,struct trace_array*) ;

__attribute__((used)) static int
FUNC_2(struct trace_event_call *VAR_1, struct trace_array *VAR_2)
{
 struct trace_event_file *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_2->event_dir, VAR_3);
}
