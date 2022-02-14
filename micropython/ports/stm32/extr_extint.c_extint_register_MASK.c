
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint ;
struct TYPE_5__ {int pin; int gpio; int pin_mask; } ;
typedef TYPE_1__ pin_obj_t ;
typedef scalar_t__ mp_obj_t ;
struct TYPE_6__ {int Mode; int Pull; int Speed; int Pin; } ;
typedef TYPE_2__ GPIO_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,char*,int,...) ;
 int VAR_15 ;
 int FUNC_13 (int ) ;
 int * VAR_16 ;
 TYPE_1__* FUNC_14 (scalar_t__) ;
 int VAR_17 ;
 int * VAR_18 ;
 int* VAR_19 ;
 int * VAR_20 ;

uint FUNC_15(mp_obj_t VAR_21, uint32_t VAR_22, uint32_t VAR_23, mp_obj_t VAR_24, bool VAR_25) {
    const pin_obj_t *VAR_26 = ((void*)0);
    uint VAR_27;

    if (FUNC_11(VAR_21)) {



        VAR_27 = FUNC_10(VAR_21);
        if (VAR_27 < 16) {
            FUNC_13(FUNC_12(&VAR_15, "ExtInt vector %d < 16, use a Pin object", VAR_27));
        }
        if (VAR_27 >= VAR_2) {
            FUNC_13(FUNC_12(&VAR_15, "ExtInt vector %d >= max of %d", VAR_27, VAR_2));
        }
    } else {
        VAR_26 = FUNC_14(VAR_21);
        VAR_27 = VAR_26->pin;
    }
    if (VAR_22 != VAR_7 &&
        VAR_22 != VAR_6 &&
        VAR_22 != VAR_8 &&
        VAR_22 != VAR_4 &&
        VAR_22 != VAR_3 &&
        VAR_22 != VAR_5) {
        FUNC_13(FUNC_12(&VAR_15, "invalid ExtInt Mode: %d", VAR_22));
    }
    if (VAR_23 != VAR_9 &&
        VAR_23 != VAR_11 &&
        VAR_23 != VAR_10) {
        FUNC_13(FUNC_12(&VAR_15, "invalid ExtInt Pull: %d", VAR_23));
    }

    mp_obj_t *VAR_28 = &FUNC_4(VAR_17)[VAR_27];
    if (!VAR_25 && *VAR_28 != VAR_14 && VAR_24 != VAR_14) {
        FUNC_13(FUNC_12(&VAR_15, "ExtInt vector %d is already in use", VAR_27));
    }




    FUNC_6(VAR_27);

    *VAR_28 = VAR_24;
    VAR_20[VAR_27] = (VAR_22 & 0x00010000) ?
        VAR_1 : VAR_0;

    if (*VAR_28 != VAR_14) {
        VAR_19[VAR_27] = 1;
        VAR_18[VAR_27] = FUNC_3(VAR_27);

        if (VAR_26 == ((void*)0)) {

            FUNC_8(VAR_27, VAR_22);
            FUNC_7(VAR_27);
        } else {
            FUNC_9(VAR_26->gpio);
            GPIO_InitTypeDef VAR_29;
            VAR_29.Pin = VAR_26->pin_mask;
            VAR_29.Mode = VAR_22;
            VAR_29.Pull = VAR_23;
            VAR_29.Speed = VAR_12;
            FUNC_0(VAR_26->gpio, &VAR_29);


        }


        FUNC_5(FUNC_2(VAR_16[VAR_27]), VAR_13);
        FUNC_1(VAR_16[VAR_27]);
    }
    return VAR_27;
}
