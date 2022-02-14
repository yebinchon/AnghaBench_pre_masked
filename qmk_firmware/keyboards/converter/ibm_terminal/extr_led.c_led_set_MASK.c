
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

void FUNC_1(uint8_t VAR_6)
{
    uint8_t VAR_7 = 0;
    if (VAR_6 & (1<<VAR_5))
        VAR_7 |= (1<<VAR_2);
    if (VAR_6 & (1<<VAR_4))
        VAR_7 |= (1<<VAR_1);
    if (VAR_6 & (1<<VAR_3))
        VAR_7 |= (1<<VAR_0);
    FUNC_0(VAR_7);
}
