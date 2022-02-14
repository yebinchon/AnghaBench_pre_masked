
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ble_npl_eventq {struct ble_npl_event* head; struct ble_npl_eventq* nextq; } ;
struct ble_npl_event {int (* fn ) (struct ble_npl_event*) ;int * prev; struct ble_npl_event* next; } ;


 int FUNC_0 (char*,struct ble_npl_event*) ;
 struct ble_npl_eventq* VAR_0 ;
 int FUNC_1 (struct ble_npl_event*) ;

void FUNC_2(void) {
    for (struct ble_npl_eventq *VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_1->nextq) {
        while (VAR_1->head != ((void*)0)) {
            struct ble_npl_event *VAR_2 = VAR_1->head;
            VAR_1->head = VAR_2->next;
            if (VAR_2->next) {
                VAR_2->next->prev = ((void*)0);
                VAR_2->next = ((void*)0);
            }
            VAR_2->prev = ((void*)0);
            FUNC_0("event_run(%p)\n", VAR_2);
            VAR_2->fn(VAR_2);
            FUNC_0("event_run(%p) done\n", VAR_2);
        }
    }
}
