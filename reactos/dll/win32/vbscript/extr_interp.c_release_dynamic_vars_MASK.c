
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; int v; } ;
typedef TYPE_1__ dynamic_var_t ;


 int FUNC_0 (int *) ;

void FUNC_1(dynamic_var_t *VAR_0)
{
    while(VAR_0) {
        FUNC_0(&VAR_0->v);
        VAR_0 = VAR_0->next;
    }
}
