
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ble_npl_callout {int ev; } ;


 int FUNC_0 (char*,struct ble_npl_callout*,void*) ;
 int FUNC_1 (int *,void*) ;

void FUNC_2(struct ble_npl_callout *VAR_0, void *VAR_1) {
    FUNC_0("ble_npl_callout_set_arg(%p, %p)\n", VAR_0, VAR_1);
    FUNC_1(&VAR_0->ev, VAR_1);
}
