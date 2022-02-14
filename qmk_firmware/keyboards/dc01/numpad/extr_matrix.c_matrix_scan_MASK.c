
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,scalar_t__) ;
 int FUNC_2 (int*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;

uint8_t FUNC_5(void)
{



    for (uint8_t VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
            FUNC_1(VAR_8, VAR_10);


    }
        if (VAR_4 != VAR_1){
            VAR_7[1] = 0x55;
            for (uint8_t VAR_11 = 0; VAR_11 < VAR_3; VAR_11++){
                VAR_7[VAR_11+2] = VAR_8[VAR_11];
            }
        }

    FUNC_0();
    return 1;
}
