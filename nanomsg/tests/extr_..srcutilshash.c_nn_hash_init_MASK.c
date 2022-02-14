
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nn_list {int dummy; } ;
struct nn_hash {int slots; int * array; scalar_t__ items; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;

void FUNC_3 (struct nn_hash *VAR_1)
{
    uint32_t VAR_2;

    VAR_1->slots = VAR_0;
    VAR_1->items = 0;
    VAR_1->array = FUNC_1 (sizeof (struct nn_list) * VAR_0,
        "hash map");
    FUNC_0 (VAR_1->array);
    for (VAR_2 = 0; VAR_2 != VAR_0; ++VAR_2)
        FUNC_2 (&VAR_1->array [VAR_2]);
}
