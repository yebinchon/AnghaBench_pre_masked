
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_probe {int dummy; } ;
struct trace_event_call {int event; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct trace_event_call*) ;
 struct trace_event_call* FUNC_2 (struct trace_probe*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct trace_probe *VAR_1)
{
 struct trace_event_call *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->event);
 if (!VAR_3)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  FUNC_3(&VAR_2->event);

 return VAR_3;
}
