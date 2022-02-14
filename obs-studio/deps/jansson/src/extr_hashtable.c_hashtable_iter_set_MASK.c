
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * value; } ;
typedef TYPE_1__ pair_t ;
typedef int list_t ;
typedef int json_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;

void FUNC_2(void *VAR_0, json_t *VAR_1)
{
    pair_t *VAR_2 = FUNC_1((list_t *)VAR_0);

    FUNC_0(VAR_2->value);
    VAR_2->value = VAR_1;
}
