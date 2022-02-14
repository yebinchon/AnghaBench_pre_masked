
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;

void FUNC_0(uint8_t VAR_1) {
    if ( VAR_1 == 0 ) {

        VAR_0 |= (1<<0);
        VAR_0 |= (1<<4);
        VAR_0 |= (1<<1);
    } else {

        VAR_0 &= ~(1<<0);
        VAR_0 &= ~(1<<4);
        VAR_0 &= ~(1<<1);
    }
}
