
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(uint8_t VAR_6) {
    if (VAR_6 < 16) {
        uint8_t VAR_7 = VAR_6 + 8;

        FUNC_0(VAR_1, VAR_7 & 0b10000);
        FUNC_0(VAR_2, VAR_7 & 0b01000);
        FUNC_0(VAR_3, VAR_7 & 0b00100);
        FUNC_0(VAR_5, VAR_7 & 0b00010);
        FUNC_0(VAR_4, VAR_7 & 0b00001);
    } else {
        FUNC_1(VAR_0);
    }
}
