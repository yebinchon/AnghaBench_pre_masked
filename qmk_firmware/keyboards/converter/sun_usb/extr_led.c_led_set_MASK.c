
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

void FUNC_2(uint8_t VAR_4)
{
    uint8_t VAR_5 = 0;
    if (VAR_4 & (1<<VAR_2)) VAR_5 |= (1<<0);
    if (VAR_4 & (1<<VAR_1)) VAR_5 |= (1<<1);
    if (VAR_4 & (1<<VAR_3)) VAR_5 |= (1<<2);
    if (VAR_4 & (1<<VAR_0)) VAR_5 |= (1<<3);
    FUNC_1("LED: %02X\n", VAR_4);

    FUNC_0(0x0E);
    FUNC_0(VAR_5);
}
