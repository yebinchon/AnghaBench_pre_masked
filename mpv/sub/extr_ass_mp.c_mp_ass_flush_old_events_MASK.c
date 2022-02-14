
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int n_events; TYPE_1__* events; } ;
struct TYPE_5__ {long long Start; long long Duration; } ;
typedef TYPE_2__ ASS_Track ;


 int FUNC_0 (TYPE_2__*,int) ;

void FUNC_1(ASS_Track *VAR_0, long long VAR_1)
{
    int VAR_2 = 0;
    for (; VAR_2 < VAR_0->n_events; VAR_2++) {
        if ((VAR_0->events[VAR_2].Start + VAR_0->events[VAR_2].Duration) >= VAR_1)
            break;
        FUNC_0(VAR_0, VAR_2);
        VAR_0->n_events--;
    }
    for (int VAR_3 = 0; VAR_2 > 0 && VAR_3 < VAR_0->n_events; VAR_3++) {
        VAR_0->events[VAR_3] = VAR_0->events[VAR_3+VAR_2];
    }
}
