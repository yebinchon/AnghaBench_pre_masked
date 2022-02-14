
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phys_port; int func; int periph; } ;
typedef TYPE_1__ pyb_pin_obj_t ;
typedef size_t mp_hal_pin_obj_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int) ;
 TYPE_1__* VAR_6 ;

void FUNC_10(mp_hal_pin_obj_t VAR_7) {
    const pyb_pin_obj_t *VAR_8 = &VAR_6[VAR_7];

    if (VAR_8->phys_port == 16) {

        FUNC_9(VAR_2, (FUNC_8(VAR_2) & 0xffffffbc) | 1);
        FUNC_9(VAR_3, FUNC_8(VAR_3) & ~1);
        FUNC_9(VAR_4, (FUNC_8(VAR_4) & ~1));
        FUNC_9(VAR_5, (FUNC_8(VAR_5) & ~1));
        return;
    }

    FUNC_0();
    FUNC_7(VAR_8->periph, VAR_8->func);
    FUNC_6(FUNC_3(FUNC_2(VAR_8->phys_port)),
        FUNC_5(FUNC_3(FUNC_2(VAR_8->phys_port)))
        | FUNC_4(VAR_1));
    FUNC_6(VAR_0,
        FUNC_5(VAR_0) | (1 << VAR_8->phys_port));
    FUNC_1();
}
