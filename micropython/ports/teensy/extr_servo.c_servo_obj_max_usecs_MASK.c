
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int max_usecs; } ;
typedef TYPE_1__ pyb_servo_obj_t ;
typedef TYPE_1__* mp_obj_t ;


 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__* const) ;

__attribute__((used)) static mp_obj_t FUNC_2(int VAR_1, const mp_obj_t *VAR_2) {
    pyb_servo_obj_t *VAR_3 = VAR_2[0];
    if (VAR_1 == 1) {

        return FUNC_0(VAR_3->max_usecs);
    }

    VAR_3->max_usecs = FUNC_1(VAR_2[1]);
    return VAR_0;
}
