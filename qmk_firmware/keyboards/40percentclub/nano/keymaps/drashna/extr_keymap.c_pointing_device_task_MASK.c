
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buttons; void* y; void* x; } ;
typedef TYPE_1__ report_mouse_t ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_7(void) {
    report_mouse_t VAR_11 = FUNC_1();


    if (FUNC_5(VAR_2) > VAR_1) {
        VAR_2 = FUNC_6();
        VAR_11.x = FUNC_0(VAR_6, VAR_5, VAR_3, VAR_7);
        VAR_11.y = FUNC_0(VAR_9, VAR_8, VAR_3, VAR_10);
    }

    if (!FUNC_4(VAR_4)) {
        VAR_11.buttons |= VAR_0;
    } else {
        VAR_11.buttons &= ~VAR_0;
    }

    FUNC_3(VAR_11);
    FUNC_2();
}
