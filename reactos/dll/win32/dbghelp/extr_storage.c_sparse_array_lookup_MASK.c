
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num_elts; } ;
struct sparse_array {int key2index; TYPE_1__ elements; } ;
struct key2index {unsigned long key; } ;


 struct key2index* FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static struct key2index* FUNC_1(const struct sparse_array* VAR_0,
                                             unsigned long VAR_1, unsigned* VAR_2)
{
    struct key2index* VAR_3;
    unsigned VAR_4, VAR_5;

    if (!VAR_0->elements.num_elts)
    {
        *VAR_2 = 0;
        return ((void*)0);
    }
    VAR_5 = VAR_0->elements.num_elts;
    VAR_3 = FUNC_0(&VAR_0->key2index, VAR_5 - 1);
    if (VAR_3->key < VAR_1)
    {
        *VAR_2 = VAR_5;
        return ((void*)0);
    }
    if (VAR_3->key == VAR_1)
    {
        *VAR_2 = VAR_5 - 1;
        return VAR_3;
    }
    VAR_4 = 0;
    VAR_3 = FUNC_0(&VAR_0->key2index, VAR_4);
    if (VAR_3->key >= VAR_1)
    {
        *VAR_2 = 0;
        return VAR_3;
    }

    while (VAR_4 < VAR_5)
    {
        *VAR_2 = (VAR_4 + VAR_5) / 2;
        VAR_3 = FUNC_0(&VAR_0->key2index, *VAR_2);
        if (VAR_3->key > VAR_1) VAR_5 = *VAR_2;
        else if (VAR_3->key < VAR_1) VAR_4 = *VAR_2 + 1;
        else return VAR_3;
    }



    if (VAR_3->key < VAR_1)
        VAR_3 = FUNC_0(&VAR_0->key2index, ++(*VAR_2));
    return VAR_3;
}
