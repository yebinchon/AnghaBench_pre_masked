
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* mp_obj_t ;
struct TYPE_5__ {int id; } ;
typedef TYPE_1__ machine_pin_obj_t ;
typedef int gpio_num_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;

gpio_num_t FUNC_2(mp_obj_t VAR_1) {
    if (FUNC_0(VAR_1) != &VAR_0) {
        FUNC_1("expecting a pin");
    }
    machine_pin_obj_t *VAR_2 = VAR_1;
    return VAR_2->id;
}
