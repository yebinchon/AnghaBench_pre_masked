
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ble_npl_eventq {struct ble_npl_eventq* nextq; int * head; } ;


 int FUNC_0 (char*,struct ble_npl_eventq*) ;
 struct ble_npl_eventq* VAR_0 ;

void FUNC_1(struct ble_npl_eventq *VAR_1) {
    FUNC_0("ble_npl_eventq_init(%p)\n", VAR_1);
    VAR_1->head = ((void*)0);
    struct ble_npl_eventq **VAR_2;
    for (VAR_2 = &VAR_0; *VAR_2 != ((void*)0); VAR_2 = &(*VAR_2)->nextq) {
    }
    *VAR_2 = VAR_1;
    VAR_1->nextq = ((void*)0);
}
