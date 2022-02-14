
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int slabs; int list_size; void* slab_list; } ;
typedef TYPE_1__ slabclass_t ;


 void* FUNC_0 (void*,size_t) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1 (const unsigned int VAR_1) {
    slabclass_t *VAR_2 = &VAR_0[VAR_1];
    if (VAR_2->slabs == VAR_2->list_size) {
        size_t VAR_3 = (VAR_2->list_size != 0) ? VAR_2->list_size * 2 : 16;
        void *VAR_4 = FUNC_0(VAR_2->slab_list, VAR_3 * sizeof(void *));
        if (VAR_4 == 0) return 0;
        VAR_2->list_size = VAR_3;
        VAR_2->slab_list = VAR_4;
    }
    return 1;
}
