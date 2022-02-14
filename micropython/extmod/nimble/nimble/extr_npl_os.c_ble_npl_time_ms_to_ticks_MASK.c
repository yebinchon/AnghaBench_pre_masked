
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint ;
typedef scalar_t__ ble_npl_time_t ;
typedef int ble_npl_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

ble_npl_error_t FUNC_1(uint32_t VAR_1, ble_npl_time_t *VAR_2) {
    FUNC_0("ble_npl_time_ms_to_ticks(%u)\n", (uint)VAR_1);
    *VAR_2 = VAR_1;
    return VAR_0;
}
