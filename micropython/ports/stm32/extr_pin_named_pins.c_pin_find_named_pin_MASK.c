
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pin_obj_t ;
typedef int mp_obj_t ;
struct TYPE_5__ {int map; } ;
typedef TYPE_1__ mp_obj_dict_t ;
typedef int mp_map_t ;
struct TYPE_6__ {scalar_t__ value; } ;
typedef TYPE_2__ mp_map_elem_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int const* FUNC_0 (scalar_t__) ;
 TYPE_2__* FUNC_1 (int *,int ,int ) ;

const pin_obj_t *FUNC_2(const mp_obj_dict_t *VAR_2, mp_obj_t VAR_3) {
    const mp_map_t *VAR_4 = &VAR_2->map;
    mp_map_elem_t *VAR_5 = FUNC_1((mp_map_t*)VAR_4, VAR_3, VAR_0);
    if (VAR_5 != ((void*)0) && VAR_5->value != VAR_1) {
        return FUNC_0(VAR_5->value);
    }
    return ((void*)0);
}
