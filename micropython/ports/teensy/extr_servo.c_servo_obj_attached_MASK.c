
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint ;
struct TYPE_6__ {int servo_id; } ;
typedef TYPE_1__ pyb_servo_obj_t ;
typedef TYPE_1__* mp_obj_t ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static mp_obj_t FUNC_1(mp_obj_t VAR_1) {
    pyb_servo_obj_t *VAR_2 = VAR_1;
    uint VAR_3 = (VAR_0 & (1 << VAR_2->servo_id)) != 0;
    return FUNC_0(VAR_3);
}
