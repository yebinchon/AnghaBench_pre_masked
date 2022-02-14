
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int const* Y; int const* X; int Z_is_one; } ;
struct TYPE_11__ {int const* b; int const* a; TYPE_1__* meth; } ;
struct TYPE_10__ {int (* field_mul ) (TYPE_2__ const*,int const*,int const*,int const*,int *) ;int (* field_sqr ) (TYPE_2__ const*,int const*,int const*,int *) ;} ;
typedef TYPE_4__ EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int const* FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const*,int const*,int const*) ;
 int FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (TYPE_2__ const*,TYPE_4__ const*) ;

int FUNC_8(const EC_GROUP *VAR_0, const EC_POINT *VAR_1,
                               BN_CTX *VAR_2)
{
    int VAR_3 = -1;
    BIGNUM *VAR_4, *VAR_5;
    int (*VAR_6) (const EC_GROUP *, BIGNUM *, const BIGNUM *,
                      const BIGNUM *, BN_CTX *);
    int (*VAR_7) (const EC_GROUP *, BIGNUM *, const BIGNUM *, BN_CTX *);

    BN_CTX *VAR_8 = ((void*)0);


    if (FUNC_7(VAR_0, VAR_1))
        return 1;

    VAR_6 = VAR_0->meth->field_mul;
    VAR_7 = VAR_0->meth->field_sqr;


    if (!VAR_1->Z_is_one)
        return -1;


    if (VAR_2 == ((void*)0)) {
        VAR_2 = VAR_8 = FUNC_3();
        if (VAR_2 == ((void*)0))
            return -1;
    }


    FUNC_4(VAR_2);
    VAR_5 = FUNC_2(VAR_2);
    VAR_4 = FUNC_2(VAR_2);
    if (VAR_4 == ((void*)0))
        goto err;







    if (!FUNC_5(VAR_4, VAR_1->X, VAR_0->a))
        goto err;
    if (!VAR_6(VAR_0, VAR_4, VAR_4, VAR_1->X, VAR_2))
        goto err;
    if (!FUNC_5(VAR_4, VAR_4, VAR_1->Y))
        goto err;
    if (!VAR_6(VAR_0, VAR_4, VAR_4, VAR_1->X, VAR_2))
        goto err;
    if (!FUNC_5(VAR_4, VAR_4, VAR_0->b))
        goto err;
    if (!VAR_7(VAR_0, VAR_5, VAR_1->Y, VAR_2))
        goto err;
    if (!FUNC_5(VAR_4, VAR_4, VAR_5))
        goto err;
    VAR_3 = FUNC_6(VAR_4);

 err:
    FUNC_0(VAR_2);

    FUNC_1(VAR_8);

    return VAR_3;
}
