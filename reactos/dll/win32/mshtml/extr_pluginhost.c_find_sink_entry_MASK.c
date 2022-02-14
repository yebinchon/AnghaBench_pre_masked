
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ id; } ;
typedef TYPE_1__ sink_entry_t ;
struct TYPE_6__ {int handlers_cnt; TYPE_1__* handlers; } ;
typedef TYPE_2__ PHEventSink ;
typedef scalar_t__ DISPID ;



__attribute__((used)) static sink_entry_t *FUNC_0(PHEventSink *VAR_0, DISPID VAR_1)
{
    sink_entry_t *VAR_2;

    for(VAR_2 = VAR_0->handlers; VAR_2 < VAR_0->handlers+VAR_0->handlers_cnt; VAR_2++) {
        if(VAR_2->id == VAR_1)
            return VAR_2;
    }

    return ((void*)0);
}
