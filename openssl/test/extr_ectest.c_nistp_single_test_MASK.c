
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nistp_test_params {int d; int degree; int order; int Gy; int Gx; int Qy; int Qx; int b; int a; int p; int (* meth ) () ;} ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *,int *,int *,int *) ;
 int FUNC_16 (int *,int *,int *,int ) ;
 int FUNC_17 (int *,int *,int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *,int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int *,int *) ;
 int FUNC_22 (int *,int *,int *,int *,int *,int *) ;
 int * FUNC_23 (int *) ;
 int FUNC_24 (int *,int *,int *,int *,int *) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int,int ) ;
 int FUNC_27 (char*,...) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int *) ;
 struct nistp_test_params* VAR_0 ;
 int FUNC_31 () ;

__attribute__((used)) static int FUNC_32(int VAR_1)
{
    const struct nistp_test_params *VAR_2 = VAR_0 + VAR_1;
    BN_CTX *VAR_3 = ((void*)0);
    BIGNUM *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    BIGNUM *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    EC_GROUP *VAR_13 = ((void*)0);
    EC_POINT *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    int VAR_18 = 0;

    FUNC_27("NIST curve P-%d (optimised implementation):",
              VAR_2->degree);
    if (!FUNC_28(VAR_3 = FUNC_1())
        || !FUNC_28(VAR_4 = FUNC_6())
        || !FUNC_28(VAR_5 = FUNC_6())
        || !FUNC_28(VAR_6 = FUNC_6())
        || !FUNC_28(VAR_7 = FUNC_6())
        || !FUNC_28(VAR_8 = FUNC_6())
        || !FUNC_28(VAR_10 = FUNC_6())
        || !FUNC_28(VAR_9 = FUNC_6())
        || !FUNC_28(VAR_11 = FUNC_6())
        || !FUNC_28(VAR_12 = FUNC_6())

        || !FUNC_28(VAR_13 = FUNC_13(VAR_2->meth()))
        || !FUNC_29(FUNC_5(&VAR_4, VAR_2->p))
        || !FUNC_26(1, FUNC_3(VAR_4, VAR_3, ((void*)0)))
        || !FUNC_29(FUNC_5(&VAR_5, VAR_2->a))
        || !FUNC_29(FUNC_5(&VAR_6, VAR_2->b))
        || !FUNC_29(FUNC_15(VAR_13, VAR_4, VAR_5, VAR_6, VAR_3))
        || !FUNC_28(VAR_14 = FUNC_23(VAR_13))
        || !FUNC_28(VAR_15 = FUNC_23(VAR_13))
        || !FUNC_28(VAR_16 = FUNC_23(VAR_13))
        || !FUNC_28(VAR_17 = FUNC_23(VAR_13))
        || !FUNC_29(FUNC_5(&VAR_7, VAR_2->Qx))
        || !FUNC_29(FUNC_5(&VAR_8, VAR_2->Qy))
        || !FUNC_29(FUNC_2(VAR_12, VAR_8, FUNC_9()))




        || !FUNC_25(FUNC_24(VAR_13, VAR_17, VAR_7,
                                                       VAR_12, VAR_3))
        || !FUNC_29(FUNC_24(VAR_13, VAR_17, VAR_7, VAR_8,
                                                      VAR_3))
        || !FUNC_29(FUNC_5(&VAR_7, VAR_2->Gx))
        || !FUNC_29(FUNC_5(&VAR_8, VAR_2->Gy))
        || !FUNC_29(FUNC_24(VAR_13, VAR_14, VAR_7, VAR_8, VAR_3))
        || !FUNC_29(FUNC_5(&VAR_11, VAR_2->order))
        || !FUNC_29(FUNC_16(VAR_13, VAR_14, VAR_11, FUNC_9()))
        || !FUNC_26(FUNC_11(VAR_13), VAR_2->degree))
        goto err;

    FUNC_27("NIST test vectors ... ");
    if (!FUNC_29(FUNC_5(&VAR_9, VAR_2->d)))
        goto err;

    FUNC_22(VAR_13, VAR_16, VAR_9, ((void*)0), ((void*)0), VAR_3);
    if (!FUNC_26(0, FUNC_17(VAR_13, VAR_16, VAR_17, VAR_3)))
        goto err;

    FUNC_22(VAR_13, VAR_16, ((void*)0), VAR_14, VAR_9, VAR_3);
    if (!FUNC_26(0, FUNC_17(VAR_13, VAR_16, VAR_17, VAR_3))


        || !FUNC_29(FUNC_19(VAR_13, VAR_15, VAR_14, VAR_3))
        || !FUNC_29(FUNC_16(VAR_13, VAR_15, VAR_11, FUNC_9()))

        || !FUNC_29(FUNC_7(VAR_10, VAR_9, 1)))
        goto err;



    FUNC_22(VAR_13, VAR_16, VAR_10, ((void*)0), ((void*)0), VAR_3);
    if (!FUNC_26(0, FUNC_17(VAR_13, VAR_16, VAR_17, VAR_3)))
        goto err;

    FUNC_22(VAR_13, VAR_16, ((void*)0), VAR_15, VAR_10, VAR_3);
    if (!FUNC_26(0, FUNC_17(VAR_13, VAR_16, VAR_17, VAR_3))





        || !FUNC_25(FUNC_12(VAR_13))


        || !FUNC_29(FUNC_14(VAR_13, VAR_3))
        || !FUNC_29(FUNC_12(VAR_13)))
        goto err;


    FUNC_22(VAR_13, VAR_16, VAR_10, ((void*)0), ((void*)0), VAR_3);
    if (!FUNC_26(0, FUNC_17(VAR_13, VAR_16, VAR_17, VAR_3)))
        goto err;

    FUNC_22(VAR_13, VAR_16, ((void*)0), VAR_15, VAR_10, VAR_3);
    if (!FUNC_26(0, FUNC_17(VAR_13, VAR_16, VAR_17, VAR_3))


        || !FUNC_29(FUNC_16(VAR_13, VAR_14, VAR_11, FUNC_9())))
        goto err;

    FUNC_22(VAR_13, VAR_16, VAR_9, ((void*)0), ((void*)0), VAR_3);
    if (!FUNC_26(0, FUNC_17(VAR_13, VAR_16, VAR_17, VAR_3)))
        goto err;

    FUNC_22(VAR_13, VAR_16, ((void*)0), VAR_14, VAR_9, VAR_3);
    if (!FUNC_26(0, FUNC_17(VAR_13, VAR_16, VAR_17, VAR_3)))
        goto err;


    if (!FUNC_29(FUNC_8(VAR_10, 32))
        || !FUNC_29(FUNC_8(VAR_9, 31))
        || !FUNC_29(FUNC_18(VAR_15, VAR_14))
        || !FUNC_29(FUNC_21(VAR_13, VAR_15, VAR_3))
        || !FUNC_29(FUNC_22(VAR_13, VAR_16, VAR_10, VAR_15, VAR_9, VAR_3))
        || !FUNC_26(0, FUNC_17(VAR_13, VAR_16, VAR_14, VAR_3)))
      goto err;

    VAR_18 = FUNC_30(VAR_13);
err:
    FUNC_10(VAR_13);
    FUNC_20(VAR_14);
    FUNC_20(VAR_15);
    FUNC_20(VAR_16);
    FUNC_20(VAR_17);
    FUNC_4(VAR_9);
    FUNC_4(VAR_10);
    FUNC_4(VAR_4);
    FUNC_4(VAR_5);
    FUNC_4(VAR_6);
    FUNC_4(VAR_7);
    FUNC_4(VAR_8);
    FUNC_4(VAR_11);
    FUNC_4(VAR_12);
    FUNC_0(VAR_3);
    return VAR_18;
}
