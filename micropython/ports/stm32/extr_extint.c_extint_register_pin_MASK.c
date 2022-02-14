
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {size_t pin; size_t name; int gpio; } ;
typedef TYPE_1__ pin_obj_t ;
typedef scalar_t__ mp_obj_t ;
struct TYPE_7__ {int* EXTICR; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 scalar_t__* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (size_t,size_t) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,char*,size_t) ;
 int VAR_5 ;
 int FUNC_13 (int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 int* VAR_9 ;
 int * VAR_10 ;

void FUNC_14(const pin_obj_t *VAR_11, uint32_t VAR_12, bool VAR_13, mp_obj_t VAR_14) {
    uint32_t VAR_15 = VAR_11->pin;


    mp_obj_t *VAR_16 = &FUNC_5(VAR_7)[VAR_15];
    if (*VAR_16 != VAR_4 && FUNC_3(VAR_11) != VAR_8[VAR_15]) {
        if (FUNC_11(VAR_8[VAR_15])) {
            FUNC_13(FUNC_12(&VAR_5,
                "ExtInt vector %d is already in use", VAR_15));
        } else {
            const pin_obj_t *VAR_17 = FUNC_4(VAR_8[VAR_15]);
            FUNC_13(FUNC_12(&VAR_5,
                "IRQ resource already taken by Pin('%q')", VAR_17->name));
        }
    }

    FUNC_8(VAR_15);

    *VAR_16 = VAR_14;
    VAR_10[VAR_15] = (VAR_12 & 0x00010000) ?
        VAR_1 : VAR_0;

    if (*VAR_16 != VAR_4) {


        VAR_9[VAR_15] = VAR_13;
        VAR_8[VAR_15] = FUNC_3(VAR_11);



        FUNC_7();

        VAR_3->EXTICR[VAR_15 >> 2] =
            (VAR_3->EXTICR[VAR_15 >> 2] & ~(0x0f << (4 * (VAR_15 & 0x03))))
            | ((uint32_t)(FUNC_0(VAR_11->gpio)) << (4 * (VAR_15 & 0x03)));

        FUNC_10(VAR_15, VAR_12);


        FUNC_6(FUNC_2(VAR_6[VAR_15]), VAR_2);
        FUNC_1(VAR_6[VAR_15]);


        FUNC_9(VAR_15);
    }
}
