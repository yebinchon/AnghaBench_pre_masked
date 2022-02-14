
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(uint8_t VAR_4) {
    uint8_t VAR_5;
    for (VAR_5 = 0x80; VAR_5 !=0 ; VAR_5 >>= 1) {
        if (VAR_4 & VAR_5) {
            FUNC_0(VAR_1, VAR_3);
        } else {
            FUNC_0(VAR_0, VAR_3);
        }
        FUNC_0(VAR_1, VAR_2);
        FUNC_0(VAR_0, VAR_2);
    }
}
