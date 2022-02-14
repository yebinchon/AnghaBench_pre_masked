
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nid; } ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int *) ;
 int FUNC_14 (int *,int *,int *,int *,int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int ) ;
 int * FUNC_17 (int) ;
 int FUNC_18 (int *,int *,int *,int *,int *) ;
 int FUNC_19 (int *,int *,int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,int *,int *,int *) ;
 int * FUNC_22 (int *) ;
 int FUNC_23 (int *,int *,int *,int *,int *) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (char*,int ) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_30(int VAR_1)
{
    int VAR_2 = 0;
    int VAR_3 = VAR_0[VAR_1].nid;
    BN_CTX *VAR_4 = ((void*)0);
    EC_GROUP *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    EC_POINT *VAR_7 = ((void*)0);
    BIGNUM *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0),
           *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);

    FUNC_27("Curve %s cardinality test", FUNC_24(VAR_3));

    if (!FUNC_28(VAR_4 = FUNC_3())
        || !FUNC_28(VAR_5 = FUNC_17(VAR_3))
        || !FUNC_28(VAR_6 = FUNC_16(FUNC_15(VAR_5)))) {
        FUNC_10(VAR_5);
        FUNC_10(VAR_6);
        FUNC_1(VAR_4);
        return 0;
    }

    FUNC_4(VAR_4);
    VAR_8 = FUNC_2(VAR_4);
    VAR_9 = FUNC_2(VAR_4);
    VAR_10 = FUNC_2(VAR_4);
    VAR_11 = FUNC_2(VAR_4);
    VAR_12 = FUNC_2(VAR_4);
    VAR_13 = FUNC_2(VAR_4);
    VAR_14 = FUNC_2(VAR_4);

    if (!FUNC_28(VAR_15 = FUNC_2(VAR_4))

        || !FUNC_29(FUNC_14(VAR_5, VAR_8, VAR_9, VAR_10, VAR_4))
        || !FUNC_29(FUNC_21(VAR_5,
                      FUNC_11(VAR_5), VAR_11, VAR_12, VAR_4))
        || !FUNC_29(FUNC_5(VAR_13, FUNC_12(VAR_5)))
        || !FUNC_29(FUNC_13(VAR_5, VAR_14, VAR_4))

        || !FUNC_29(FUNC_18(VAR_6, VAR_8, VAR_9, VAR_10, VAR_4))
        || !FUNC_28(VAR_7 = FUNC_22(VAR_6))
        || !FUNC_29(FUNC_23(VAR_6, VAR_7, VAR_11, VAR_12, VAR_4))

        || !FUNC_29(FUNC_19(VAR_6, VAR_7, VAR_13, ((void*)0)))
        || !FUNC_29(FUNC_13(VAR_6, VAR_15, VAR_4))
        || !FUNC_25(VAR_14, VAR_15)

        || !FUNC_29(FUNC_7(VAR_15, 0))
        || !FUNC_29(FUNC_19(VAR_6, VAR_7, VAR_13, VAR_15))
        || !FUNC_29(FUNC_13(VAR_6, VAR_15, VAR_4))
        || !FUNC_25(VAR_14, VAR_15)

        || !FUNC_29(FUNC_7(VAR_15, 0))
        || !FUNC_29(FUNC_8(VAR_15, VAR_15, FUNC_9()))
        || !FUNC_26(FUNC_19(VAR_6, VAR_7, VAR_13, VAR_15))

        || !FUNC_26(FUNC_19(VAR_6, VAR_7, ((void*)0), ((void*)0)))

        || !FUNC_29(FUNC_7(VAR_13, 0))
        || !FUNC_26(FUNC_19(VAR_6, VAR_7, VAR_13, ((void*)0)))

        || !FUNC_29(FUNC_7(VAR_15, 0))
        || !FUNC_29(FUNC_8(VAR_15, VAR_15, FUNC_9()))
        || !FUNC_26(FUNC_19(VAR_6, VAR_7, VAR_13, ((void*)0)))

        || !FUNC_29(FUNC_6(VAR_13, VAR_8, 2))
        || !FUNC_26(FUNC_19(VAR_6, VAR_7, VAR_13, ((void*)0))))
        goto err;
    VAR_2 = 1;
 err:
    FUNC_20(VAR_7);
    FUNC_10(VAR_5);
    FUNC_10(VAR_6);
    FUNC_0(VAR_4);
    FUNC_1(VAR_4);
    return VAR_2;
}
