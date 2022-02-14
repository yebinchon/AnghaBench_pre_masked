
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ comp; scalar_t__ sorted; } ;
typedef scalar_t__ OPENSSL_sk_compfunc ;
typedef TYPE_1__ OPENSSL_STACK ;



OPENSSL_sk_compfunc FUNC_0(OPENSSL_STACK *VAR_0, OPENSSL_sk_compfunc VAR_1)
{
    OPENSSL_sk_compfunc VAR_2 = VAR_0->comp;

    if (VAR_0->comp != VAR_1)
        VAR_0->sorted = 0;
    VAR_0->comp = VAR_1;

    return VAR_2;
}
