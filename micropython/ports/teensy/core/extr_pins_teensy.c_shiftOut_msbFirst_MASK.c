
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

void FUNC_1(uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4)
{
        uint8_t VAR_5;
        for (VAR_5=0x80; VAR_5; VAR_5 >>= 1) {
                FUNC_0(VAR_2, VAR_4 & VAR_5);
                FUNC_0(VAR_3, VAR_0);
                FUNC_0(VAR_3, VAR_1);
        }
}
