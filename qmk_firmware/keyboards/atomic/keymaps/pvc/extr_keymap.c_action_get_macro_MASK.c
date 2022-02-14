
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int const* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (unsigned long) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (char*) ;

const macro_t *FUNC_19(keyrecord_t *VAR_13, uint8_t VAR_14, uint8_t VAR_15) {


  switch(VAR_14) {

        case 147:
            if (VAR_13->event.pressed)
            {
        FUNC_18("1");
            }
            break;

        case 146:
            if (VAR_13->event.pressed)
            {
        FUNC_18("2");
            }
            break;

        case 145:
            if (VAR_13->event.pressed)
            {
        FUNC_18("3");
            }
            break;

        case 144:
            if (VAR_13->event.pressed)
            {
        FUNC_18("4");
            }
            break;

        case 143:
            if (VAR_13->event.pressed)
            {
        FUNC_18("5");
            }
            break;

        case 142:
            if (VAR_13->event.pressed)
            {
        FUNC_18("6");
            }
            break;

        case 141:
            if (VAR_13->event.pressed)
            {
        FUNC_18("7");
            }
            break;

        case 140:
            if (VAR_13->event.pressed)
            {
        FUNC_18("8");
            }
            break;

        case 139:
            if (VAR_13->event.pressed)
            {
        FUNC_18("9");
            }
            break;

        case 149:
            if (VAR_13->event.pressed)
            {
                FUNC_8();
            }
            break;

        case 150:
            if (VAR_13->event.pressed)
            {
                FUNC_4();
            }
            break;

        case 151:
            if (VAR_13->event.pressed)
            {
                FUNC_2();
            }
            break;

        case 152:
            if (VAR_13->event.pressed)
            {
                FUNC_3();
            }
            break;

        case 136:
            if (VAR_13->event.pressed)
            {
                FUNC_14(1UL<<VAR_4);
            }
            break;

        case 128:
            if (VAR_13->event.pressed)
            {
                FUNC_13(VAR_5);
                FUNC_5(2);
                FUNC_6();
                FUNC_17(VAR_2, VAR_5, VAR_0);
            }
            else
            {
                FUNC_12(VAR_5);
                FUNC_17(VAR_2, VAR_5, VAR_0);
            }
            break;

        case 138:
            if (VAR_13->event.pressed)
            {
                FUNC_13(VAR_2);
                FUNC_5(2);
                FUNC_6();
                FUNC_17(VAR_2, VAR_5, VAR_0);
            }
            else
            {
                FUNC_12(VAR_2);
                FUNC_17(VAR_2, VAR_5, VAR_0);
            }
            break;

        case 148:
            if (VAR_13->event.pressed)
            {
                FUNC_5(3);
                FUNC_1();
                FUNC_13(VAR_1);
            }
            else
            {
                FUNC_5(1);
                FUNC_7();
                FUNC_12(VAR_1);
            }
            break;
        default:
            break;

    }
    return VAR_6;
}
