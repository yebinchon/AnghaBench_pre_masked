
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_9__ {int alive; int led_id; void* time; } ;
struct TYPE_8__ {int PATTERN_INDEX; int TRAVEL_DISTANCE; int COLOR_PATTERN_INDEX; int WAVE_PERIOD; int WAVE_FRONT_WIDTH; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int) ;
 TYPE_5__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*) ;
 TYPE_4__ VAR_12 ;


 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_2 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (void*) ;
 void* FUNC_7 () ;
 int VAR_28 ;
 int VAR_29 ;

bool FUNC_8(uint16_t VAR_30, keyrecord_t *VAR_31) {
    static uint32_t VAR_32;


    switch (VAR_30) {
        case 149:
            if (VAR_31->event.pressed) {
                if (VAR_6 > VAR_5 - VAR_19) VAR_19 = VAR_5;
                else VAR_19 += VAR_6;
                if (VAR_21) VAR_18 = VAR_19;
            }
            return 0;
        case 150:
            if (VAR_31->event.pressed) {
                if (VAR_6 > VAR_19) VAR_19 = 0;
                else VAR_19 -= VAR_6;
                if (VAR_21) VAR_18 = VAR_19;
            }
            return 0;
        case 142:
            if (VAR_31->event.pressed) {
                if (VAR_23 == VAR_27 - 1) VAR_23 = 0;
                else VAR_23++;
            }
            return 0;
        case 141:
            if (VAR_31->event.pressed) {
                if (VAR_23 == 0) VAR_23 = VAR_27 - 1;
                else VAR_23--;
            }
            return 0;
        case 143:
            if (VAR_31->event.pressed) {
                VAR_24 += VAR_0;
            }
            return 0;
        case 144:
            if (VAR_31->event.pressed) {
                VAR_24 -= VAR_0;
                if (VAR_24 < 0) VAR_24 = 0;
            }
            return 0;
        case 133:
            if (VAR_31->event.pressed) {
                VAR_26++;
                if (VAR_26 > VAR_7) VAR_26 = VAR_8;
            }
            return 0;
        case 132:
            if (VAR_31->event.pressed) {
                VAR_25 = !VAR_25;
                FUNC_0(VAR_25);
            }
            return 0;
        case 145:
            if (VAR_31->event.pressed) {
                VAR_25 = 1;
                FUNC_0(VAR_25);
            }
            return 0;
        case 146:
            if (VAR_31->event.pressed) {
                VAR_25 = 0;
                FUNC_0(VAR_25);
            }
            return 0;
        case 134:
            if (VAR_31->event.pressed) {
                VAR_21 = !VAR_21;
                if (VAR_21) {
                    VAR_18 = VAR_19;
                    VAR_20 = VAR_1;
                    VAR_13 = 1;
                }
            }
            return 0;
        case 131:
            if (VAR_31->event.pressed) {
                VAR_22 = !VAR_22;
            }
            return 0;
        case 128:
            if (VAR_31->event.pressed && VAR_10 && VAR_9) {
                FUNC_1(VAR_28, "USB extra port manual mode");
            }
            return 0;
        case 129:
            if (VAR_31->event.pressed && VAR_10 && VAR_9) {
                FUNC_1(VAR_29, "USB GCR auto mode");
            }
            return 0;
        case 151:
            if (VAR_31->event.pressed) {
                FUNC_1(VAR_14, "Debug mode");
            }
            return 0;
        case 152:
            if (VAR_31->event.pressed) {
                FUNC_1(VAR_16, "Debug matrix");
            }
            return 0;
        case 154:
            if (VAR_31->event.pressed) {
                FUNC_1(VAR_15, "Debug keyboard");
            }
            return 0;
        case 153:
            if (VAR_31->event.pressed) {
                FUNC_1(VAR_17, "Debug mouse");
            }
            return 0;
        case 130:
            if (VAR_31->event.pressed) {
                VAR_32 = FUNC_7();
            } else {
                if (FUNC_6(VAR_32) >= 500) {
                    FUNC_5();
                }
            }
            return 0;
        case 137:
        case 139:
            if (VAR_31->event.pressed) {

                uint8_t VAR_33 = VAR_30 == 137 ? 7 -1 : 1;
                VAR_12.PATTERN_INDEX += VAR_33;
                VAR_12.PATTERN_INDEX %= 7;

                if(VAR_12.PATTERN_INDEX <= 4){
                    VAR_12.TRAVEL_DISTANCE = 25;
                    VAR_12.COLOR_PATTERN_INDEX = 0;
                    VAR_12.WAVE_PERIOD = 50;
                }

                switch(VAR_12.PATTERN_INDEX){
                case 0:
                    break;
                case 1:
                    VAR_12.WAVE_FRONT_WIDTH = 2;
                    break;
                case 2:
                    VAR_12.WAVE_FRONT_WIDTH = 5;
                    break;
                case 3:
                    VAR_12.WAVE_FRONT_WIDTH = 10;
                    break;
                case 4:
                    VAR_12.WAVE_FRONT_WIDTH = 10;
                    break;
                case 5:
                    VAR_12.WAVE_FRONT_WIDTH = 10;

                    VAR_12.COLOR_PATTERN_INDEX = 2;
                    VAR_12.TRAVEL_DISTANCE = 0;
                    VAR_12.WAVE_PERIOD = 100;
                    break;
                case 6:
                    VAR_12.WAVE_FRONT_WIDTH = 25;

                    VAR_12.COLOR_PATTERN_INDEX = 3;
                    VAR_12.TRAVEL_DISTANCE = 2;
                    VAR_12.WAVE_PERIOD = 10;
                    break;
                }


                for(int VAR_34 = 0; VAR_34 < VAR_4; ++VAR_34){
                    VAR_3[VAR_34].alive = 0;
                }
                FUNC_4();
                FUNC_3();
            }
            return 0;
        case 135:
        case 138:
            if(VAR_31->event.pressed){
                short VAR_35 = VAR_30 == 135 ? 1 : -1;
                VAR_12.WAVE_FRONT_WIDTH += VAR_35;
                if(VAR_12.WAVE_FRONT_WIDTH < 1){
                    VAR_12.WAVE_FRONT_WIDTH = 1;
                }
            }
            return 0;
        case 140:
        case 136:
            if(VAR_31->event.pressed){
                short VAR_36 = VAR_30 == 140 ? -1 : 1;

                VAR_12.WAVE_PERIOD += 10 * VAR_36;
                if(VAR_12.WAVE_PERIOD < 10){
                    VAR_12.WAVE_PERIOD = 10;
                }
            }
            return 0;

        case 147:
        case 148:
            if(VAR_31->event.pressed){
                uint8_t VAR_37 = VAR_30 == 147 ? VAR_2 - 1 : 1;
                VAR_12.COLOR_PATTERN_INDEX += VAR_37;
                VAR_12.COLOR_PATTERN_INDEX %= VAR_2;
                FUNC_3();
            }
            return 0;
        default:
            if (VAR_31->event.pressed){
                uint8_t VAR_38 = FUNC_2(VAR_30);
                if(VAR_38){
                    for(int VAR_39 = 0; VAR_39 < VAR_4; ++VAR_39){
                        if(!VAR_3[VAR_39].alive){
                            VAR_3[VAR_39].alive = 1;
                            VAR_3[VAR_39].led_id = VAR_38;
                            VAR_3[VAR_39].time = FUNC_7();
                            break;
                        }
                    }
                }
            }
            return 1;
    }
}
