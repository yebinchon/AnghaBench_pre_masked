
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int current; } ;
typedef TYPE_1__ trace_info ;
struct TYPE_5__ {scalar_t__ size; } ;
typedef TYPE_2__ trace_header ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, void *VAR_1)
{
 trace_info *VAR_2 = (trace_info *) VAR_0;
 trace_header *VAR_3 = (trace_header *)VAR_1;

 if (VAR_3 == ((void*)0))
  return;
 VAR_2->current -= VAR_3[-1].size;
 FUNC_0(&VAR_3[-1]);
}
