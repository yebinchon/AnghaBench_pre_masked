
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int slabs; void** slab_list; } ;
typedef TYPE_1__ slabclass_t ;
struct TYPE_5__ {int slab_page_size; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int) ;
 TYPE_3__ VAR_3 ;
 TYPE_1__* VAR_4 ;

void FUNC_2(void) {
    void *VAR_5;
    slabclass_t *VAR_6 = &VAR_4[0];
    int VAR_7 = VAR_3.slab_page_size;

    while (VAR_2 < VAR_0
            && (VAR_5 = FUNC_1(VAR_7)) != ((void*)0)) {
        FUNC_0(0);
        VAR_6->slab_list[VAR_6->slabs++] = VAR_5;
    }
    VAR_1 = 1;
}
