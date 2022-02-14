
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct nn_hash_item {int list; int key; } ;
struct nn_hash {size_t slots; int items; int * array; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2 (struct nn_hash *VAR_0, struct nn_hash_item *VAR_1)
{
    uint32_t VAR_2;

    VAR_2 = FUNC_0 (VAR_1->key) % VAR_0->slots;
    FUNC_1 (&VAR_0->array [VAR_2], &VAR_1->list);
 --VAR_0->items;
}
