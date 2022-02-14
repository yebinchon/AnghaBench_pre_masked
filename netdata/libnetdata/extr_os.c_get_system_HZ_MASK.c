
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 long FUNC_1 (int ) ;
 unsigned int VAR_1 ;

void FUNC_2(void) {
    long VAR_2;

    if ((VAR_2 = FUNC_1(VAR_0)) == -1) {
        FUNC_0("Cannot get system clock ticks");
    }

    VAR_1 = (unsigned int) VAR_2;
}
