
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int param ;
struct TYPE_11__ {TYPE_1__* meth; int libctx; } ;
struct TYPE_10__ {int (* point_get_affine_coordinates ) (TYPE_2__ const*,int const*,int const*,int const*,int *) ;int (* point_set_affine_coordinates ) (TYPE_2__ const*,int *,int const*,int const*,int *) ;} ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int const* FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (unsigned char*,int,int const*) ;
 int FUNC_6 (int const*,unsigned char*,int) ;
 scalar_t__ FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int const*) ;
 int * FUNC_9 (TYPE_2__ const*) ;
 int FUNC_10 (TYPE_2__ const*,int const*) ;
 int FUNC_11 (TYPE_2__ const*,int *) ;
 int FUNC_12 (unsigned char*,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int VAR_0 ;
 int FUNC_18 (TYPE_2__ const*,int *,int const*,size_t,int const**,int const**,int *) ;
 int FUNC_19 (unsigned char**,int ,int) ;
 scalar_t__ FUNC_20 (unsigned int,unsigned char*) ;
 int FUNC_21 (TYPE_2__ const*,int const*,int const*,int const*,int *) ;
 int FUNC_22 (TYPE_2__ const*,int *,int const*,int const*,int *) ;

__attribute__((used)) static int FUNC_23(const EC_GROUP *VAR_1, EC_POINT *VAR_2,
                                  const BIGNUM *VAR_3,
                                  size_t VAR_4, const EC_POINT *VAR_5[],
                                  const BIGNUM *VAR_6[],
                                  BN_CTX *VAR_7, unsigned int VAR_8, int VAR_9)
{
    unsigned char VAR_10[VAR_0];
    BIGNUM *VAR_11, *VAR_12;
    const EC_POINT *VAR_13 = ((void*)0);
    const BIGNUM *VAR_14 = ((void*)0);
    BN_CTX *VAR_15 = ((void*)0);
    int VAR_16 = -1;

    if (VAR_7 == ((void*)0)) {
        VAR_7 = VAR_15 = FUNC_3(VAR_1->libctx);
        if (VAR_7 == ((void*)0))
            return 0;
    }

    FUNC_4(VAR_7);

    VAR_11 = FUNC_2(VAR_7);
    VAR_12 = FUNC_2(VAR_7);
    if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0)) {
        VAR_16 = 0;
        goto ret;
    }






    if ((VAR_3 != ((void*)0) && VAR_4 == 0 && FUNC_7(VAR_3) == 0)
        || (VAR_3 == ((void*)0) && VAR_4 == 1 && FUNC_7(VAR_6[0]) == 0)) {

        if (VAR_4 == 0) {
            VAR_13 = FUNC_9(VAR_1);
            VAR_14 = VAR_3;
        } else {
            VAR_13 = VAR_5[0];
            VAR_14 = VAR_6[0];
        }

        if (FUNC_10(VAR_1, VAR_13) == 1
            || FUNC_8(VAR_14)) {
            VAR_16 = FUNC_11(VAR_1, VAR_2);
            goto ret;
        }

        FUNC_19(&VAR_10, 0, sizeof(VAR_10));

        if (VAR_1->meth->point_get_affine_coordinates(VAR_1, VAR_13,
                                                      VAR_11, VAR_12, VAR_7) != 1
            || FUNC_6(VAR_11, VAR_10 + FUNC_16(VAR_9), VAR_9) == -1
            || FUNC_6(VAR_12, VAR_10 + FUNC_17(VAR_9), VAR_9) == -1
            || FUNC_6(VAR_14,
                            VAR_10 + FUNC_15(VAR_9), VAR_9) == -1
            || FUNC_20(VAR_8, VAR_10) != 0
            || FUNC_5(VAR_10 + FUNC_13(VAR_9), VAR_9, VAR_11) == ((void*)0)
            || FUNC_5(VAR_10 + FUNC_14(VAR_9), VAR_9, VAR_12) == ((void*)0)
            || VAR_1->meth->point_set_affine_coordinates(VAR_1, VAR_2,
                                                         VAR_11, VAR_12, VAR_7) != 1)
            goto ret;

        VAR_16 = 1;
    }

ret:

    if (VAR_16 == -1)
        VAR_16 = FUNC_18(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    FUNC_12(VAR_10 + FUNC_15(VAR_9), VAR_9);
    FUNC_0(VAR_7);
    FUNC_1(VAR_15);
    return VAR_16;
}
