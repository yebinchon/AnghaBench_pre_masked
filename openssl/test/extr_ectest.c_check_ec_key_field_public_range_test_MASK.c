
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nid; } ;
typedef int const EC_POINT ;
typedef int const EC_METHOD ;
typedef int const EC_KEY ;
typedef int const EC_GROUP ;
typedef int const BIGNUM ;


 int FUNC_0 (int const*,int const*,int const*) ;
 int FUNC_1 (int const*,int const*,int const*) ;
 int FUNC_2 (int const*) ;
 int const* FUNC_3 () ;
 int const* FUNC_4 (int const*) ;
 int const* FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 int const* FUNC_9 (int const*) ;
 int const* FUNC_10 (int const*) ;
 int const* FUNC_11 (int ) ;
 int FUNC_12 (int const*,int const*,int const*) ;
 int FUNC_13 (int const*) ;
 int FUNC_14 (int const*,int const*,int const*,int const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int const*) ;
 int FUNC_19 (int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_20(int VAR_3)
{
    int VAR_4 = 0, VAR_5 = 0;
    const EC_POINT *VAR_6 = ((void*)0);
    const EC_GROUP *VAR_7 = ((void*)0);
    const EC_METHOD *VAR_8 = ((void*)0);
    const BIGNUM *VAR_9 = ((void*)0);
    BIGNUM *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    EC_KEY *VAR_12 = ((void*)0);

    if (!FUNC_18(VAR_10 = FUNC_3())
            || !FUNC_18(VAR_11 = FUNC_3())
            || !FUNC_18(VAR_12 = FUNC_11(VAR_2[VAR_3].nid))
            || !FUNC_18(VAR_7 = FUNC_9(VAR_12))
            || !FUNC_18(VAR_8 = FUNC_5(VAR_7))
            || !FUNC_18(VAR_9 = FUNC_4(VAR_7))
            || !FUNC_16(FUNC_8(VAR_12), 0)
            || !FUNC_16(FUNC_6(VAR_12), 0)
            || !FUNC_18(VAR_6 = FUNC_10(VAR_12))
            || !FUNC_16(FUNC_14(VAR_7, VAR_6, VAR_10, VAR_11,
                                                            ((void*)0)), 0))
        goto err;





    VAR_5 = FUNC_13(VAR_8);

    if (VAR_5 == VAR_0) {

        if (!FUNC_19(FUNC_0(VAR_10, VAR_10, VAR_9)))
            goto err;
    } else

    if (VAR_5 == VAR_1) {

        if (!FUNC_19(FUNC_1(VAR_10, VAR_10, VAR_9)))
            goto err;
    } else {

        FUNC_15("Unsupported EC_METHOD field_type");
        goto err;
    }
    if (!FUNC_17(FUNC_12(VAR_12, VAR_10, VAR_11), 0))
        goto err;

    VAR_4 = 1;
err:
    FUNC_2(VAR_10);
    FUNC_2(VAR_11);
    FUNC_7(VAR_12);
    return VAR_4;
}
