
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_5__ {int interrupted; int count; } ;
struct TYPE_7__ {TYPE_2__ event; TYPE_1__ tap; } ;
typedef TYPE_3__ keyrecord_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;



 int const* FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int const* VAR_14 ;
 int VAR_15 ;


 int VAR_16 ;






 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_11 (int ) ;

const macro_t *FUNC_12(keyrecord_t *VAR_24, uint8_t VAR_25, uint8_t VAR_26)
{
    switch(VAR_25) {





        case 137:
        if (VAR_24->event.pressed) {
            if(++VAR_23 > 2) VAR_23 = 2;
            if(VAR_21) VAR_22 = !VAR_22;
            FUNC_6(VAR_18);
        } else {
            if(--VAR_23 < 0) VAR_23 = 0;
            if((!VAR_23) && (!VAR_22)) FUNC_5(VAR_18);
        }
        break;

        case 139:
        if (VAR_24->event.pressed) {
           if (VAR_24->tap.count && (!VAR_20) && (!VAR_19) && (!VAR_21)) {
                FUNC_10(VAR_12);
            } else {
                if(VAR_21) VAR_19 = !VAR_19;
                if(++VAR_20 > 2) VAR_20 = 2;
                FUNC_6(VAR_15);
            }
        } else {
            if(VAR_24->tap.count && (!VAR_20) && (!VAR_19) && (!VAR_21)) {
                FUNC_11(VAR_12);
            } else {
                if(--VAR_20 < 0) VAR_20 = 0;
                if((!VAR_20) && (!VAR_19)) FUNC_5(VAR_15);
            }
        }
        break;

        case 138:
        if (VAR_24->event.pressed) {
            if(VAR_23) VAR_22 = !VAR_22;
            else if(VAR_20) VAR_19 = !VAR_19;
            else if (VAR_24->tap.count && !VAR_24->tap.interrupted && (!VAR_21)) {
                FUNC_10(VAR_6);
            } else {
                if(++VAR_21 > 2) VAR_21 = 2;
                FUNC_6(VAR_17);
            }
        } else {
            if(VAR_24->tap.count && !VAR_24->tap.interrupted && (!VAR_21)) {
                FUNC_11(VAR_6);
            } else {
                if(--VAR_21 < 0) VAR_21 = 0;
                if(!VAR_21) FUNC_5(VAR_17);
            }
        }
        break;

        case 128:
        if (VAR_24->event.pressed) {
            if (VAR_24->tap.count && (!VAR_23) && (!VAR_22) && (!VAR_21)) {
                FUNC_10(VAR_11);
            } else {
                if(++VAR_23 > 2) VAR_23 = 2;
                if(VAR_21) VAR_22 = !VAR_22;
                FUNC_6(VAR_18);
            }
        } else {
            if(VAR_24->tap.count && (!VAR_23) && (!VAR_22) && (!VAR_21)) {
                FUNC_11(VAR_11);
            } else {
                if(--VAR_23 < 0) VAR_23 = 0;
                if((!VAR_23) && (!VAR_22)) FUNC_5(VAR_18);
            }
        }
        break;

        case 130:
        if (VAR_24->event.pressed) {
            if (VAR_24->tap.count && (!VAR_20) && (!VAR_19) && (!VAR_21)) {
                FUNC_10(VAR_4);
            } else {
                if(++VAR_20 > 2) VAR_20 = 2;
                if(VAR_21) VAR_19 = !VAR_19;
                FUNC_6(VAR_15);
            }
        } else {
            if(VAR_24->tap.count && (!VAR_20) && (!VAR_19) && (!VAR_21)) {
                FUNC_11(VAR_4);
            } else {
                if(--VAR_20 < 0) VAR_20 = 0;
                if((!VAR_20) && (!VAR_19)) FUNC_5(VAR_15);
            }
        }
        break;

        case 129:
        if (VAR_24->event.pressed) {
            if(VAR_23) VAR_22 = !VAR_22;
            else if(VAR_20) VAR_19 = !VAR_19;
            else if (VAR_24->tap.count && !VAR_24->tap.interrupted && (!VAR_21)) {
                FUNC_10(VAR_5);
            } else {
                if(++VAR_21 > 2) VAR_21 = 2;
                FUNC_6(VAR_17);
            }
        } else {
            if(VAR_24->tap.count && !VAR_24->tap.interrupted && (!VAR_21)) {
                FUNC_11(VAR_5);
            } else {
                if(--VAR_21 < 0) VAR_21 = 0;
                if(!VAR_21) FUNC_5(VAR_17);
            }
        }
        break;

        case 131:
        if (VAR_24->event.pressed) {
            return FUNC_2( FUNC_1(10), FUNC_0(VAR_13), FUNC_3(1), FUNC_4(VAR_13), FUNC_3(VAR_3), VAR_2 );
        }
        break;

        case 140:
        if (VAR_24->event.pressed) {
            return FUNC_2( FUNC_1(10), FUNC_0(VAR_13), FUNC_3(VAR_0), FUNC_4(VAR_13), FUNC_3(VAR_3), VAR_2 );
        }
        break;

        case 136:
        if (VAR_24->event.pressed) {
            return FUNC_2( FUNC_1(10), FUNC_0(VAR_13), FUNC_3(VAR_1), FUNC_4(VAR_13), FUNC_3(VAR_3), VAR_2 );
        }
        break;

        case 141:
        if (VAR_24->event.pressed) {
            return FUNC_2( FUNC_1(10), FUNC_3(VAR_16), FUNC_0(VAR_13), FUNC_3(VAR_1), FUNC_4(VAR_13), VAR_2 );
        }
        break;



        case 133:
        if (VAR_24->event.pressed) {
            FUNC_8(VAR_10);
            FUNC_8(VAR_8);
            FUNC_9();
        } else {
            FUNC_7(VAR_10);
            FUNC_7(VAR_8);
            FUNC_9();
        }
        break;

        case 132:
        if (VAR_24->event.pressed) {
            FUNC_8(VAR_10);
            FUNC_8(VAR_9);
            FUNC_9();
        } else {
            FUNC_7(VAR_10);
            FUNC_7(VAR_9);
            FUNC_9();
        }
        break;

        case 135:
        if (VAR_24->event.pressed) {
            FUNC_8(VAR_7);
            FUNC_8(VAR_8);
            FUNC_9();
        } else {
            FUNC_7(VAR_7);
            FUNC_7(VAR_8);
            FUNC_9();
        }
        break;

        case 134:
        if (VAR_24->event.pressed) {
            FUNC_8(VAR_7);
            FUNC_8(VAR_9);
            FUNC_9();
        } else {
            FUNC_7(VAR_7);
            FUNC_7(VAR_9);
            FUNC_9();
        }
        break;

        default:

            break;
    }

    return VAR_14;
}
