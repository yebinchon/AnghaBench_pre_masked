
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ current; size_t total; scalar_t__ peak; } ;
typedef TYPE_1__ trace_info ;
struct TYPE_5__ {size_t size; } ;
typedef TYPE_2__ trace_header ;


 TYPE_2__* FUNC_0 (size_t) ;

__attribute__((used)) static void *
FUNC_1(void *VAR_0, size_t VAR_1)
{
 trace_info *VAR_2 = (trace_info *) VAR_0;
 trace_header *VAR_3;
 if (VAR_1 == 0)
  return ((void*)0);
 VAR_3 = FUNC_0(VAR_1 + sizeof(trace_header));
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_3[0].size = VAR_1;
 VAR_2->current += VAR_1;
 VAR_2->total += VAR_1;
 if (VAR_2->current > VAR_2->peak)
  VAR_2->peak = VAR_2->current;
 return (void *)&VAR_3[1];
}
