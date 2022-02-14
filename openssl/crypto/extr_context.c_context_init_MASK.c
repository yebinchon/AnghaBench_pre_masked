
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* dyn_indexes; int * lock; int * oncelock; int data; int ** index_locks; } ;
typedef TYPE_1__ OPENSSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 () ;
 size_t VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(OPENSSL_CTX *VAR_2)
{
    size_t VAR_3;
    int VAR_4 = 0;

    VAR_2->lock = FUNC_1();
    if (VAR_2->lock == ((void*)0))
        return 0;

    VAR_2->oncelock = FUNC_1();
    if (VAR_2->oncelock == ((void*)0))
        goto err;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_2->index_locks[VAR_3] = FUNC_1();
        VAR_2->dyn_indexes[VAR_3] = -1;
        if (VAR_2->index_locks[VAR_3] == ((void*)0))
            goto err;
    }


    if (!FUNC_4(VAR_2))
        goto err;
    VAR_4 = 1;

    if (!FUNC_3(VAR_2, VAR_0, ((void*)0),
                               &VAR_2->data)) {
        FUNC_2(VAR_2);
        goto err;
    }


    if (!FUNC_5(VAR_2))
        goto err;

    return 1;
 err:
    if (VAR_4)
        FUNC_2(VAR_2);
    FUNC_0(VAR_2->oncelock);
    FUNC_0(VAR_2->lock);
    VAR_2->lock = ((void*)0);
    return 0;
}
