
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ mp_obj_t ;
typedef int mp_int_t ;
struct TYPE_6__ {int IMR1; int RTSR1; int IMR; int RTSR; int PR1; int PR; } ;
struct TYPE_5__ {int IMR1; int PR1; } ;
struct TYPE_4__ {int WPR; int CR; int ISR; int WUTR; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ const VAR_10 ;
 int FUNC_4 (scalar_t__ const) ;
 int FUNC_5 (char*) ;
 int VAR_11 ;
 int FUNC_6 () ;

mp_obj_t FUNC_7(size_t VAR_12, const mp_obj_t *VAR_13) {
    FUNC_6();


    FUNC_0(VAR_9);

    bool VAR_14 = 0;
    mp_int_t VAR_15;
    mp_int_t VAR_16;
    mp_obj_t VAR_17 = VAR_10;
    if (VAR_12 <= 3) {
        if (VAR_13[1] == VAR_10) {

        } else {

            mp_int_t VAR_18 = FUNC_4(VAR_13[1]);
            mp_int_t VAR_19 = 2;
            VAR_15 = 3;
            while (VAR_19 <= 16 && VAR_18 > 2000 * VAR_19) {
                VAR_19 *= 2;
                VAR_15 -= 1;
            }
            if (VAR_19 <= 16) {
                VAR_16 = 32768 / VAR_19 * VAR_18 / 1000;
            } else {

                VAR_15 = 4;
                VAR_16 = VAR_18 / 1000;
                if (VAR_16 > 0x10000) {

                    VAR_15 = 6;
                    VAR_16 -= 0x10000;
                    if (VAR_16 > 0x10000) {

                        FUNC_5("wakeup value too large");
                    }
                }
            }

            if (VAR_16 > 0) {
                VAR_16 -= 1;
            }
            VAR_14 = 1;
        }
        if (VAR_12 == 3) {
            VAR_17 = VAR_13[2];
        }
    } else {

        VAR_15 = FUNC_4(VAR_13[1]);
        VAR_16 = FUNC_4(VAR_13[2]);
        VAR_17 = VAR_13[3];
        VAR_14 = 1;
    }


    FUNC_2(VAR_11)[VAR_2] = VAR_17;


    VAR_4->WPR = 0xca;
    VAR_4->WPR = 0x53;


    VAR_4->CR &= ~VAR_5;


    while (!(VAR_4->ISR & VAR_8)) {
    }

    if (VAR_14) {

        VAR_4->WUTR = VAR_16;




        VAR_4->CR = (VAR_4->CR & ~7) | (1 << 14) | (1 << 10) | (VAR_15 & 7);


        VAR_4->WPR = 0xff;
        VAR_0->IMR |= 1 << VAR_2;
        VAR_0->RTSR |= 1 << VAR_2;



        VAR_4->ISR &= ~VAR_7;





        VAR_0->PR = 1 << VAR_2;


        FUNC_3(VAR_9, VAR_3);
        FUNC_1(VAR_9);


    } else {

        VAR_4->CR &= ~VAR_6;


        VAR_4->WPR = 0xff;







        VAR_0->IMR &= ~(1 << VAR_2);

    }

    return VAR_10;
}
