
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; void const** data; scalar_t__ sorted; } ;
typedef TYPE_1__ OPENSSL_STACK ;



void *FUNC_0(OPENSSL_STACK *VAR_0, int VAR_1, const void *VAR_2)
{
    if (VAR_0 == ((void*)0) || VAR_1 < 0 || VAR_1 >= VAR_0->num)
        return ((void*)0);
    VAR_0->data[VAR_1] = VAR_2;
    VAR_0->sorted = 0;
    return (void *)VAR_0->data[VAR_1];
}
