
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;

void FUNC_3(void) {
    bool VAR_1 = VAR_0.enable;
    FUNC_2("backlight toggle: %u\n", VAR_1);
    if (VAR_1)
        FUNC_0();
    else
        FUNC_1();
}
