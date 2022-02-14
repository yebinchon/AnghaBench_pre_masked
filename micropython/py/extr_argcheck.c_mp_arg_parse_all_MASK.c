
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_10__ {size_t used; } ;
typedef TYPE_1__ mp_map_t ;
struct TYPE_11__ {int value; } ;
typedef TYPE_2__ mp_map_elem_t ;
struct TYPE_12__ {int u_obj; int u_int; int u_bool; } ;
typedef TYPE_3__ mp_arg_val_t ;
struct TYPE_13__ {int flags; TYPE_3__ defval; int qst; } ;
typedef TYPE_4__ mp_arg_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (char*) ;
 int VAR_9 ;
 int FUNC_8 (int ) ;

void FUNC_9(size_t VAR_10, const mp_obj_t *VAR_11, mp_map_t *VAR_12, size_t VAR_13, const mp_arg_t *VAR_14, mp_arg_val_t *VAR_15) {
    size_t VAR_16 = 0, VAR_17 = 0;
    for (size_t VAR_18 = 0; VAR_18 < VAR_13; VAR_18++) {
        mp_obj_t VAR_19;
        if (VAR_18 < VAR_10) {
            if (VAR_14[VAR_18].flags & VAR_5) {
                goto extra_positional;
            }
            VAR_16++;
            VAR_19 = VAR_11[VAR_18];
        } else {
            mp_map_elem_t *VAR_20 = FUNC_3(VAR_12, FUNC_0(VAR_14[VAR_18].qst), VAR_8);
            if (VAR_20 == ((void*)0)) {
                if (VAR_14[VAR_18].flags & VAR_7) {
                    if (VAR_0 == VAR_1) {
                        FUNC_2();
                    } else {
                        FUNC_8(FUNC_6(&VAR_9,
                            "'%q' argument required", VAR_14[VAR_18].qst));
                    }
                }
                VAR_15[VAR_18] = VAR_14[VAR_18].defval;
                continue;
            } else {
                VAR_17++;
                VAR_19 = VAR_20->value;
            }
        }
        if ((VAR_14[VAR_18].flags & VAR_4) == VAR_2) {
            VAR_15[VAR_18].u_bool = FUNC_5(VAR_19);
        } else if ((VAR_14[VAR_18].flags & VAR_4) == VAR_3) {
            VAR_15[VAR_18].u_int = FUNC_4(VAR_19);
        } else {
            FUNC_1((VAR_14[VAR_18].flags & VAR_4) == VAR_6);
            VAR_15[VAR_18].u_obj = VAR_19;
        }
    }
    if (VAR_16 < VAR_10) {
        extra_positional:
        if (VAR_0 == VAR_1) {
            FUNC_2();
        } else {

            FUNC_7("extra positional arguments given");
        }
    }
    if (VAR_17 < VAR_12->used) {
        if (VAR_0 == VAR_1) {
            FUNC_2();
        } else {

            FUNC_7("extra keyword arguments given");
        }
    }
}
