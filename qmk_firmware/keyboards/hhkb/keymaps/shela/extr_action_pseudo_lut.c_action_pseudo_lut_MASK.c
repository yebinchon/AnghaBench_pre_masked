
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ pressed; int key; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mods; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int const**,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int,int) ;
 scalar_t__ FUNC_11 (int) ;
 TYPE_3__* VAR_3 ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;

void FUNC_16(keyrecord_t *VAR_4, uint8_t VAR_5, const uint16_t (*VAR_6)[2]) {
    uint8_t VAR_7;
    uint16_t VAR_8;
    uint16_t VAR_9;


    VAR_8 = FUNC_12(VAR_5, VAR_4->event.key);

    VAR_7 = VAR_3->mods & (FUNC_2(VAR_0) | FUNC_2(VAR_1));

    if (VAR_4->event.pressed) {

        if (FUNC_0()) {
            if (VAR_7) {
                FUNC_4(VAR_8);
            }
            FUNC_13(VAR_8);
            return;
        }

        if (VAR_7) {
            VAR_9 = FUNC_6(VAR_6, VAR_8, 1);
            FUNC_10("pressed: %02X, converted: %04X\n", VAR_8, VAR_9);
            FUNC_4(VAR_8);

            if (FUNC_1(VAR_9)) {
                FUNC_13(VAR_2 ^ VAR_9);
            } else {

                FUNC_7(VAR_7);
                FUNC_14();
                FUNC_13(VAR_9);
                FUNC_3(VAR_7);
                FUNC_14();
            }
        } else {
            VAR_9 = FUNC_6(VAR_6, VAR_8, 0);
            FUNC_10("pressed: %02X, converted: %04X\n", VAR_8, VAR_9);

            if (FUNC_1(VAR_9)) {
                FUNC_5(FUNC_2(VAR_0));
                FUNC_14();
                FUNC_13(VAR_2 ^ VAR_9);

                FUNC_15(VAR_2 ^ VAR_9);
                FUNC_9(FUNC_2(VAR_0));
                FUNC_14();
            } else {
                FUNC_13(VAR_9);
            }
        }
    } else {
        if (FUNC_11(VAR_8)) {
            FUNC_8(VAR_8);
            VAR_9 = FUNC_6(VAR_6, VAR_8, 1);
        } else {
            VAR_9 = FUNC_6(VAR_6, VAR_8, 0);
        }
        FUNC_10("released: %02X, converted: %04X\n", VAR_8, VAR_9);

        if (FUNC_1(VAR_9)) {
            FUNC_15(VAR_2 ^ VAR_9);
        } else {
            FUNC_15(VAR_9);
        }
    }
}
