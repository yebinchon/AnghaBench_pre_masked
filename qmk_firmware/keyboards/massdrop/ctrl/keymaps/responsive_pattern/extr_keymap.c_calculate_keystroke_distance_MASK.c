
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
struct TYPE_4__ {int alive; size_t led_id; int time; } ;
struct TYPE_3__ {size_t WAVE_PERIOD; size_t WAVE_FRONT_WIDTH; scalar_t__ TRAVEL_DISTANCE; int PATTERN_INDEX; } ;


 int* VAR_0 ;
 scalar_t__** VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__ VAR_5 ;
 size_t FUNC_0 (int ) ;

void FUNC_1(void){
    bool VAR_6;
    uint8_t VAR_7, VAR_8;
    uint32_t VAR_9;


    for(uint8_t VAR_10 = 0; VAR_10 <= VAR_2; ++VAR_10){
        VAR_0[VAR_10] = 0;
    }

    for(uint8_t VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11){
        if(VAR_3[VAR_11].alive){
            VAR_9 = FUNC_0(VAR_3[VAR_11].time);
            VAR_6 = 0;
            VAR_7 = VAR_3[VAR_11].led_id;
            VAR_8 = VAR_9 / VAR_5.WAVE_PERIOD;

            uint8_t VAR_12;
            for(uint8_t VAR_13 = 1; VAR_13 <= VAR_2; ++VAR_13){
                VAR_12 = VAR_8 - VAR_1[VAR_7][VAR_13];
                if(( VAR_12 < VAR_5.WAVE_FRONT_WIDTH) && (
                    VAR_1[VAR_7][VAR_13] <= VAR_5.TRAVEL_DISTANCE
                )){
                    switch(VAR_5.PATTERN_INDEX){
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                        VAR_0[VAR_13] += VAR_12;
                        break;
                    default:
                        VAR_0[VAR_13] = 1;
                        break;
                    }
                    VAR_6 = 1;
                }
            }
            VAR_3[VAR_11].alive = VAR_6;
        }
    }
}
