
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* store; } ;
struct TYPE_5__ {int lock; scalar_t__ use_fallbacks; } ;
typedef TYPE_2__ OSSL_PROVIDER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

int FUNC_3(OSSL_PROVIDER *VAR_0)
{
    if (FUNC_2(VAR_0)) {
        FUNC_1(VAR_0->store->lock);
        VAR_0->store->use_fallbacks = 0;
        FUNC_0(VAR_0->store->lock);
        return 1;
    }

    return 0;
}
