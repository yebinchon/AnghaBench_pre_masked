
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int field; int meth; } ;
struct TYPE_5__ {TYPE_3__* group; int pub_key; } ;
typedef TYPE_1__ EC_KEY ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int ,int *,int *,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_9(BN_CTX *VAR_1, const EC_KEY *VAR_2)
{
    int VAR_3 = 0;
    BIGNUM *VAR_4, *VAR_5;

    FUNC_2(VAR_1);
    VAR_4 = FUNC_1(VAR_1);
    VAR_5 = FUNC_1(VAR_1);
    if (VAR_5 == ((void*)0))
        goto err;

    if (!FUNC_8(VAR_2->group, VAR_2->pub_key, VAR_4, VAR_5, VAR_1))
        goto err;

    if (FUNC_7(VAR_2->group->meth) == VAR_0) {
        if (FUNC_4(VAR_4)
            || FUNC_3(VAR_4, VAR_2->group->field) >= 0
            || FUNC_4(VAR_5)
            || FUNC_3(VAR_5, VAR_2->group->field) >= 0) {
            goto err;
        }
    } else {
        int VAR_6 = FUNC_6(VAR_2->group);
        if (FUNC_5(VAR_4) > VAR_6 || FUNC_5(VAR_5) > VAR_6) {
            goto err;
        }
    }
    VAR_3 = 1;
err:
    FUNC_0(VAR_1);
    return VAR_3;
}
