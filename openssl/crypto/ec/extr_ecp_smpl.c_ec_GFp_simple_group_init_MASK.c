
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ a_is_minus3; int * b; int * a; int * field; } ;
typedef TYPE_1__ EC_GROUP ;


 int FUNC_0 (int *) ;
 void* FUNC_1 () ;

int FUNC_2(EC_GROUP *VAR_0)
{
    VAR_0->field = FUNC_1();
    VAR_0->a = FUNC_1();
    VAR_0->b = FUNC_1();
    if (VAR_0->field == ((void*)0) || VAR_0->a == ((void*)0) || VAR_0->b == ((void*)0)) {
        FUNC_0(VAR_0->field);
        FUNC_0(VAR_0->a);
        FUNC_0(VAR_0->b);
        return 0;
    }
    VAR_0->a_is_minus3 = 0;
    return 1;
}
