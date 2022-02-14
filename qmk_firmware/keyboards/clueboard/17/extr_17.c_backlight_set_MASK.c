
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

void FUNC_1(uint8_t VAR_3) {

    switch (VAR_3)
    {
        case 0:

            VAR_2 = 0x54;
            break;
        case 1:

            VAR_2 = 0xA8;
            break;
        case 2:

            VAR_2 = 0xFF;
            break;
        case 3:

            VAR_2 = 0x00;
            break;
        default:
            FUNC_0("Unknown level: %d\n", VAR_3);
    }


    VAR_1 = VAR_2 >> 8;
    VAR_0 = 0xFF & VAR_2;
}
