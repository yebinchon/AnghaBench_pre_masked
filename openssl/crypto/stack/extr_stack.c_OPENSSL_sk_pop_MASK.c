
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num; } ;
typedef TYPE_1__ OPENSSL_STACK ;


 void* FUNC_0 (TYPE_1__*,scalar_t__) ;

void *FUNC_1(OPENSSL_STACK *VAR_0)
{
    if (VAR_0 == ((void*)0) || VAR_0->num == 0)
        return ((void*)0);
    return FUNC_0(VAR_0, VAR_0->num - 1);
}
