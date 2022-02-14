
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* algs; int * lock; int * ctx; } ;
typedef TYPE_1__ OSSL_METHOD_STORE ;
typedef int OPENSSL_CTX ;


 int * FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 () ;

OSSL_METHOD_STORE *FUNC_4(OPENSSL_CTX *VAR_0)
{
    OSSL_METHOD_STORE *VAR_1;

    VAR_1 = FUNC_2(sizeof(*VAR_1));
    if (VAR_1 != ((void*)0)) {
        VAR_1->ctx = VAR_0;
        if ((VAR_1->algs = FUNC_3()) == ((void*)0)) {
            FUNC_1(VAR_1);
            return ((void*)0);
        }
        if ((VAR_1->lock = FUNC_0()) == ((void*)0)) {
            FUNC_1(VAR_1->algs);
            FUNC_1(VAR_1);
            return ((void*)0);
        }
    }
    return VAR_1;
}
