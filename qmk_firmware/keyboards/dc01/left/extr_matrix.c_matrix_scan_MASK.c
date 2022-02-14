
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 int* VAR_12 ;
 int* VAR_13 ;
 int FUNC_1 () ;
 int FUNC_2 (int*,scalar_t__) ;
 int FUNC_3 (int*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;

uint8_t FUNC_6(void)
{




    for (uint8_t VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
            FUNC_2(VAR_12, VAR_14);


    }
    if (FUNC_0(VAR_6, 0x3F, 0)){
        VAR_11++;
        if (VAR_11 > VAR_1){
            for (uint8_t VAR_15 = 0; VAR_15 < VAR_3 ; VAR_15++) {
                VAR_12[VAR_15] &= 0x3F;
            }
        }
   }else{
        VAR_11 = 0;
    }

    if (FUNC_0(VAR_4, 0X3FFF, 8)){
        VAR_9++;
        if (VAR_9 > VAR_1){
            for (uint8_t VAR_16 = 0; VAR_16 < VAR_3 ; VAR_16++) {
                VAR_12[VAR_16] &= 0x3FFF;
            }
        }
    }else{
        VAR_9 = 0;
    }

    if (FUNC_0(VAR_5, 0x1FFFF, 11)){
        VAR_10++;
        if (VAR_10 > VAR_1){
            for (uint8_t VAR_17 = 0; VAR_17 < VAR_3 ; VAR_17++) {
                VAR_12[VAR_17] &= 0x1FFFF;
            }
        }
    }else{
        VAR_10 = 0;
    }

    FUNC_1();
    return 1;
}
