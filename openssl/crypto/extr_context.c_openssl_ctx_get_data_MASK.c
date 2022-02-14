
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* dyn_indexes; int * index_locks; int data; int lock; } ;
typedef int OPENSSL_CTX_METHOD ;
typedef TYPE_1__ OPENSSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int) ;
 void* FUNC_4 (int *,int) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int const*) ;

void *FUNC_7(OPENSSL_CTX *VAR_1, int VAR_2,
                           const OPENSSL_CTX_METHOD *VAR_3)
{
    void *VAR_4 = ((void*)0);
    int VAR_5;

    VAR_1 = FUNC_5(VAR_1);
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    FUNC_0(VAR_1->lock);
    VAR_5 = VAR_1->dyn_indexes[VAR_2];
    FUNC_1(VAR_1->lock);

    if (VAR_5 != -1) {
        FUNC_0(VAR_1->index_locks[VAR_2]);
        VAR_4 = FUNC_4(&VAR_1->data, VAR_5);
        FUNC_1(VAR_1->index_locks[VAR_2]);
        return VAR_4;
    }

    FUNC_2(VAR_1->index_locks[VAR_2]);
    FUNC_2(VAR_1->lock);

    VAR_5 = VAR_1->dyn_indexes[VAR_2];
    if (VAR_5 != -1) {
        FUNC_1(VAR_1->lock);
        VAR_4 = FUNC_4(&VAR_1->data, VAR_5);
        FUNC_1(VAR_1->index_locks[VAR_2]);
        return VAR_4;
    }

    if (!FUNC_6(VAR_1, VAR_2, VAR_3)) {
        FUNC_1(VAR_1->lock);
        FUNC_1(VAR_1->index_locks[VAR_2]);
        return ((void*)0);
    }

    FUNC_1(VAR_1->lock);


    if (FUNC_3(VAR_0, ((void*)0),
                             &VAR_1->data, VAR_1->dyn_indexes[VAR_2]))
        VAR_4 = FUNC_4(&VAR_1->data, VAR_1->dyn_indexes[VAR_2]);

    FUNC_1(VAR_1->index_locks[VAR_2]);

    return VAR_4;
}
