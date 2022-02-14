
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;

void FUNC_0(void) {
    uint16_t VAR_5 = VAR_3 - &VAR_2[0] + VAR_0;
    uint8_t VAR_6 = VAR_4 - (VAR_5 % VAR_4);


    if (VAR_6 < VAR_0) {
        VAR_5 += VAR_6;
    }


    if (VAR_5 >= VAR_1) {
        VAR_5 = 0;
    }


    VAR_3 = &VAR_2[VAR_5];
}
