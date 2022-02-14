
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 () ;
 size_t VAR_2 ;
 size_t VAR_3 ;

uint8_t FUNC_1(void) {
    uint8_t VAR_4 = 0;
    if (VAR_2 == VAR_3) {
        return 0;
    }

    VAR_4 = VAR_1[VAR_3];
    VAR_3 = (VAR_3 + 1) % VAR_0;
    FUNC_0();
    return VAR_4;
}
