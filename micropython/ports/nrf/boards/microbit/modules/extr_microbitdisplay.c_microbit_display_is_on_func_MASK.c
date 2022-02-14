
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ mp_obj_t ;
struct TYPE_2__ {scalar_t__ active; } ;
typedef TYPE_1__ microbit_display_obj_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

mp_obj_t FUNC_0(mp_obj_t VAR_2) {
    microbit_display_obj_t *VAR_3 = (microbit_display_obj_t*)VAR_2;
    if (VAR_3->active) {
        return VAR_1;
    }
    else {
        return VAR_0;
    }
}
