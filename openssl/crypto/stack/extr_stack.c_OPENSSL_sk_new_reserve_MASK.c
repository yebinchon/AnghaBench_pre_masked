
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int comp; } ;
typedef int OPENSSL_sk_compfunc ;
typedef TYPE_1__ OPENSSL_STACK ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

OPENSSL_STACK *FUNC_3(OPENSSL_sk_compfunc VAR_0, int VAR_1)
{
    OPENSSL_STACK *VAR_2 = FUNC_1(sizeof(OPENSSL_STACK));

    if (VAR_2 == ((void*)0))
        return ((void*)0);

    VAR_2->comp = VAR_0;

    if (VAR_1 <= 0)
        return VAR_2;

    if (!FUNC_2(VAR_2, VAR_1, 1)) {
        FUNC_0(VAR_2);
        return ((void*)0);
    }

    return VAR_2;
}
