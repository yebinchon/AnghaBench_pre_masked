
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_elts; } ;
struct sparse_array {TYPE_1__ elements; TYPE_1__ key2index; } ;
struct pool {int dummy; } ;
struct key2index {unsigned long key; int index; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 struct key2index* FUNC_2 (struct sparse_array*,unsigned long,unsigned int*) ;
 void* FUNC_3 (TYPE_1__*,struct pool*) ;
 struct key2index* FUNC_4 (TYPE_1__*,unsigned int) ;

void* FUNC_5(struct sparse_array* VAR_0, unsigned long VAR_1,
                         struct pool* VAR_2)
{
    unsigned VAR_3, VAR_4;
    struct key2index* VAR_5;
    struct key2index* VAR_6;

    VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_3);
    if (VAR_5 && VAR_5->key == VAR_1)
    {
        FUNC_0("re-adding an existing key\n");
        return ((void*)0);
    }
    VAR_6 = FUNC_3(&VAR_0->key2index, VAR_2);
    if (VAR_5)
    {


        FUNC_1(VAR_0->key2index.num_elts >= 2);
        for (VAR_4 = VAR_0->key2index.num_elts - 1; VAR_4 > VAR_3; VAR_4--)
        {
            VAR_5 = FUNC_4(&VAR_0->key2index, VAR_4 - 1);
            *VAR_6 = *VAR_5;
            VAR_6 = VAR_5;
        }
    }

    VAR_6->key = VAR_1;
    VAR_6->index = VAR_0->elements.num_elts;

    return FUNC_3(&VAR_0->elements, VAR_2);
}
