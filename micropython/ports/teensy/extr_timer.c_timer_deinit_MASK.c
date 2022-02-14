
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef int pyb_timer_obj_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int ** VAR_1 ;

void FUNC_1(void) {
    for (uint VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        pyb_timer_obj_t *VAR_3 = VAR_1[VAR_2];
        if (VAR_3 != ((void*)0)) {
            FUNC_0(VAR_3);
        }
    }
}
