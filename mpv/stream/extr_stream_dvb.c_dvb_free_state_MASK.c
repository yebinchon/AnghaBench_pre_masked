
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int adapters_count; int NUM_CHANNELS; TYPE_1__* adapters; struct TYPE_6__* channels; struct TYPE_6__* name; } ;
typedef TYPE_2__ dvb_state_t ;
struct TYPE_5__ {TYPE_2__* list; } ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(dvb_state_t *VAR_0)
{
    int VAR_1, VAR_2;

    for (VAR_1 = 0; VAR_1 < VAR_0->adapters_count; VAR_1++) {
        if (!VAR_0->adapters[VAR_1].list)
            continue;
        if (VAR_0->adapters[VAR_1].list->channels) {
            for (VAR_2 = 0; VAR_2 < VAR_0->adapters[VAR_1].list->NUM_CHANNELS; VAR_2++)
                FUNC_0(VAR_0->adapters[VAR_1].list->channels[VAR_2].name);
            FUNC_0(VAR_0->adapters[VAR_1].list->channels);
        }
        FUNC_0(VAR_0->adapters[VAR_1].list);
    }
    FUNC_0(VAR_0);
}
