
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ level; scalar_t__ enable; int raw; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(void) {

    if (!FUNC_2()) {
        FUNC_1();
    }
    VAR_1.raw = FUNC_3();
    if (VAR_1.level > VAR_0) {
        VAR_1.level = VAR_0;
    }
    FUNC_0(VAR_1.enable ? VAR_1.level : 0);
}
