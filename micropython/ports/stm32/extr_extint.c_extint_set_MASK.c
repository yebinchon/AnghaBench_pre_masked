
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t pin; int gpio; } ;
typedef TYPE_1__ pin_obj_t ;
typedef int mp_obj_t ;
struct TYPE_6__ {int* EXTICR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int VAR_7 ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_3__* VAR_8 ;
 int FUNC_6 () ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (size_t) ;
 int * VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int* VAR_12 ;
 int * VAR_13 ;

void FUNC_9(const pin_obj_t *VAR_14, uint32_t VAR_15) {
    uint32_t VAR_16 = VAR_14->pin;

    mp_obj_t *VAR_17 = &FUNC_4(VAR_10)[VAR_16];

    FUNC_7(VAR_16);

    *VAR_17 = VAR_7;

    VAR_13[VAR_16] = (VAR_15 & 0x00010000) ?
        VAR_2 : VAR_1;

    {


        VAR_12[VAR_16] = 1;
        VAR_11[VAR_16] = FUNC_3(VAR_14);



        FUNC_6();

        VAR_8->EXTICR[VAR_16 >> 2] =
            (VAR_8->EXTICR[VAR_16 >> 2] & ~(0x0f << (4 * (VAR_16 & 0x03))))
            | ((uint32_t)(FUNC_0(VAR_14->gpio)) << (4 * (VAR_16 & 0x03)));


        if ((VAR_15 & VAR_5) == VAR_5) {
            VAR_3 |= 1 << VAR_16;
        } else {
            VAR_3 &= ~(1 << VAR_16);
        }


        if ((VAR_15 & VAR_4) == VAR_4) {
            VAR_0 |= 1 << VAR_16;
        } else {
            VAR_0 &= ~(1 << VAR_16);
        }


        FUNC_5(FUNC_2(VAR_9[VAR_16]), VAR_6);
        FUNC_1(VAR_9[VAR_16]);


        FUNC_8(VAR_16);
    }
}
