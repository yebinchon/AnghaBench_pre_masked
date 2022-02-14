
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qstr ;
typedef int mp_obj_t ;
struct TYPE_5__ {int value; } ;
typedef TYPE_1__ mp_map_elem_t ;
struct TYPE_6__ {int map; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 () ;
 TYPE_1__* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ) ;

mp_obj_t FUNC_7(qstr VAR_1) {

    FUNC_0("load name %s\n", FUNC_6(VAR_1));

    if (FUNC_4() != FUNC_2()) {
        mp_map_elem_t *VAR_2 = FUNC_5(&FUNC_4()->map, FUNC_1(VAR_1), VAR_0);
        if (VAR_2 != ((void*)0)) {
            return VAR_2->value;
        }
    }
    return FUNC_3(VAR_1);
}
