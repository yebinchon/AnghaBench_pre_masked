
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc; int calls; scalar_t__ count; } ;
typedef TYPE_1__ call_trace_t ;
typedef int call_entry_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(call_trace_t *VAR_0)
{
    VAR_0->alloc = 10;
    VAR_0->count = 0;
    VAR_0->calls = FUNC_1(FUNC_0(), 0, sizeof(call_entry_t) * VAR_0->alloc);
}
