
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct ble_npl_callout {int active; scalar_t__ ticks; } ;
typedef scalar_t__ ble_npl_time_t ;
typedef int ble_npl_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*,struct ble_npl_callout*,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

ble_npl_error_t FUNC_3(struct ble_npl_callout *VAR_1, ble_npl_time_t VAR_2) {
    FUNC_0("ble_npl_callout_reset(%p, %u) tnow=%u\n", VAR_1, (uint)VAR_2, (uint)FUNC_2());
    VAR_1->active = 1;
    VAR_1->ticks = FUNC_1() + VAR_2;
    return VAR_0;
}
