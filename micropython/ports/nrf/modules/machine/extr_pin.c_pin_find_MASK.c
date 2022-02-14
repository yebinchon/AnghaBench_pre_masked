
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_21__ {size_t pin; } ;
typedef TYPE_1__ pin_obj_t ;
typedef TYPE_1__ const* mp_obj_t ;
typedef int mp_map_t ;
struct TYPE_22__ {TYPE_1__* value; } ;
typedef TYPE_3__ mp_map_elem_t ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ const* VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*,TYPE_1__ const*) ;
 TYPE_1__ const* VAR_5 ;
 TYPE_3__* FUNC_3 (int *,TYPE_1__ const*,int ) ;
 int * FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;
 scalar_t__ FUNC_6 (TYPE_1__ const*,int *) ;
 int FUNC_7 (TYPE_1__ const*,int ) ;
 int FUNC_8 (char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* FUNC_9 (int *,TYPE_1__ const*) ;
 int VAR_11 ;
 int FUNC_10 (char*) ;

const pin_obj_t *FUNC_11(mp_obj_t VAR_12) {
    const pin_obj_t *VAR_13;

    if (FUNC_5(VAR_12)) {
        uint8_t VAR_14 = FUNC_0(VAR_12);
        for (uint8_t VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
            if (VAR_3[VAR_15].pin == VAR_14) {
                return &VAR_3[VAR_15];
            }
        }
    }


    if (FUNC_6(VAR_12, &VAR_11)) {
        VAR_13 = VAR_12;
        if (VAR_7) {
            FUNC_10("Pin map passed pin ");
            FUNC_7((mp_obj_t)VAR_13, VAR_2);
            FUNC_10("\n");
        }
        return VAR_13;
    }

    if (FUNC_1(VAR_9) != VAR_5) {
        VAR_13 = FUNC_2(FUNC_1(VAR_9), VAR_12);
        if (VAR_13 != VAR_5) {
            if (!FUNC_6(VAR_13, &VAR_11)) {
                FUNC_8("Pin.mapper didn't return a Pin object");
            }
            if (VAR_7) {
                FUNC_10("Pin.mapper maps ");
                FUNC_7(VAR_12, VAR_1);
                FUNC_10(" to ");
                FUNC_7((mp_obj_t)VAR_13, VAR_2);
                FUNC_10("\n");
            }
            return VAR_13;
        }


    }

    if (FUNC_1(VAR_8) != VAR_5) {
        mp_map_t *VAR_16 = FUNC_4(FUNC_1(VAR_8));
        mp_map_elem_t *VAR_17 = FUNC_3(VAR_16, VAR_12, VAR_0);
        if (VAR_17 != ((void*)0) && VAR_17->value != ((void*)0)) {
            VAR_13 = VAR_17->value;
            if (VAR_7) {
                FUNC_10("Pin.map_dict maps ");
                FUNC_7(VAR_12, VAR_1);
                FUNC_10(" to ");
                FUNC_7((mp_obj_t)VAR_13, VAR_2);
                FUNC_10("\n");
            }
            return VAR_13;
        }
    }


    VAR_13 = FUNC_9(&VAR_6, VAR_12);
    if (VAR_13) {
        if (VAR_7) {
            FUNC_10("Pin.board maps ");
            FUNC_7(VAR_12, VAR_1);
            FUNC_10(" to ");
            FUNC_7((mp_obj_t)VAR_13, VAR_2);
            FUNC_10("\n");
        }
        return VAR_13;
    }


    VAR_13 = FUNC_9(&VAR_10, VAR_12);
    if (VAR_13) {
        if (VAR_7) {
            FUNC_10("Pin.cpu maps ");
            FUNC_7(VAR_12, VAR_1);
            FUNC_10(" to ");
            FUNC_7((mp_obj_t)VAR_13, VAR_2);
            FUNC_10("\n");
        }
        return VAR_13;
    }

    FUNC_8("not a valid pin identifier");
}
