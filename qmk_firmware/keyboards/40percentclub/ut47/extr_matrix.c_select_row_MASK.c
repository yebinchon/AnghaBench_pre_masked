
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(uint8_t VAR_4)
{

    switch (VAR_4) {
        case 0:
            VAR_1 |= (1<<1);
            VAR_3 &= ~(1<<1);
            break;
        case 1:
            VAR_1 |= (1<<0);
            VAR_3 &= ~(1<<0);
            break;
        case 2:
            VAR_1 |= (1<<4);
            VAR_3 &= ~(1<<4);
            break;
        case 3:
            VAR_0 |= (1<<6);
            VAR_2 &= ~(1<<6);
            break;
    }
}
