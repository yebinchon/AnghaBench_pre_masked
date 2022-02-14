
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int servo_id; } ;
typedef TYPE_1__ pyb_servo_obj_t ;
typedef int mp_print_kind_t ;
typedef TYPE_1__* mp_obj_t ;



__attribute__((used)) static void FUNC_0(void (*VAR_0)(void *VAR_1, const char *VAR_2, ...), void *VAR_3, mp_obj_t VAR_4, mp_print_kind_t VAR_5) {
    pyb_servo_obj_t *VAR_6 = VAR_4;
    (void)VAR_5;
    VAR_0(VAR_3, "<Servo %lu>", VAR_6->servo_id);
}
