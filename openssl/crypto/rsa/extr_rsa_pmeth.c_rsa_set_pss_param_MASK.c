
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* data; } ;
struct TYPE_8__ {int * pss; } ;
struct TYPE_7__ {int saltlen; int * mgf1md; int * md; } ;
typedef TYPE_1__ RSA_PKEY_CTX ;
typedef TYPE_2__ RSA ;
typedef TYPE_3__ EVP_PKEY_CTX ;


 int FUNC_0 (TYPE_3__*) ;
 int * FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(RSA *VAR_0, EVP_PKEY_CTX *VAR_1)
{
    RSA_PKEY_CTX *VAR_2 = VAR_1->data;

    if (!FUNC_0(VAR_1))
        return 1;

    if (VAR_2->md == ((void*)0) && VAR_2->mgf1md == ((void*)0) && VAR_2->saltlen == -2)
        return 1;
    VAR_0->pss = FUNC_1(VAR_2->md, VAR_2->mgf1md,
                                     VAR_2->saltlen == -2 ? 0 : VAR_2->saltlen);
    if (VAR_0->pss == ((void*)0))
        return 0;
    return 1;
}
