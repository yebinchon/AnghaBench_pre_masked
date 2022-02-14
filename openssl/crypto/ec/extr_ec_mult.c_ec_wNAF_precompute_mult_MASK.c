
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t blocksize; size_t numblocks; size_t w; size_t num; int const** points; int * group; } ;
typedef TYPE_1__ EC_PRE_COMP ;
typedef int const EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const*) ;
 size_t FUNC_5 (int const*) ;
 int VAR_0 ;
 int const* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*,int const*,int const*,int *) ;
 int FUNC_9 (int const*,int const*) ;
 int FUNC_10 (int *,int const*,int const*,int *) ;
 int FUNC_11 (int const*) ;
 int const* FUNC_12 (int *) ;
 int FUNC_13 (int *,size_t,int const**,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *) ;
 size_t FUNC_16 (size_t) ;
 int FUNC_17 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_18 (int const**) ;
 int const** FUNC_19 (int) ;
 int FUNC_20 (int *,int ,TYPE_1__*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_21 (int *) ;

int FUNC_22(EC_GROUP *VAR_6, BN_CTX *VAR_7)
{
    const EC_POINT *VAR_8;
    EC_POINT *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), **VAR_11;
    const BIGNUM *VAR_12;
    size_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    EC_POINT **VAR_20 = ((void*)0);
    EC_PRE_COMP *VAR_21;
    int VAR_22 = 0;

    BN_CTX *VAR_23 = ((void*)0);



    FUNC_15(VAR_6);
    if ((VAR_21 = FUNC_21(VAR_6)) == ((void*)0))
        return 0;

    VAR_8 = FUNC_6(VAR_6);
    if (VAR_8 == ((void*)0)) {
        FUNC_17(VAR_0, VAR_1);
        goto err;
    }


    if (VAR_7 == ((void*)0))
        VAR_7 = VAR_23 = FUNC_2();

    if (VAR_7 == ((void*)0))
        goto err;

    FUNC_3(VAR_7);

    VAR_12 = FUNC_7(VAR_6);
    if (VAR_12 == ((void*)0))
        goto err;
    if (FUNC_4(VAR_12)) {
        FUNC_17(VAR_0, VAR_2);
        goto err;
    }

    VAR_14 = FUNC_5(VAR_12);






    VAR_17 = 8;
    VAR_15 = 4;
    if (FUNC_16(VAR_14) > VAR_15) {

        VAR_15 = FUNC_16(VAR_14);
    }

    VAR_18 = (VAR_14 + VAR_17 - 1) / VAR_17;



    VAR_16 = (size_t)1 << (VAR_15 - 1);
    VAR_19 = VAR_16 * VAR_18;


    VAR_20 = FUNC_19(sizeof(*VAR_20) * (VAR_19 + 1));
    if (VAR_20 == ((void*)0)) {
        FUNC_17(VAR_0, VAR_4);
        goto err;
    }

    VAR_11 = VAR_20;
    VAR_11[VAR_19] = ((void*)0);
    for (VAR_13 = 0; VAR_13 < VAR_19; VAR_13++) {
        if ((VAR_11[VAR_13] = FUNC_12(VAR_6)) == ((void*)0)) {
            FUNC_17(VAR_0, VAR_4);
            goto err;
        }
    }

    if ((VAR_9 = FUNC_12(VAR_6)) == ((void*)0)
        || (VAR_10 = FUNC_12(VAR_6)) == ((void*)0)) {
        FUNC_17(VAR_0, VAR_4);
        goto err;
    }

    if (!FUNC_9(VAR_10, VAR_8))
        goto err;


    for (VAR_13 = 0; VAR_13 < VAR_18; VAR_13++) {
        size_t VAR_24;

        if (!FUNC_10(VAR_6, VAR_9, VAR_10, VAR_7))
            goto err;

        if (!FUNC_9(*VAR_11++, VAR_10))
            goto err;

        for (VAR_24 = 1; VAR_24 < VAR_16; VAR_24++, VAR_11++) {



            if (!FUNC_8(VAR_6, *VAR_11, VAR_9, *(VAR_11 - 1), VAR_7))
                goto err;
        }

        if (VAR_13 < VAR_18 - 1) {



            size_t VAR_25;

            if (VAR_17 <= 2) {
                FUNC_17(VAR_0, VAR_3);
                goto err;
            }

            if (!FUNC_10(VAR_6, VAR_10, VAR_9, VAR_7))
                goto err;
            for (VAR_25 = 2; VAR_25 < VAR_17; VAR_25++) {
                if (!FUNC_10(VAR_6, VAR_10, VAR_10, VAR_7))
                    goto err;
            }
        }
    }

    if (!FUNC_13(VAR_6, VAR_19, VAR_20, VAR_7))
        goto err;

    VAR_21->group = VAR_6;
    VAR_21->blocksize = VAR_17;
    VAR_21->numblocks = VAR_18;
    VAR_21->w = VAR_15;
    VAR_21->points = VAR_20;
    VAR_20 = ((void*)0);
    VAR_21->num = VAR_19;
    FUNC_20(VAR_6, VAR_5, VAR_21);
    VAR_21 = ((void*)0);
    VAR_22 = 1;

 err:
    FUNC_0(VAR_7);

    FUNC_1(VAR_23);

    FUNC_14(VAR_21);
    if (VAR_20) {
        EC_POINT **VAR_26;

        for (VAR_26 = VAR_20; *VAR_26 != ((void*)0); VAR_26++)
            FUNC_11(*VAR_26);
        FUNC_18(VAR_20);
    }
    FUNC_11(VAR_9);
    FUNC_11(VAR_10);
    return VAR_22;
}
