
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flag_fallback; } ;
typedef TYPE_1__ OSSL_PROVIDER ;



int FUNC_0(OSSL_PROVIDER *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return 0;

    VAR_0->flag_fallback = 1;
    return 1;
}
