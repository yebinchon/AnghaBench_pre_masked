
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_8__ {int nkro; int raw; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int ) ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 TYPE_5__ VAR_12 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int ) ;

bool FUNC_16(uint16_t VAR_17, keyrecord_t *VAR_18) {
    switch (VAR_17) {
        case 131:
            if (VAR_18->event.pressed) {
                FUNC_10(VAR_9);

                FUNC_11(VAR_9);
            }
            return 0;

        case 137:
            if (VAR_18->event.pressed) {
                FUNC_10(VAR_6);

                FUNC_11(VAR_6);
            }
            return 0;

        case 130:
            if (VAR_18->event.pressed) {
                FUNC_10(VAR_10);

                FUNC_11(VAR_10);
            }
            return 0;

        case 134:
            if (VAR_18->event.pressed) {
                FUNC_7(VAR_7);
                FUNC_15(VAR_7, VAR_11, VAR_5);
            } else {
                FUNC_6(VAR_7);
                FUNC_15(VAR_7, VAR_11, VAR_5);
            }
            return 0;

        case 129:
            if (VAR_18->event.pressed) {
                FUNC_7(VAR_11);
                FUNC_15(VAR_7, VAR_11, VAR_5);
            } else {
                FUNC_6(VAR_11);
                FUNC_15(VAR_7, VAR_11, VAR_5);
            }
            return 0;

        case 138:
            if (VAR_18->event.pressed) {
                FUNC_9(VAR_4);



            } else {
                FUNC_14(VAR_4);
            }
            return 0;

        case 132:
            if (VAR_18->event.pressed) {




                FUNC_6(VAR_11);
                FUNC_6(VAR_7);
                FUNC_6(VAR_5);
                FUNC_7(VAR_8);
                if (!FUNC_3()) {
                        FUNC_2();
                }
                VAR_12.raw = FUNC_4();
                VAR_12.nkro = 1;
                FUNC_5(VAR_12.raw);
            }
            return 0;

        case 136:
            if (VAR_18->event.pressed) {



                FUNC_6(VAR_8);
            }
            return 0;

        case 128:
            if (VAR_18->event.pressed) {
                bool VAR_19 = FUNC_13();
            }
            return 0;




        case 135:
            FUNC_8(VAR_18, VAR_1, VAR_2, VAR_3);
            return 0;


        case 133:
            FUNC_8(VAR_18, VAR_2, VAR_2, VAR_0);
            return 0;

        default:
            return 1;
    }
    return 1;
}
