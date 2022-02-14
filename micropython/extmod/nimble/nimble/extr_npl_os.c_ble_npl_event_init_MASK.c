
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ble_npl_event {int * next; void* arg; int * fn; } ;
typedef int ble_npl_event_fn ;


 int FUNC_0 (char*,struct ble_npl_event*,int *,void*) ;

void FUNC_1(struct ble_npl_event *VAR_0, ble_npl_event_fn *VAR_1, void *VAR_2) {
    FUNC_0("ble_npl_event_init(%p, %p, %p)\n", VAR_0, VAR_1, VAR_2);
    VAR_0->fn = VAR_1;
    VAR_0->arg = VAR_2;
    VAR_0->next = ((void*)0);
}
