
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refcnt; int * prov; int * lock; } ;
typedef int OSSL_PROVIDER ;
typedef TYPE_1__ EVP_SIGNATURE ;


 int * FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static EVP_SIGNATURE *FUNC_4(OSSL_PROVIDER *VAR_0)
{
    EVP_SIGNATURE *VAR_1 = FUNC_2(sizeof(EVP_SIGNATURE));

    VAR_1->lock = FUNC_0();
    if (VAR_1->lock == ((void*)0)) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }
    VAR_1->prov = VAR_0;
    FUNC_3(VAR_0);
    VAR_1->refcnt = 1;

    return VAR_1;
}
