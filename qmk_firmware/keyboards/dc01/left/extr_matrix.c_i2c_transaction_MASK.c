
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int i2c_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;
 int* VAR_4 ;

i2c_status_t FUNC_5(uint8_t VAR_5, uint32_t VAR_6, uint8_t VAR_7) {
    i2c_status_t VAR_8 = FUNC_2((VAR_5 << 1) | VAR_1, 10);
    FUNC_4(0x01, 10);

    FUNC_2((VAR_5 << 1) | VAR_0, 5);

    VAR_8 = FUNC_0(10);
    if (VAR_8 == 0x55) {

        for (uint8_t VAR_9 = 0; VAR_9 < VAR_3-1 ; VAR_9++) {
            VAR_4[VAR_9] &= VAR_6;
            VAR_8 = FUNC_0(10);
                VAR_4[VAR_9] |= ((uint32_t)VAR_8 << (VAR_2 + VAR_7));
            }

        VAR_4[VAR_3 - 1] &= VAR_6;
        VAR_8 = FUNC_1(10);
        VAR_4[VAR_3 - 1] |= ((uint32_t)VAR_8 << (VAR_2 + VAR_7));

    } else {
        FUNC_3();
        return 1;
    }

    FUNC_3();
    return 0;
}
