
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int uint ;
struct ble_npl_sem {scalar_t__ count; } ;
typedef int ble_npl_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*,struct ble_npl_sem*,int ) ;

ble_npl_error_t FUNC_1(struct ble_npl_sem *VAR_1, uint16_t VAR_2) {
    FUNC_0("ble_npl_sem_init(%p, %u)\n", VAR_1, (uint)VAR_2);
    VAR_1->count = VAR_2;
    return VAR_0;
}
