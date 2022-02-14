
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

void FUNC_0(uint8_t VAR_5) {

    if (VAR_5 & (1 << VAR_3)) {
        VAR_0 |= (1 << 0); VAR_1 &= ~(1 << 0);
    } else {
        VAR_0 &= ~(1 << 0); VAR_1 &= ~(1 << 0);
    }

    if (VAR_5 & (1 << VAR_2)) {
        VAR_0 |= (1 << 1); VAR_1 &= ~(1 << 1);
    } else {
        VAR_0 &= ~(1 << 1); VAR_1 &= ~(1 << 1);
    }

    if (VAR_5 & (1 << VAR_4)) {
        VAR_0 |= (1 << 2); VAR_1 &= ~(1 << 2);
    } else {
        VAR_0 &= ~(1 << 2); VAR_1 &= ~(1 << 2);
    }
}
