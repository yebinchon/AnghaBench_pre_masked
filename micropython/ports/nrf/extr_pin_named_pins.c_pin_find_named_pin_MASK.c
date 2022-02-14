
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pin_obj_t ;
typedef int mp_obj_t ;
typedef int mp_obj_dict_t ;
typedef int mp_map_t ;
struct TYPE_3__ {int const* value; } ;
typedef TYPE_1__ mp_map_elem_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (int ) ;

const pin_obj_t *FUNC_2(const mp_obj_dict_t *VAR_1, mp_obj_t VAR_2) {
    mp_map_t *VAR_3 = FUNC_1((mp_obj_t)VAR_1);
    mp_map_elem_t *VAR_4 = FUNC_0(VAR_3, VAR_2, VAR_0);
    if (VAR_4 != ((void*)0) && VAR_4->value != ((void*)0)) {
        return VAR_4->value;
    }
    return ((void*)0);
}
