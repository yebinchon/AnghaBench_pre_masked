
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trace_iterator {int iter_flags; TYPE_4__* tr; TYPE_2__* trace_buffer; TYPE_1__* trace; int cpu_file; } ;
struct TYPE_6__ {int buffer; } ;
struct TYPE_8__ {size_t clock_id; TYPE_2__ trace_buffer; TYPE_1__* current_trace; } ;
struct TYPE_7__ {scalar_t__ in_ns; } ;
struct TYPE_5__ {int (* open ) (struct trace_iterator*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct trace_iterator*) ;
 TYPE_3__* VAR_4 ;

void FUNC_2(struct trace_iterator *VAR_5)
{
 VAR_5->tr = &VAR_3;
 VAR_5->trace = VAR_5->tr->current_trace;
 VAR_5->cpu_file = VAR_0;
 VAR_5->trace_buffer = &VAR_3.trace_buffer;

 if (VAR_5->trace && VAR_5->trace->open)
  VAR_5->trace->open(VAR_5);


 if (FUNC_0(VAR_5->trace_buffer->buffer))
  VAR_5->iter_flags |= VAR_1;


 if (VAR_4[VAR_5->tr->clock_id].in_ns)
  VAR_5->iter_flags |= VAR_2;
}
