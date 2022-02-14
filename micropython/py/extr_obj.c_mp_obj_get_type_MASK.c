
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_obj_type_t ;
struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ mp_obj_base_t ;
typedef int mp_const_obj_t ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

mp_obj_type_t *FUNC_4(mp_const_obj_t VAR_3) {
    if (FUNC_3(VAR_3)) {
        return (mp_obj_type_t*)&VAR_1;
    } else if (FUNC_2(VAR_3)) {
        return (mp_obj_type_t*)&VAR_2;




    } else {
        const mp_obj_base_t *VAR_4 = FUNC_0(VAR_3);
        return (mp_obj_type_t*)VAR_4->type;
    }
}
