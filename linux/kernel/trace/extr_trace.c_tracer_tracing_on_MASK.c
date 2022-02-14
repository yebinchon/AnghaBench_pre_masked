
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ buffer; } ;
struct trace_array {scalar_t__ buffer_disabled; TYPE_1__ trace_buffer; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;

void FUNC_2(struct trace_array *VAR_0)
{
 if (VAR_0->trace_buffer.buffer)
  FUNC_0(VAR_0->trace_buffer.buffer);
 VAR_0->buffer_disabled = 0;

 FUNC_1();
}
