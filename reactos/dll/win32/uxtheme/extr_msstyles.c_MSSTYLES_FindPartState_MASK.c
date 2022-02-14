
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* overrides; TYPE_1__* partstate; } ;
struct TYPE_6__ {int iPartId; int iStateId; struct TYPE_6__* next; } ;
typedef TYPE_1__* PTHEME_PARTSTATE ;
typedef TYPE_2__* PTHEME_CLASS ;



PTHEME_PARTSTATE FUNC_0(PTHEME_CLASS VAR_0, int VAR_1, int VAR_2, PTHEME_CLASS *VAR_3)
{
    PTHEME_PARTSTATE VAR_4 = VAR_0->partstate;
    while(VAR_4) {
        if(VAR_4->iPartId == VAR_1 && VAR_4->iStateId == VAR_2) {
            if(VAR_3) *VAR_3 = VAR_0->overrides;
            return VAR_4;
        }
        VAR_4 = VAR_4->next;
    }
    if(VAR_0->overrides) return FUNC_0(VAR_0->overrides, VAR_1, VAR_2, VAR_3);
    return ((void*)0);
}
