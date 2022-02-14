
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int volatile VAR_4 ;
 int volatile VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;

uint16_t FUNC_1(void)
{

    VAR_6 |= (1<<4);
    VAR_7 |= (1<<4);

    volatile uint16_t VAR_8;
    VAR_1 |= (1<<VAR_2);
    FUNC_0(1);

    VAR_1 |= (1<<VAR_3);
    while (VAR_1 & (1<<VAR_3)) ;
    VAR_8 = VAR_0;

    VAR_1 &= ~(1<<VAR_2);


    VAR_6 |= (1<<4);
    VAR_7 &= ~(1<<4);

    return (VAR_8 - VAR_4) * VAR_5;
}
