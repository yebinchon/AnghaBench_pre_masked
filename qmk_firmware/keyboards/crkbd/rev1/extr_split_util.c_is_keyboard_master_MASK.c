
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((weak)) bool FUNC_2(void) {
    static enum { UNKNOWN, MASTER, SLAVE } VAR_4 = UNKNOWN;


    if (VAR_4 == UNKNOWN) {
        VAR_4 = MASTER;

    }

    return (VAR_4 == MASTER);
}
