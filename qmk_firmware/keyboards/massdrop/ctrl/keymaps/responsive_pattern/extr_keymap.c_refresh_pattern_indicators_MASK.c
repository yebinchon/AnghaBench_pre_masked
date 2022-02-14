
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int PATTERN_INDEX; } ;
 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ,int,int) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(void){
    static uint8_t VAR_2[] = {
        128, 134, 133, 132, 131, 130, 129,
    };

    if(VAR_1 >= 0x04){
        for(uint8_t VAR_3 = 0; VAR_3 < 7; ++VAR_3){
            if(VAR_3 == VAR_0.PATTERN_INDEX){
                FUNC_1(FUNC_0(VAR_2[VAR_3]), 2, 0, 0, 255);
            } else{
                FUNC_1(FUNC_0(VAR_2[VAR_3]), 2, 0, 255, 0);
            }
        }
    } else{
        for(uint8_t VAR_4 = 0; VAR_4 < 7; ++VAR_4){
            FUNC_2(FUNC_0(VAR_2[VAR_4]), 2);
        }
    }
}
