
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {int cpu_file; TYPE_1__* trace_buffer; } ;
struct TYPE_2__ {int buffer; } ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (struct trace_iterator*,int ) ;

__attribute__((used)) static int FUNC_2(struct trace_iterator *VAR_0, int VAR_1)
{

 if (FUNC_1(VAR_0, VAR_0->cpu_file))
  return 0;

 return FUNC_0(VAR_0->trace_buffer->buffer, VAR_0->cpu_file,
    VAR_1);
}
