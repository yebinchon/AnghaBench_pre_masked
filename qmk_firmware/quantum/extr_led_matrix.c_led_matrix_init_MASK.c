
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* raw; int mode; } ;
struct TYPE_3__ {int (* init ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 void* FUNC_4 () ;
 int FUNC_5 () ;
 int* VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

void FUNC_8(void) {
    VAR_3.init();


    FUNC_7(500);


    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        VAR_1[VAR_4] = 255;
    }

    if (!FUNC_3()) {
        FUNC_0("led_matrix_init_drivers eeconfig is not enabled.\n");
        FUNC_2();
        FUNC_5();
    }

    VAR_2.raw = FUNC_4();

    if (!VAR_2.mode) {
        FUNC_0("led_matrix_init_drivers led_matrix_config.mode = 0. Write default values to EEPROM.\n");
        FUNC_5();
        VAR_2.raw = FUNC_4();
    }

    FUNC_1();
}
