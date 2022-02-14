
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int keyrecord_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

void FUNC_4(keyrecord_t *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{

    if (VAR_2 == VAR_0) {
        FUNC_1();
        FUNC_2("\n\nJump to bootloader... ");
        FUNC_3(250);
        FUNC_0();
        FUNC_2("not supported.\n");
    }
}
