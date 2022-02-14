
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparse_array {int elements; } ;
struct key2index {unsigned long key; int index; } ;


 struct key2index* FUNC_0 (struct sparse_array const*,unsigned long,unsigned int*) ;
 void* FUNC_1 (int *,int ) ;

void* FUNC_2(const struct sparse_array* VAR_0, unsigned long VAR_1)
{
    unsigned VAR_2;
    struct key2index* VAR_3;

    if ((VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2)) && VAR_3->key == VAR_1)
        return FUNC_1(&VAR_0->elements, VAR_3->index);
    return ((void*)0);
}
