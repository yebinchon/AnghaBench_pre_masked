
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int UINTEGER64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(uint8_t *VAR_0)
{





    UINTEGER64 VAR_1;

    VAR_1 = FUNC_1(((void*)0));
    VAR_1 = (VAR_1 + FUNC_0(11644473600)) * FUNC_0(10000000);


    VAR_0[0] = VAR_1 & FUNC_0(0xFF);
    VAR_0[1] = (VAR_1 >> 8) & FUNC_0(0xFF);
    VAR_0[2] = (VAR_1 >> 16) & FUNC_0(0xFF);
    VAR_0[3] = (VAR_1 >> 24) & FUNC_0(0xFF);
    VAR_0[4] = (VAR_1 >> 32) & FUNC_0(0xFF);
    VAR_0[5] = (VAR_1 >> 40) & FUNC_0(0xFF);
    VAR_0[6] = (VAR_1 >> 48) & FUNC_0(0xFF);
    VAR_0[7] = (VAR_1 >> 56) & FUNC_0(0xFF);
}
