
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* store; int ref; } ;
typedef TYPE_2__ context_t ;
struct TYPE_11__ {TYPE_1__* vtbl; } ;
typedef TYPE_3__ WINECRYPT_CERTSTORE ;
struct TYPE_9__ {int (* release ) (TYPE_3__*,int ) ;int (* releaseContext ) (TYPE_3__*,TYPE_2__*) ;} ;
typedef scalar_t__ LONG ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;

void FUNC_5(context_t *VAR_0)
{
    LONG VAR_1 = FUNC_0(&VAR_0->ref);

    FUNC_1("(%p) ref=%d\n", VAR_0, VAR_1);
    FUNC_2(VAR_1 >= 0);

    if (!VAR_1) {
        WINECRYPT_CERTSTORE *VAR_2 = VAR_0->store;



        VAR_2->vtbl->releaseContext(VAR_2, VAR_0);
        VAR_2->vtbl->release(VAR_2, 0);
    }
}
