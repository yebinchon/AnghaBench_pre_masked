
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ble_npl_eventq {struct ble_npl_event* head; } ;
struct ble_npl_event {struct ble_npl_event* prev; struct ble_npl_event* next; int arg; int fn; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct ble_npl_eventq *VAR_0, struct ble_npl_event *VAR_1) {
    FUNC_0("ble_npl_eventq_put(%p, %p (%p, %p))\n", VAR_0, VAR_1, VAR_1->fn, VAR_1->arg);
    VAR_1->next = ((void*)0);
    if (VAR_0->head == ((void*)0)) {
        VAR_0->head = VAR_1;
        VAR_1->prev = ((void*)0);
    } else {
        struct ble_npl_event *VAR_2 = VAR_0->head;
        while (1) {
            if (VAR_2 == VAR_1) {
                FUNC_0("  --> already in queue\n");
                return;
            }
            if (VAR_2->next == ((void*)0)) {
                break;
            }
            FUNC_0("  --> %p\n", VAR_2->next);
            VAR_2 = VAR_2->next;
        }
        VAR_2->next = VAR_1;
        VAR_1->prev = VAR_2;
    }
}
