
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mp_obj_type_t ;
typedef int mp_obj_t ;
struct TYPE_2__ {int * subobj; } ;
typedef TYPE_1__ mp_obj_instance_t ;
typedef int mp_const_obj_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

mp_obj_t FUNC_4(mp_const_obj_t VAR_1, mp_const_obj_t VAR_2) {
    mp_obj_type_t *VAR_3 = FUNC_2(VAR_1);
    if (!FUNC_3(FUNC_0(VAR_3), VAR_2)) {
        return VAR_0;
    }
    mp_obj_instance_t *VAR_4 = (mp_obj_instance_t*)FUNC_1(VAR_1);
    return VAR_4->subobj[0];
}
