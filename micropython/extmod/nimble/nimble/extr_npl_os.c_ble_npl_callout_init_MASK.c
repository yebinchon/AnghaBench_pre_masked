
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ble_npl_eventq {int dummy; } ;
struct ble_npl_callout {int active; struct ble_npl_callout* nextc; int ev; struct ble_npl_eventq* evq; scalar_t__ ticks; } ;
typedef int ble_npl_event_fn ;


 int FUNC_0 (char*,struct ble_npl_callout*,struct ble_npl_eventq*,int *,void*) ;
 int FUNC_1 (int *,int *,void*) ;
 struct ble_npl_callout* VAR_0 ;

void FUNC_2(struct ble_npl_callout *VAR_1, struct ble_npl_eventq *VAR_2, ble_npl_event_fn *VAR_3, void *VAR_4) {
    FUNC_0("ble_npl_callout_init(%p, %p, %p, %p)\n", VAR_1, VAR_2, VAR_3, VAR_4);
    VAR_1->active = 0;
    VAR_1->ticks = 0;
    VAR_1->evq = VAR_2;
    FUNC_1(&VAR_1->ev, VAR_3, VAR_4);

    struct ble_npl_callout **VAR_5;
    for (VAR_5 = &VAR_0; *VAR_5 != ((void*)0); VAR_5 = &(*VAR_5)->nextc) {
        if (VAR_1 == *VAR_5) {

            return;
        }
    }
    *VAR_5 = VAR_1;
    VAR_1->nextc = ((void*)0);
}
