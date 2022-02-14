
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ble_npl_sem {int count; } ;
typedef int ble_npl_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*,struct ble_npl_sem*) ;

ble_npl_error_t FUNC_1(struct ble_npl_sem *VAR_1) {
    FUNC_0("ble_npl_sem_release(%p)\n", VAR_1);
    VAR_1->count += 1;
    return VAR_0;
}
