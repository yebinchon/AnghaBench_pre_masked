
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {int key; scalar_t__ pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
typedef unsigned long int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 unsigned long VAR_10 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 unsigned long VAR_11 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int,TYPE_2__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ,int ) ;

bool FUNC_17(uint16_t VAR_12, keyrecord_t *VAR_13) {
    static uint16_t VAR_14;
    static uint8_t VAR_15 = 0;

    uint16_t VAR_16 = (VAR_12 == FUNC_1(VAR_4) ? VAR_0 : VAR_12);
    if (!FUNC_12(VAR_16, VAR_13)) {
        return 0;
    }

    if (VAR_15 > 0 && VAR_12 != FUNC_1(VAR_4) && VAR_12 != 136 && !VAR_13->event.pressed) {
        VAR_15 -= 1;
        return 0;
    }

    switch (VAR_12) {
    case 135:
        if (VAR_13->event.pressed) {
            FUNC_10(VAR_5);
        } else {
            FUNC_9(VAR_5);
        }
        FUNC_16(VAR_5, VAR_9, VAR_3);
        return 0;
        break;
    case 131:
        if (VAR_13->event.pressed) {
            FUNC_10(VAR_9);
        } else {
            FUNC_9(VAR_9);
        }
        FUNC_16(VAR_5, VAR_9, VAR_3);
        return 0;
        break;
    case 129:
        FUNC_13(VAR_1);
        break;
    case 136:
        if (!VAR_13->event.pressed) {
            VAR_15 += 1;
        }
        break;
    case 130:
    {

        if ((1UL << VAR_7) & VAR_10) {
            int32_t VAR_17 = VAR_10;
            int32_t VAR_18 = VAR_11;

            VAR_11 = 0;
            VAR_10 = (1UL << VAR_8);

            FUNC_11(VAR_13);

            VAR_11 = VAR_18;
            VAR_10 = VAR_17;

            return 0;
        }
    }

        if (VAR_13->event.pressed) {
            VAR_14 = FUNC_15();
        } else {
            if (FUNC_14(VAR_14) >= 500) {
                FUNC_5();
                FUNC_3();
                FUNC_2(250);
                FUNC_3();
                FUNC_4();
            }
        }
        break;
    case 133:
        if (!VAR_13->event.pressed) {
            FUNC_7();
        }
        break;
    case 132:
        if (VAR_13->event.pressed) {
            VAR_14 = FUNC_15();
        } else {
            if (FUNC_14(VAR_14) >= 250) {
                FUNC_7();
            } else {
                FUNC_6(1UL << VAR_7);
            }
        }
        break;
    case 134:
        FUNC_10(VAR_6);
        break;
    case 128:
        if (VAR_13->event.pressed) {
            FUNC_2(250);
        }
        break;
    }


    if (VAR_13->event.pressed
        && FUNC_0(VAR_6)
        && FUNC_8(VAR_6, VAR_13->event.key) == VAR_2) {

        FUNC_9(VAR_6);
    }

    return 1;
}
