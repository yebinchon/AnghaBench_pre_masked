
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ slab_page_size; int slab_reassign; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 () ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_2() {
    void *VAR_4 = ((void*)0);
    if (VAR_0 != ((void*)0))
        return;

    if (!VAR_3.slab_reassign)
        return;

    while (VAR_2 > VAR_1 &&
            (VAR_4 = FUNC_1()) != ((void*)0)) {
        FUNC_0(VAR_4);
        VAR_2 -= VAR_3.slab_page_size;
    }
}
