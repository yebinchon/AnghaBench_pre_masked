
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* value; } ;
struct ordered_hashmap_entry {unsigned int iterate_next; TYPE_1__ p; } ;
typedef int OrderedHashmap ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int *,void const*) ;
 unsigned int FUNC_1 (int *,unsigned int,void const*) ;
 struct ordered_hashmap_entry* FUNC_2 (int *,unsigned int) ;

void *FUNC_3(OrderedHashmap *VAR_1, const void *VAR_2) {
        struct ordered_hashmap_entry *VAR_3;
        unsigned VAR_4, VAR_5;

        if (!VAR_1)
                return ((void*)0);

        VAR_4 = FUNC_0(VAR_1, VAR_2);
        VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_2);
        if (VAR_5 == VAR_0)
                return ((void*)0);

        VAR_3 = FUNC_2(VAR_1, VAR_5);
        if (VAR_3->iterate_next == VAR_0)
                return ((void*)0);
        return FUNC_2(VAR_1, VAR_3->iterate_next)->p.value;
}
