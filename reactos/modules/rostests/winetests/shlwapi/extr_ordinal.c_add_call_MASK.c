
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int count; int alloc; TYPE_2__* calls; } ;
typedef TYPE_1__ call_trace_t ;
struct TYPE_7__ {int id; void const** args; } ;
typedef TYPE_2__ call_entry_t ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(call_trace_t *VAR_0, int VAR_1, const void *VAR_2,
    const void *VAR_3, const void *VAR_4, const void *VAR_5, const void *VAR_6)
{
    call_entry_t VAR_7;

    VAR_7.id = VAR_1;
    VAR_7.args[0] = VAR_2;
    VAR_7.args[1] = VAR_3;
    VAR_7.args[2] = VAR_4;
    VAR_7.args[3] = VAR_5;
    VAR_7.args[4] = VAR_6;

    if (VAR_0->count == VAR_0->alloc)
    {
        VAR_0->alloc *= 2;
        VAR_0->calls = FUNC_1(FUNC_0(),0, VAR_0->calls, VAR_0->alloc*sizeof(call_entry_t));
    }

    VAR_0->calls[VAR_0->count++] = VAR_7;
}
