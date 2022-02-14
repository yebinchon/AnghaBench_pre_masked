
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(uint8_t VAR_9, uint16_t VAR_10, uint8_t VAR_11) {
    if (VAR_10 == 0 || VAR_11 == 0) {
        FUNC_1(FUNC_0(VAR_9), VAR_8);
    } else {
        FUNC_1(FUNC_0(VAR_9),
           (((VAR_10 - 1) & VAR_6) << VAR_7) |
           (((VAR_11 - 1) & VAR_4) << VAR_5) |
           (((VAR_11 >> 1) & VAR_0) << VAR_1) |
           ((0 & VAR_2) << VAR_3)
        );
    }
}
