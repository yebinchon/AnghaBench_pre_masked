
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct ble_npl_callout {scalar_t__ ticks; } ;
typedef scalar_t__ ble_npl_time_t ;


 int FUNC_0 (char*,struct ble_npl_callout*,int ) ;

ble_npl_time_t FUNC_1(struct ble_npl_callout *VAR_0, ble_npl_time_t VAR_1) {
    FUNC_0("ble_npl_callout_remaining_ticks(%p, %u)\n", VAR_0, (uint)VAR_1);
    if (VAR_0->ticks > VAR_1) {
        return VAR_0->ticks - VAR_1;
    } else {
        return 0;
    }
}
