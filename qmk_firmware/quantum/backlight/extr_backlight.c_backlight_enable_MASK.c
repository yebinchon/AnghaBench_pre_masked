
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable; int raw; int level; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;

void FUNC_3(void) {
    if (VAR_0.enable) return;

    VAR_0.enable = 1;
    if (VAR_0.raw == 1)
        VAR_0.level = 1;
    FUNC_2(VAR_0.raw);
    FUNC_1("backlight enable\n");
    FUNC_0(VAR_0.level);
}
