
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(uint8_t VAR_6) {
    VAR_0;
    FUNC_1(VAR_6);
    if (VAR_6 & (1<<VAR_3))
        VAR_1 &= ~(1<<7);
    else
        VAR_1 |= (1<<7);

    if (VAR_6 & (1<<VAR_4))
        VAR_2 &= ~(1<<0);
    else
        VAR_2 |= (1<<0);

    if (VAR_6 & (1<<VAR_5))
        VAR_2 &= ~(1<<1);
    else
        VAR_2 |= (1<<1);
 FUNC_0(VAR_6);
}
