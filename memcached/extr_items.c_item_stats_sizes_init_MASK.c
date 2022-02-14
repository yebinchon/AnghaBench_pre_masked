
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int item_size_max; scalar_t__ use_cas; } ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

void FUNC_2(void) {
    if (VAR_3 != ((void*)0))
        return;
    VAR_1 = VAR_0.item_size_max / 32 + 1;
    VAR_3 = FUNC_0(VAR_1, sizeof(int));
    VAR_2 = (VAR_0.use_cas) ? FUNC_1() : 0;
}
