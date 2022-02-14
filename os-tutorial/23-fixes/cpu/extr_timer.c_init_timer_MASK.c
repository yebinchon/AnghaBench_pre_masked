
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

void FUNC_2(uint32_t VAR_2) {

    FUNC_1(VAR_0, VAR_1);


    uint32_t VAR_3 = 1193180 / VAR_2;
    uint8_t VAR_4 = (uint8_t)(VAR_3 & 0xFF);
    uint8_t VAR_5 = (uint8_t)( (VAR_3 >> 8) & 0xFF);

    FUNC_0(0x43, 0x36);
    FUNC_0(0x40, VAR_4);
    FUNC_0(0x40, VAR_5);
}
