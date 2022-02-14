
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** event_table; } ;
typedef TYPE_2__ event_target_t ;
struct TYPE_5__ {unsigned int handler_cnt; scalar_t__* handlers; scalar_t__ handler_prop; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(event_target_t *VAR_1)
{
    int VAR_2;
    unsigned int VAR_3;

    for(VAR_2=0; VAR_2 < VAR_0; VAR_2++) {
        if(VAR_1->event_table[VAR_2]) {
            if(VAR_1->event_table[VAR_2]->handler_prop)
                FUNC_0(VAR_1->event_table[VAR_2]->handler_prop);
            for(VAR_3=0; VAR_3 < VAR_1->event_table[VAR_2]->handler_cnt; VAR_3++)
                if(VAR_1->event_table[VAR_2]->handlers[VAR_3])
                    FUNC_0(VAR_1->event_table[VAR_2]->handlers[VAR_3]);
        }
    }

    FUNC_1(VAR_1);
}
