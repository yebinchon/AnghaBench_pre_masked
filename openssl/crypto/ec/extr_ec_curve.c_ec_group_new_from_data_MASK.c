
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int nid; int const* (* meth ) () ;TYPE_4__* data; } ;
typedef TYPE_2__ ec_list_element ;
struct TYPE_20__ {int seed_len; int param_len; scalar_t__ field_type; scalar_t__ cofactor; } ;
struct TYPE_19__ {TYPE_1__* meth; } ;
struct TYPE_17__ {int (* group_set_curve ) (TYPE_3__*,int *,int *,int *,int *) ;} ;
typedef int OPENSSL_CTX ;
typedef int EC_POINT ;
typedef int const EC_METHOD ;
typedef TYPE_3__ EC_GROUP ;
typedef TYPE_4__ EC_CURVE_DATA ;
typedef int BN_ULONG ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (unsigned char const*,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int *,int *,int *,int *) ;
 TYPE_3__* FUNC_7 (int *,int *,int *,int *) ;
 TYPE_3__* FUNC_8 (int *,int const*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,int *,int *,int *) ;
 int FUNC_11 (TYPE_3__*,unsigned char const*,int) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int *,int *,int *,int *) ;
 int FUNC_15 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int const* FUNC_16 () ;
 int const* FUNC_17 () ;
 int FUNC_18 (TYPE_3__*,int *,int *,int *,int *) ;

__attribute__((used)) static EC_GROUP *FUNC_19(OPENSSL_CTX *VAR_5,
                                        const ec_list_element VAR_6)
{
    EC_GROUP *VAR_7 = ((void*)0);
    EC_POINT *VAR_8 = ((void*)0);
    BN_CTX *VAR_9 = ((void*)0);
    BIGNUM *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 =
        ((void*)0);
    int VAR_16 = 0;
    int VAR_17, VAR_18;
    const EC_METHOD *VAR_19;
    const EC_CURVE_DATA *VAR_20;
    const unsigned char *VAR_21;


    if (VAR_6.data == ((void*)0))
        return FUNC_8(VAR_5,
                               VAR_6.meth != ((void*)0) ? VAR_6.meth() : ((void*)0));

    if ((VAR_9 = FUNC_1(VAR_5)) == ((void*)0)) {
        FUNC_15(VAR_0, VAR_3);
        goto err;
    }

    VAR_20 = VAR_6.data;
    VAR_17 = VAR_20->seed_len;
    VAR_18 = VAR_20->param_len;
    VAR_21 = (const unsigned char *)(VAR_20 + 1);
    VAR_21 += VAR_17;

    if ((VAR_10 = FUNC_2(VAR_21 + 0 * VAR_18, VAR_18, ((void*)0))) == ((void*)0)
        || (VAR_11 = FUNC_2(VAR_21 + 1 * VAR_18, VAR_18, ((void*)0))) == ((void*)0)
        || (VAR_12 = FUNC_2(VAR_21 + 2 * VAR_18, VAR_18, ((void*)0))) == ((void*)0)) {
        FUNC_15(VAR_0, VAR_1);
        goto err;
    }

    if (VAR_6.meth != 0) {
        VAR_19 = VAR_6.meth();
        if (((VAR_7 = FUNC_8(VAR_5, VAR_19)) == ((void*)0)) ||
            (!(VAR_7->meth->group_set_curve(VAR_7, VAR_10, VAR_11, VAR_12, VAR_9)))) {
            FUNC_15(VAR_0, VAR_2);
            goto err;
        }
    } else if (VAR_20->field_type == VAR_4) {
        if ((VAR_7 = FUNC_7(VAR_10, VAR_11, VAR_12, VAR_9)) == ((void*)0)) {
            FUNC_15(VAR_0, VAR_2);
            goto err;
        }
    }

    else {


        if ((VAR_7 = FUNC_6(VAR_10, VAR_11, VAR_12, VAR_9)) == ((void*)0)) {
            FUNC_15(VAR_0, VAR_2);
            goto err;
        }
    }


    FUNC_9(VAR_7, VAR_6.nid);

    if ((VAR_8 = FUNC_13(VAR_7)) == ((void*)0)) {
        FUNC_15(VAR_0, VAR_2);
        goto err;
    }

    if ((VAR_13 = FUNC_2(VAR_21 + 3 * VAR_18, VAR_18, ((void*)0))) == ((void*)0)
        || (VAR_14 = FUNC_2(VAR_21 + 4 * VAR_18, VAR_18, ((void*)0))) == ((void*)0)) {
        FUNC_15(VAR_0, VAR_1);
        goto err;
    }
    if (!FUNC_14(VAR_7, VAR_8, VAR_13, VAR_14, VAR_9)) {
        FUNC_15(VAR_0, VAR_2);
        goto err;
    }
    if ((VAR_15 = FUNC_2(VAR_21 + 5 * VAR_18, VAR_18, ((void*)0))) == ((void*)0)
        || !FUNC_4(VAR_13, (BN_ULONG)VAR_20->cofactor)) {
        FUNC_15(VAR_0, VAR_1);
        goto err;
    }
    if (!FUNC_10(VAR_7, VAR_8, VAR_15, VAR_13)) {
        FUNC_15(VAR_0, VAR_2);
        goto err;
    }
    if (VAR_17) {
        if (!FUNC_11(VAR_7, VAR_21 - VAR_17, VAR_17)) {
            FUNC_15(VAR_0, VAR_2);
            goto err;
        }
    }
    VAR_16 = 1;
 err:
    if (!VAR_16) {
        FUNC_5(VAR_7);
        VAR_7 = ((void*)0);
    }
    FUNC_12(VAR_8);
    FUNC_0(VAR_9);
    FUNC_3(VAR_10);
    FUNC_3(VAR_11);
    FUNC_3(VAR_12);
    FUNC_3(VAR_15);
    FUNC_3(VAR_13);
    FUNC_3(VAR_14);
    return VAR_7;
}
