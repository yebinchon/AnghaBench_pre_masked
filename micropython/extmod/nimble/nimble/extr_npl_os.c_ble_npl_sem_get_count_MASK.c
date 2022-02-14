
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ble_npl_sem {int count; } ;


 int FUNC_0 (char*,struct ble_npl_sem*) ;

uint16_t FUNC_1(struct ble_npl_sem *VAR_0) {
    FUNC_0("ble_npl_sem_get_count(%p)\n", VAR_0);
    return VAR_0->count;
}
