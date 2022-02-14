
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int qstr ;
struct TYPE_12__ {TYPE_2__* locals_dict; int (* attr ) (int ,int ,int *) ;int * iternext; } ;
typedef TYPE_3__ mp_obj_type_t ;
typedef int mp_obj_t ;
typedef int mp_map_t ;
struct TYPE_13__ {int value; } ;
typedef TYPE_4__ mp_map_elem_t ;
struct TYPE_10__ {int * type; } ;
struct TYPE_11__ {int map; TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (int ,TYPE_3__*,int ,int *) ;
 TYPE_4__* FUNC_4 (int *,int ,int ) ;
 TYPE_3__* FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int *) ;

void FUNC_7(mp_obj_t VAR_6, qstr VAR_7, mp_obj_t *VAR_8) {

    VAR_8[0] = VAR_1;
    VAR_8[1] = VAR_1;


    mp_obj_type_t *VAR_9 = FUNC_5(VAR_6);
    if (VAR_7 == VAR_3 && VAR_9->iternext != ((void*)0)) {
        VAR_8[0] = FUNC_0(&VAR_4);
        VAR_8[1] = VAR_6;

    } else if (VAR_9->attr != ((void*)0)) {

        VAR_9->attr(VAR_6, VAR_7, VAR_8);

    } else if (VAR_9->locals_dict != ((void*)0)) {


        FUNC_2(VAR_9->locals_dict->base.type == &VAR_5);
        mp_map_t *VAR_10 = &VAR_9->locals_dict->map;
        mp_map_elem_t *VAR_11 = FUNC_4(VAR_10, FUNC_1(VAR_7), VAR_0);
        if (VAR_11 != ((void*)0)) {
            FUNC_3(VAR_6, VAR_9, VAR_11->value, VAR_8);
        }
    }
}
