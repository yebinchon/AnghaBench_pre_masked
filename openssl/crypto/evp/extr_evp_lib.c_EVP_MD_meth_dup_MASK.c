
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * lock; int pkey_type; int type; int * prov; } ;
typedef TYPE_1__ EVP_MD ;
typedef int CRYPTO_RWLOCK ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,int) ;

EVP_MD *FUNC_2(const EVP_MD *VAR_0)
{
    EVP_MD *VAR_1 = ((void*)0);





    if (VAR_0->prov != ((void*)0))
        return ((void*)0);

    if ((VAR_1 = FUNC_0(VAR_0->type, VAR_0->pkey_type)) != ((void*)0)) {
        CRYPTO_RWLOCK *VAR_2 = VAR_1->lock;

        FUNC_1(VAR_1, VAR_0, sizeof(*VAR_1));
        VAR_1->lock = VAR_2;
    }
    return VAR_1;
}
