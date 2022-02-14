
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ble_npl_callout {int active; } ;


 int FUNC_0 (char*,struct ble_npl_callout*) ;

void FUNC_1(struct ble_npl_callout *VAR_0) {
    FUNC_0("ble_npl_callout_stop(%p)\n", VAR_0);
    VAR_0->active = 0;
}
