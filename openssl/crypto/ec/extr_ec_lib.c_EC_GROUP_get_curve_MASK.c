
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int (* group_get_curve ) (TYPE_2__ const*,int *,int *,int *,int *) ;} ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__ const*,int *,int *,int *,int *) ;

int FUNC_2(const EC_GROUP *VAR_2, BIGNUM *VAR_3, BIGNUM *VAR_4, BIGNUM *VAR_5,
                       BN_CTX *VAR_6)
{
    if (VAR_2->meth->group_get_curve == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    return VAR_2->meth->group_get_curve(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
