
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int slabs_clsid; size_t size; int it_flags; scalar_t__ used; struct TYPE_5__* next; struct TYPE_5__* prev; int head; } ;
typedef TYPE_1__ item_chunk ;
struct TYPE_6__ {size_t slab_chunk_size_max; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t,unsigned int) ;
 TYPE_2__ VAR_1 ;
 unsigned int FUNC_1 (size_t) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

item_chunk *FUNC_4(item_chunk *VAR_2, const size_t VAR_3) {

    size_t VAR_4 = VAR_3 + sizeof(item_chunk);
    if (VAR_4 > VAR_1.slab_chunk_size_max)
        VAR_4 = VAR_1.slab_chunk_size_max;
    unsigned int VAR_5 = FUNC_1(VAR_4);

    item_chunk *VAR_6 = (item_chunk *) FUNC_0(VAR_4, VAR_5);
    if (VAR_6 == ((void*)0))
        return ((void*)0);



    FUNC_2();
    VAR_6->head = VAR_2->head;
    VAR_2->next = VAR_6;
    VAR_6->prev = VAR_2;
    VAR_6->next = 0;
    VAR_6->used = 0;
    VAR_6->slabs_clsid = VAR_5;
    VAR_6->size = VAR_4 - sizeof(item_chunk);
    VAR_6->it_flags |= VAR_0;
    FUNC_3();
    return VAR_6;
}
