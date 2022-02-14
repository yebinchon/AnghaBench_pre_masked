
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_0 () ;
 scalar_t__* VAR_9 ;

void FUNC_1(void)
{

    VAR_1 &= ~(1<<7);
    VAR_5 |= (1<<7);
    VAR_0 &= ~(1<<7 | 1<<5);
    VAR_4 |= (1<<7 | 1<<5);
    VAR_2 &= ~(1<<6 | 1<<4 | 1<<1);
    VAR_6 |= (1<<6 | 1<<4 | 1<<1);

    for (uint8_t VAR_10=0; VAR_10 < VAR_3; VAR_10++) {
        VAR_7[VAR_10] = 0;
        VAR_8[VAR_10] = 0;
        VAR_9[VAR_10] = 0;
    }

    FUNC_0();

}
