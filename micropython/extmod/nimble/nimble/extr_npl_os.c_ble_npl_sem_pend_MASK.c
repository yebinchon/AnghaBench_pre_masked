
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint ;
struct ble_npl_sem {scalar_t__ count; } ;
typedef scalar_t__ ble_npl_time_t ;
typedef int ble_npl_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;

ble_npl_error_t FUNC_4(struct ble_npl_sem *VAR_2, ble_npl_time_t VAR_3) {
    FUNC_0("ble_npl_sem_pend(%p, %u) count=%u\n", VAR_2, (uint)VAR_3, (uint)VAR_2->count);
    if (VAR_2->count == 0) {
        uint32_t VAR_4 = FUNC_2();
        while (VAR_2->count == 0 && FUNC_2() - VAR_4 < VAR_3) {
            extern void FUNC_0(void);
            FUNC_0();
            if (VAR_2->count != 0) {
                break;
            }
            FUNC_1();
        }
        if (VAR_2->count == 0) {
            FUNC_3("timeout\n");
            return VAR_1;
        }
        FUNC_0("got response in %u ms\n", (int)(FUNC_2() - VAR_4));
    }
    VAR_2->count -= 1;
    return VAR_0;
}
