
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int pending_key_t ;
struct TYPE_3__ {size_t count; size_t ifirst; int * items; } ;
typedef TYPE_1__ kring_t ;


 size_t VAR_0 ;

pending_key_t* FUNC_0(kring_t *VAR_1, uint8_t VAR_2) {
    if (VAR_2 >= VAR_1->count) {
        return ((void*)0);
    }
    uint8_t VAR_3 = (VAR_1->ifirst + VAR_2) % VAR_0;
    return &(VAR_1->items[VAR_3]);
}
