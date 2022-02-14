
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array_cpu {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct trace_array {TYPE_1__ trace_buffer; } ;
struct mmiotrace_map {int dummy; } ;


 int FUNC_0 (struct trace_array*,struct trace_array_cpu*,struct mmiotrace_map*) ;
 struct trace_array* VAR_0 ;
 struct trace_array_cpu* FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct mmiotrace_map *VAR_1)
{
 struct trace_array *VAR_2 = VAR_0;
 struct trace_array_cpu *VAR_3;

 FUNC_2();
 VAR_3 = FUNC_1(VAR_2->trace_buffer.data, FUNC_4());
 FUNC_0(VAR_2, VAR_3, VAR_1);
 FUNC_3();
}
