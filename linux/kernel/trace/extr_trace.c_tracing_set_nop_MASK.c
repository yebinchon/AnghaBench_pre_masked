
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {TYPE_1__* current_trace; } ;
struct TYPE_2__ {int (* reset ) (struct trace_array*) ;int enabled; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct trace_array*) ;

__attribute__((used)) static void FUNC_1(struct trace_array *VAR_1)
{
 if (VAR_1->current_trace == &VAR_0)
  return;

 VAR_1->current_trace->enabled--;

 if (VAR_1->current_trace->reset)
  VAR_1->current_trace->reset(VAR_1);

 VAR_1->current_trace = &VAR_0;
}
