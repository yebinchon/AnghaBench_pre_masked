
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 unsigned int VAR_2 ;
 int FUNC_2 () ;

void FUNC_3(void) {
    FUNC_1(VAR_1, "Health configuration initializing");

    if(!(VAR_2 = (unsigned int)FUNC_0(VAR_0, "enabled", VAR_2))) {
        FUNC_1(VAR_1, "Health is disabled.");
        return;
    }

    FUNC_2();
}
