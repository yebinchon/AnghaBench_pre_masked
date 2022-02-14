
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int VTOR; int CPACR; } ;


 int VAR_0 ;
 int* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 () ;

void FUNC_5(void) {
    uint32_t *VAR_10, *VAR_11;


    VAR_10 = &VAR_5;
    VAR_11 = &VAR_8;

    if (VAR_10 != VAR_11) {
        for (; VAR_11 < &VAR_4;) {
            *VAR_11++ = *VAR_10++;
        }
    }


    for (VAR_11 = &VAR_9; VAR_11 < &VAR_6;) {
        *VAR_11++ = 0;
    }


    VAR_10 = (uint32_t *)&VAR_7;
    VAR_2->VTOR = ((uint32_t)VAR_10 & VAR_3);
    FUNC_2();


    FUNC_4();


    while (1)
        ;
}
