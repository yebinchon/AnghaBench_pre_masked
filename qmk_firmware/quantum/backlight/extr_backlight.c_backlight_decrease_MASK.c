
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ level; int enable; int raw; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(void) {
    if (VAR_0.level > 0) {
        VAR_0.level--;
        VAR_0.enable = !!VAR_0.level;
        FUNC_2(VAR_0.raw);
    }
    FUNC_1("backlight decrease: %u\n", VAR_0.level);
    FUNC_0(VAR_0.level);
}
