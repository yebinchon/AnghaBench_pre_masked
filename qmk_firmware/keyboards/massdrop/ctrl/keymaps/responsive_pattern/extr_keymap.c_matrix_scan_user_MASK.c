
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int PATTERN_INDEX; int WAVE_FRONT_WIDTH; size_t COLOR_PATTERN_INDEX; } ;
struct TYPE_3__ {int state; } ;



 int*** VAR_0 ;
 int VAR_1 ;

 int* VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 TYPE_1__* VAR_7 ;

 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int,int,int ) ;
 int FUNC_5 (int,int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int) ;

void FUNC_10(void) {
    static uint32_t VAR_9 = 0;
    static uint8_t VAR_10 = 0;

    uint8_t VAR_11 = 0;
    if(VAR_8 >= 0x04){
        VAR_11 = 2;
    } else if(VAR_8 >= 0x02){
        VAR_11 = 1;
    }

    FUNC_0();





    uint8_t VAR_12;
    uint8_t *VAR_13;
    uint8_t VAR_14;
    uint8_t VAR_15;
    for(uint8_t VAR_16 = 1; VAR_16 <= VAR_5; ++VAR_16){
        if(VAR_7[VAR_16-1].state >= 2) continue;

        VAR_14 = 0;
        VAR_15 = VAR_2[VAR_16];

        switch(VAR_6.PATTERN_INDEX){
        case 0: VAR_14 = 0; break;
        case 1: VAR_14 = VAR_15 ? 0 : 1; break;
        case 2: VAR_14 = VAR_15 ? 1 : 0; break;
        case 3: VAR_14 = VAR_15 ? 2 : 1; break;
        case 4: VAR_14 = VAR_15 ? 2 : 0; break;
        case 5:
        case 6: VAR_14 = VAR_15 ? 2 : 0; break;
        }
        switch(VAR_14){
        case 0: FUNC_9(VAR_16); break;
        case 1: FUNC_5(VAR_16, 0, 0, 0); break;
        case 2:
            VAR_12 = (VAR_2[VAR_16] * VAR_1 /
                    VAR_6.WAVE_FRONT_WIDTH) % VAR_1;
            VAR_13 = &VAR_0[VAR_6.COLOR_PATTERN_INDEX][VAR_12][0];

            FUNC_5(VAR_16, VAR_13[0], VAR_13[1], VAR_13[2]);
            break;
        }
    }



    if(VAR_11 != VAR_10){

        static uint8_t VAR_17[] = {
            133, 130, 141, 143, 132, 142, 134,
        };
        static uint8_t VAR_18[] = {
            129, 131, 139, 135, 140, 138, 137, 136,
        };

        switch(VAR_10){
        case 1:
            for(uint8_t VAR_19 = 0; VAR_19 < 7; ++VAR_19){
                FUNC_8(FUNC_1(VAR_17[VAR_19]), 1);
            }
            break;
        case 2:
            for(uint8_t VAR_20 = 0; VAR_20 < 6; ++VAR_20){
                FUNC_8(FUNC_1(VAR_17[VAR_20]), 2);
            }
            for(uint8_t VAR_21 = 0; VAR_21 < 8; ++VAR_21){
                FUNC_8(FUNC_1(VAR_18[VAR_21]), 2);
            }
            FUNC_8(FUNC_1(VAR_4), 2);
            FUNC_8(FUNC_1(VAR_3), 2);
            break;
        }


        switch(VAR_11){
        case 1:
            for(uint8_t VAR_22 = 0; VAR_22 < 7; ++VAR_22){
                FUNC_4(FUNC_1(VAR_17[VAR_22]), 1, 255, 0, 0);
            }
            break;
        case 2:
            for(uint8_t VAR_23 = 0; VAR_23 < 6; ++VAR_23){
                FUNC_4(FUNC_1(VAR_17[VAR_23]), 2, 0, 255, 0);
            }
            for(uint8_t VAR_24 = 0; VAR_24 < 8; ++VAR_24){
                FUNC_4(FUNC_1(VAR_18[VAR_24]), 2, 0, 255, 0);
            }
            FUNC_4(FUNC_1(VAR_4), 2, 0, 255, 0);
            FUNC_4(FUNC_1(VAR_3), 2, 0, 255, 0);
            break;
        }

        FUNC_3();
        FUNC_2();
        VAR_10 = VAR_11;
    }


    switch(VAR_11){
    case 0:
        if(FUNC_6(VAR_9) > 2000){
            VAR_9 = FUNC_7();
        } else if(FUNC_6(VAR_9) > 1000){

        }
        break;
    case 1:
        break;
    case 2:
        break;
    }

}
