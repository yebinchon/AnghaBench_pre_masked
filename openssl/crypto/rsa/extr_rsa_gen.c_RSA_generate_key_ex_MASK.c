
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* rsa_keygen ) (TYPE_2__*,int,int *,int *) ;} ;
typedef TYPE_2__ RSA ;
typedef int BN_GENCB ;
typedef int BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int ,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int,int *,int *) ;

int FUNC_2(RSA *VAR_1, int VAR_2, BIGNUM *VAR_3, BN_GENCB *VAR_4)
{
    if (VAR_1->meth->rsa_keygen != ((void*)0))
        return VAR_1->meth->rsa_keygen(VAR_1, VAR_2, VAR_3, VAR_4);

    return FUNC_0(VAR_1, VAR_2, VAR_0,
                                        VAR_3, VAR_4);
}
