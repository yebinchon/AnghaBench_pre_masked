
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {int lost_events; int ts; int cpu; TYPE_1__* trace_buffer; } ;
struct TYPE_2__ {int buffer; } ;


 int FUNC_0 (int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct trace_iterator *VAR_0)
{
 FUNC_0(VAR_0->trace_buffer->buffer, VAR_0->cpu, &VAR_0->ts,
       &VAR_0->lost_events);
}
