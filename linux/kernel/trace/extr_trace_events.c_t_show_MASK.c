
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_file {struct trace_event_call* event_call; } ;
struct trace_event_call {TYPE_1__* class; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int system; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct trace_event_call*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct trace_event_file *VAR_3 = VAR_2;
 struct trace_event_call *VAR_4 = VAR_3->event_call;

 if (FUNC_1(VAR_4->class->system, VAR_0) != 0)
  FUNC_0(VAR_1, "%s:", VAR_4->class->system);
 FUNC_0(VAR_1, "%s\n", FUNC_2(VAR_4));

 return 0;
}
