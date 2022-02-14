
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_8__ {void** tick; scalar_t__ count; } ;
struct TYPE_7__ {void** tick; scalar_t__ count; } ;
struct TYPE_6__ {int mode; } ;
struct TYPE_5__ {int (* init ) () ;} ;


 size_t VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 () ;

void FUNC_7(void) {
    VAR_5.init();
    if (!FUNC_3()) {
        FUNC_0("rgb_matrix_init_drivers eeconfig is not enabled.\n");
        FUNC_2();
        FUNC_5();
    }

    FUNC_4();
    if (!VAR_4.mode) {
        FUNC_0("rgb_matrix_init_drivers rgb_matrix_config.mode = 0. Write default values to EEPROM.\n");
        FUNC_5();
    }
    FUNC_1();
}
