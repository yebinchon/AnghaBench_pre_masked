
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int16_t FUNC_0(uint8_t VAR_10) {



    uint8_t VAR_11;

    VAR_2 = (1 << VAR_5) | VAR_4;
    VAR_3 = (1 << VAR_6) | (VAR_10 & 0x20);
    VAR_7 = VAR_9 | (VAR_10 & 0x1F);
    VAR_2 = (1 << VAR_5) | VAR_4 | (1 << VAR_8);
    while (VAR_2 & (1 << VAR_8))
        ;
    VAR_11 = VAR_1;
    return (VAR_0 << 8) | VAR_11;

}
