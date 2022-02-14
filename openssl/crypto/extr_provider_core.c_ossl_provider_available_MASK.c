
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {int flag_initialized; TYPE_2__* store; } ;
typedef TYPE_1__ OSSL_PROVIDER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(OSSL_PROVIDER *VAR_0)
{
    if (VAR_0 != ((void*)0)) {
        FUNC_0(VAR_0->store->lock);
        FUNC_2(VAR_0->store);
        FUNC_1(VAR_0->store->lock);

        return VAR_0->flag_initialized;
    }
    return 0;
}
