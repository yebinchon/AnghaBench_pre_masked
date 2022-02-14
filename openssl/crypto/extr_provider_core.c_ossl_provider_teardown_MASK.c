
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int provctx; int (* teardown ) (int ) ;} ;
typedef TYPE_1__ OSSL_PROVIDER ;


 int FUNC_0 (int ) ;

void FUNC_1(const OSSL_PROVIDER *VAR_0)
{
    if (VAR_0->teardown != ((void*)0))
        VAR_0->teardown(VAR_0->provctx);
}
