
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_8(void)
{
    VAR_3 = FUNC_6();
    FUNC_1();
    FUNC_2();
    if (VAR_1 && !VAR_2) {
        if (FUNC_5() == -1)
            VAR_1 = 0;
    }
    if (VAR_1) {
        FUNC_4();
        FUNC_7("LSCRIU (%d): LSAPI_Register_Pgrp_Timer_Callback\n", VAR_3);
        FUNC_0(VAR_0);
        FUNC_3(0);
    }
    return VAR_1 > 0;
}
