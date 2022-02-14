
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phys_port; int periph; int func; } ;
typedef TYPE_1__ pyb_pin_obj_t ;
typedef size_t mp_hal_pin_obj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int * VAR_4 ;
 TYPE_1__* VAR_5 ;

void FUNC_5(mp_hal_pin_obj_t VAR_6) {
    VAR_4[VAR_6] = VAR_0;
    if (VAR_6 == 16) {
        FUNC_3(VAR_1, (FUNC_2(VAR_1) & 0xffffffbc) | 1);
        FUNC_3(VAR_2, FUNC_2(VAR_2) & ~1);
        FUNC_3(VAR_3, (FUNC_2(VAR_3) & ~1) | 1);
    } else {
        const pyb_pin_obj_t *VAR_7 = &VAR_5[VAR_6];
        FUNC_0(VAR_7->periph, VAR_7->func);
        FUNC_1(VAR_7->periph);
        FUNC_4(0, 0, 1 << VAR_7->phys_port, 0);
    }
}
