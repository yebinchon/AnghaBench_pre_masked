
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__,int ) ;

void FUNC_5(void)
{
    FUNC_3("\nr/c 01234567\n");
    for (uint8_t VAR_0 = 0; VAR_0 < FUNC_2(); VAR_0++) {
        FUNC_4("%02X: %08b\n", VAR_0, FUNC_0(FUNC_1(VAR_0)));
    }
}
