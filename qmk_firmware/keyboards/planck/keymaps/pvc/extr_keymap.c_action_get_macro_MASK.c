
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int const* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
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
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (unsigned long) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (char*) ;

const macro_t *FUNC_21(keyrecord_t *VAR_17, uint8_t VAR_18, uint8_t VAR_19)
{


    switch(VAR_18)
    {

        case 151:
            if (VAR_17->event.pressed)
            {
    FUNC_20("1");
            }
            break;

        case 150:
            if (VAR_17->event.pressed)
            {
    FUNC_20("2");
            }
            break;

        case 149:
            if (VAR_17->event.pressed)
            {
    FUNC_20("3");
            }
            break;

        case 148:
            if (VAR_17->event.pressed)
            {
    FUNC_20("4");
            }
            break;

        case 147:
            if (VAR_17->event.pressed)
            {
    FUNC_20("5");
            }
            break;

        case 146:
            if (VAR_17->event.pressed)
            {
    FUNC_20("6");
            }
            break;

        case 145:
            if (VAR_17->event.pressed)
            {
    FUNC_20("7");
            }
            break;

        case 144:
            if (VAR_17->event.pressed)
            {
    FUNC_20("8");
            }
            break;

        case 143:
            if (VAR_17->event.pressed)
            {
    FUNC_20("9");
            }
            break;

        case 153:
            if (VAR_17->event.pressed)
            {



            }
            break;

        case 154:
            if (VAR_17->event.pressed)
            {



            }
            break;

        case 155:
            if (VAR_17->event.pressed)
            {



            }
            break;

        case 156:
            if (VAR_17->event.pressed)
            {



            }
            break;

        case 136:
            if (VAR_17->event.pressed)
            {
                FUNC_16(1UL<<VAR_8);
            }
            break;

        case 128:
            if (VAR_17->event.pressed)
            {
                FUNC_13(VAR_9);




                FUNC_19(VAR_6, VAR_9, VAR_4);
            }
            else
            {
                FUNC_12(VAR_9);
                FUNC_19(VAR_6, VAR_9, VAR_4);
            }
            break;

        case 142:
            if (VAR_17->event.pressed)
            {
                FUNC_13(VAR_6);




                FUNC_19(VAR_6, VAR_9, VAR_4);
            }
            else
            {
                FUNC_12(VAR_6);
                FUNC_19(VAR_6, VAR_9, VAR_4);
            }
            break;

        case 152:
            if (VAR_17->event.pressed)
            {




                FUNC_13(VAR_5);
            }
            else
            {




                FUNC_12(VAR_5);
            }
            break;
        default:
            break;

    }
    return VAR_10;
}
