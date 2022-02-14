
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qstr ;
typedef int mp_obj_t ;
typedef int mp_map_t ;
struct TYPE_6__ {int value; } ;
typedef TYPE_1__ mp_map_elem_t ;
struct TYPE_9__ {int map; } ;
struct TYPE_8__ {int map; } ;
struct TYPE_7__ {int map; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 () ;
 TYPE_1__* FUNC_4 (int *,int ,int ) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

mp_obj_t FUNC_9(qstr VAR_6) {

    FUNC_0("load global %s\n", FUNC_8(VAR_6));
    mp_map_elem_t *VAR_7 = FUNC_4(&FUNC_3()->map, FUNC_1(VAR_6), VAR_2);
    if (VAR_7 == ((void*)0)) {
        VAR_7 = FUNC_4((mp_map_t*)&VAR_3.map, FUNC_1(VAR_6), VAR_2);
        if (VAR_7 == ((void*)0)) {
            if (VAR_0 == VAR_1) {
                FUNC_6(&VAR_5, "name not defined");
            } else {
                FUNC_7(FUNC_5(&VAR_5,
                    "name '%q' isn't defined", VAR_6));
            }
        }
    }
    return VAR_7->value;
}
