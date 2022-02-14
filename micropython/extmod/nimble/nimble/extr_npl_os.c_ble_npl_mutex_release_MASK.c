
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct ble_npl_mutex {scalar_t__ locked; } ;
typedef int ble_npl_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*,struct ble_npl_mutex*,int ) ;

ble_npl_error_t FUNC_1(struct ble_npl_mutex *VAR_1) {
    FUNC_0("ble_npl_mutex_release(%p) locked=%u\n", VAR_1, (uint)VAR_1->locked);
    VAR_1->locked = 0;
    return VAR_0;
}
