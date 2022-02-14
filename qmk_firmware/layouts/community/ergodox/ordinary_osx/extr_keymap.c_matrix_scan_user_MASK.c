
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mods; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_1__* VAR_5 ;
 unsigned long VAR_6 ;

void FUNC_8(void) {

    if((VAR_5->mods & FUNC_0(VAR_0))
    || (VAR_5->mods & FUNC_0(VAR_1))
    || (FUNC_7() & (1<<VAR_4))) {
        FUNC_2();
    } else {
        FUNC_1();
    }


    if(VAR_6 & (1UL<<VAR_3)) {
        FUNC_4();
    } else {
        FUNC_3();
    }


    if(VAR_6 & (1UL<<VAR_2)) {
        FUNC_6();
    } else {
        FUNC_5();
    }
}
