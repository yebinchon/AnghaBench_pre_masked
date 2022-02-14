
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (int ) ;
 uintptr_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;

uintptr_t FUNC_3(uintptr_t VAR_2) {
    uintptr_t VAR_3 = 0;
    if (VAR_2 & VAR_0) {
        if (FUNC_2()) {
            VAR_3 |= VAR_0;
        }
        if (FUNC_0(VAR_1) != ((void*)0) && FUNC_1(FUNC_0(VAR_1))) {
            VAR_3 |= VAR_0;
        }
    }
    return VAR_3;
}
