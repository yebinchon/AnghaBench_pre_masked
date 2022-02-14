
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

uint8_t FUNC_2(uint8_t VAR_2, uint8_t VAR_3)
{
        uint8_t VAR_4, VAR_5=0;
        for (VAR_4=0x01; VAR_4; VAR_4 <<= 1) {
                FUNC_1(VAR_3, VAR_0);
                if (FUNC_0(VAR_2)) VAR_5 |= VAR_4;
                FUNC_1(VAR_3, VAR_1);
        }
        return VAR_5;
}
