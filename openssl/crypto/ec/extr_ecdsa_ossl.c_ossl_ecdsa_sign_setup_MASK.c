
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* group; } ;
struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* ecdsa_sign_setup ) (TYPE_3__*,int *,int **,int **) ;} ;
typedef TYPE_3__ EC_KEY ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,int *,int **,int **) ;

int FUNC_2(EC_KEY *VAR_2, BN_CTX *VAR_3, BIGNUM **VAR_4,
                          BIGNUM **VAR_5)
{
    if (VAR_2->group->meth->ecdsa_sign_setup == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    return VAR_2->group->meth->ecdsa_sign_setup(VAR_2, VAR_3, VAR_4, VAR_5);
}
