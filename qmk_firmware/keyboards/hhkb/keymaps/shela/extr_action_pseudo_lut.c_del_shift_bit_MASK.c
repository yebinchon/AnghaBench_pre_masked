
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int* VAR_1 ;

void FUNC_1(uint16_t VAR_2) {
    if ((VAR_2 >> 3) < VAR_0) {
        VAR_1[VAR_2 >> 3] &= ~(1 << (VAR_2 & 7));
    } else {
        FUNC_0("del_shift_bit: Can't delete shift bit. keycode: %02X\n", VAR_2);
    }
}
