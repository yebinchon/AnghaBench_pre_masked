
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {size_t clock_id; } ;
struct TYPE_2__ {scalar_t__ in_ns; } ;


 TYPE_1__* VAR_0 ;

bool FUNC_0(struct trace_array *VAR_1)
{
 if (VAR_0[VAR_1->clock_id].in_ns)
  return 1;

 return 0;
}
