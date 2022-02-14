
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;
typedef scalar_t__ i2c_status_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int const,size_t) ;

i2c_status_t FUNC_3(uint8_t VAR_1, const uint8_t* VAR_2, uint16_t VAR_3, uint16_t VAR_4) {
    i2c_status_t VAR_5 = FUNC_0(VAR_1 | VAR_0, VAR_4);

    for (uint16_t VAR_6 = 0; VAR_6 < VAR_3 && VAR_5 >= 0; VAR_6++) {
        VAR_5 = FUNC_2(VAR_2[VAR_6], VAR_4);
    }

    FUNC_1();

    return VAR_5;
}
