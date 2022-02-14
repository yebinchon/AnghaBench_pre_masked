
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int CFSR; int HFSR; int MMFAR; int BFAR; } ;
struct TYPE_4__ {int r0; int r1; int r2; int r3; int r12; int lr; int pc; int xpsr; } ;
typedef TYPE_1__ ExceptionRegisters_t ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_5(ExceptionRegisters_t *VAR_7) {
    if (!VAR_5) {
        FUNC_2();
    }







    FUNC_1("HardFault\r\n");

    FUNC_4("R0    ", VAR_7->r0);
    FUNC_4("R1    ", VAR_7->r1);
    FUNC_4("R2    ", VAR_7->r2);
    FUNC_4("R3    ", VAR_7->r3);
    FUNC_4("R12   ", VAR_7->r12);
    FUNC_4("SP    ", (uint32_t)VAR_7);
    FUNC_4("LR    ", VAR_7->lr);
    FUNC_4("PC    ", VAR_7->pc);
    FUNC_4("XPSR  ", VAR_7->xpsr);
    if ((void*)&VAR_3 <= (void*)VAR_7 && (void*)VAR_7 < (void*)&VAR_2) {
        FUNC_1("Stack:\r\n");
        uint32_t *VAR_8 = &VAR_1;
        if ((void*)VAR_7 < (void*)&VAR_4) {

            VAR_8 = (uint32_t*)VAR_7 + 32;
        }
        for (uint32_t *VAR_9 = (uint32_t*)VAR_7; VAR_9 < VAR_8; ++VAR_9) {
            FUNC_3("  ", (uint32_t)VAR_9, *VAR_9);
        }
    }


    while (1) {
        FUNC_0("HardFault");
    }
}
