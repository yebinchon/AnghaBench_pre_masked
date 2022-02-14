
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_4__ {size_t used; } ;
struct TYPE_5__ {TYPE_1__ map; } ;
typedef TYPE_2__ mp_obj_dict_t ;


 TYPE_2__* FUNC_0 (int ) ;

size_t FUNC_1(mp_obj_t VAR_0) {
    mp_obj_dict_t *VAR_1 = FUNC_0(VAR_0);
    return VAR_1->map.used;
}
