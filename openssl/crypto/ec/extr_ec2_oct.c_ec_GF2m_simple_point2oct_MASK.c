
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned char point_conversion_form_t ;
struct TYPE_9__ {TYPE_1__* meth; } ;
struct TYPE_8__ {int (* field_div ) (TYPE_2__ const*,int *,int *,int *,int *) ;} ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *,unsigned char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 size_t FUNC_8 (int *) ;
 int VAR_0 ;
 int FUNC_9 (TYPE_2__ const*) ;
 int FUNC_10 (TYPE_2__ const*,int const*,int *,int *,int *) ;
 scalar_t__ FUNC_11 (TYPE_2__ const*,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (int ,int ) ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_13 (TYPE_2__ const*,int *,int *,int *,int *) ;

size_t FUNC_14(const EC_GROUP *VAR_7, const EC_POINT *VAR_8,
                                point_conversion_form_t VAR_9,
                                unsigned char *VAR_10, size_t VAR_11, BN_CTX *VAR_12)
{
    size_t VAR_13;
    int VAR_14 = 0;
    BIGNUM *VAR_15, *VAR_16, *VAR_17;
    size_t VAR_18, VAR_19, VAR_20;

    BN_CTX *VAR_21 = ((void*)0);


    if ((VAR_9 != VAR_4)
        && (VAR_9 != VAR_6)
        && (VAR_9 != VAR_5)) {
        FUNC_12(VAR_0, VAR_2);
        goto err;
    }

    if (FUNC_11(VAR_7, VAR_8)) {

        if (VAR_10 != ((void*)0)) {
            if (VAR_11 < 1) {
                FUNC_12(VAR_0, VAR_1);
                return 0;
            }
            VAR_10[0] = 0;
        }
        return 1;
    }


    VAR_18 = (FUNC_9(VAR_7) + 7) / 8;
    VAR_13 =
        (VAR_9 ==
         VAR_4) ? 1 + VAR_18 : 1 + 2 * VAR_18;


    if (VAR_10 != ((void*)0)) {
        if (VAR_11 < VAR_13) {
            FUNC_12(VAR_0, VAR_1);
            goto err;
        }


        if (VAR_12 == ((void*)0)) {
            VAR_12 = VAR_21 = FUNC_3();
            if (VAR_12 == ((void*)0))
                return 0;
        }


        FUNC_4(VAR_12);
        VAR_14 = 1;
        VAR_15 = FUNC_2(VAR_12);
        VAR_16 = FUNC_2(VAR_12);
        VAR_17 = FUNC_2(VAR_12);
        if (VAR_17 == ((void*)0))
            goto err;

        if (!FUNC_10(VAR_7, VAR_8, VAR_15, VAR_16, VAR_12))
            goto err;

        VAR_10[0] = VAR_9;
        if ((VAR_9 != VAR_6) && !FUNC_7(VAR_15)) {
            if (!VAR_7->meth->field_div(VAR_7, VAR_17, VAR_16, VAR_15, VAR_12))
                goto err;
            if (FUNC_6(VAR_17))
                VAR_10[0]++;
        }

        VAR_19 = 1;

        VAR_20 = VAR_18 - FUNC_8(VAR_15);
        if (VAR_20 > VAR_18) {
            FUNC_12(VAR_0, VAR_3);
            goto err;
        }
        while (VAR_20 > 0) {
            VAR_10[VAR_19++] = 0;
            VAR_20--;
        }
        VAR_20 = FUNC_5(VAR_15, VAR_10 + VAR_19);
        VAR_19 += VAR_20;
        if (VAR_19 != 1 + VAR_18) {
            FUNC_12(VAR_0, VAR_3);
            goto err;
        }

        if (VAR_9 == VAR_6
            || VAR_9 == VAR_5) {
            VAR_20 = VAR_18 - FUNC_8(VAR_16);
            if (VAR_20 > VAR_18) {
                FUNC_12(VAR_0, VAR_3);
                goto err;
            }
            while (VAR_20 > 0) {
                VAR_10[VAR_19++] = 0;
                VAR_20--;
            }
            VAR_20 = FUNC_5(VAR_16, VAR_10 + VAR_19);
            VAR_19 += VAR_20;
        }

        if (VAR_19 != VAR_13) {
            FUNC_12(VAR_0, VAR_3);
            goto err;
        }
    }

    if (VAR_14)
        FUNC_0(VAR_12);

    FUNC_1(VAR_21);

    return VAR_13;

 err:
    if (VAR_14)
        FUNC_0(VAR_12);

    FUNC_1(VAR_21);

    return 0;
}
