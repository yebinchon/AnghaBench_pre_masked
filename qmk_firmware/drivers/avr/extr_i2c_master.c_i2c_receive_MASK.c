
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ i2c_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 () ;

i2c_status_t FUNC_4(uint8_t VAR_2, uint8_t* VAR_3, uint16_t VAR_4, uint16_t VAR_5) {
    i2c_status_t VAR_6 = FUNC_2(VAR_2 | VAR_0, VAR_5);

    for (uint16_t VAR_7 = 0; VAR_7 < (VAR_4 - 1) && VAR_6 >= 0; VAR_7++) {
        VAR_6 = FUNC_0(VAR_5);
        if (VAR_6 >= 0) {
            VAR_3[VAR_7] = VAR_6;
        }
    }

    if (VAR_6 >= 0) {
        VAR_6 = FUNC_1(VAR_5);
        if (VAR_6 >= 0) {
            VAR_3[(VAR_4 - 1)] = VAR_6;
        }
    }

    FUNC_3();

    return (VAR_6 < 0) ? VAR_6 : VAR_1;
}
