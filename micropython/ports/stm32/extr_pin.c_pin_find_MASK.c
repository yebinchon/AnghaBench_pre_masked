
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pin_obj_t ;
typedef scalar_t__ mp_obj_t ;
typedef int mp_map_t ;
struct TYPE_3__ {scalar_t__ value; } ;
typedef TYPE_1__ mp_map_elem_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ VAR_1 ;
 int const* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_4 (int *,scalar_t__,int ) ;
 int * FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*) ;
 int VAR_5 ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_12 (int *,scalar_t__) ;
 int VAR_11 ;
 int FUNC_13 (char*) ;

const pin_obj_t *FUNC_14(mp_obj_t VAR_12) {
    const pin_obj_t *VAR_13;


    if (FUNC_6(VAR_12, &VAR_11)) {
        VAR_13 = FUNC_1(VAR_12);
        if (VAR_7) {
            FUNC_13("Pin map passed pin ");
            FUNC_8(FUNC_0(VAR_13), VAR_3);
            FUNC_13("\n");
        }
        return VAR_13;
    }

    if (FUNC_2(VAR_9) != VAR_4) {
        mp_obj_t VAR_14 = FUNC_3(FUNC_2(VAR_9), VAR_12);
        if (VAR_14 != VAR_4) {
            if (!FUNC_6(VAR_14, &VAR_11)) {
                FUNC_10("Pin.mapper didn't return a Pin object");
            }
            if (VAR_7) {
                FUNC_13("Pin.mapper maps ");
                FUNC_8(VAR_12, VAR_2);
                FUNC_13(" to ");
                FUNC_8(VAR_14, VAR_3);
                FUNC_13("\n");
            }
            return FUNC_1(VAR_14);
        }


    }

    if (FUNC_2(VAR_8) != VAR_4) {
        mp_map_t *VAR_15 = FUNC_5(FUNC_2(VAR_8));
        mp_map_elem_t *VAR_16 = FUNC_4(VAR_15, VAR_12, VAR_0);
        if (VAR_16 != ((void*)0) && VAR_16->value != VAR_1) {
            mp_obj_t VAR_17 = VAR_16->value;
            if (VAR_7) {
                FUNC_13("Pin.map_dict maps ");
                FUNC_8(VAR_12, VAR_2);
                FUNC_13(" to ");
                FUNC_8(VAR_17, VAR_3);
                FUNC_13("\n");
            }
            return FUNC_1(VAR_17);
        }
    }


    VAR_13 = FUNC_12(&VAR_6, VAR_12);
    if (VAR_13) {
        if (VAR_7) {
            FUNC_13("Pin.board maps ");
            FUNC_8(VAR_12, VAR_2);
            FUNC_13(" to ");
            FUNC_8(FUNC_0(VAR_13), VAR_3);
            FUNC_13("\n");
        }
        return VAR_13;
    }


    VAR_13 = FUNC_12(&VAR_10, VAR_12);
    if (VAR_13) {
        if (VAR_7) {
            FUNC_13("Pin.cpu maps ");
            FUNC_8(VAR_12, VAR_2);
            FUNC_13(" to ");
            FUNC_8(FUNC_0(VAR_13), VAR_3);
            FUNC_13("\n");
        }
        return VAR_13;
    }

    FUNC_11(FUNC_7(&VAR_5, "Pin(%s) doesn't exist", FUNC_9(VAR_12)));
}
