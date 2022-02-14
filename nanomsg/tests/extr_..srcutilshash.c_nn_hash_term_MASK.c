
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct nn_hash {size_t slots; int * array; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2 (struct nn_hash *VAR_0)
{
    uint32_t VAR_1;

    for (VAR_1 = 0; VAR_1 != VAR_0->slots; ++VAR_1)
        FUNC_1 (&VAR_0->array [VAR_1]);
    FUNC_0 (VAR_0->array);
}
