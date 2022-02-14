
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int EC_POINT ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef int ECDSA_SIG ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const**,int const**) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int const*,int *,int *,int *,int *,int *) ;
 int * FUNC_11 (int const*) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int const*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_17 () ;
 int * FUNC_18 (int *,int ,int const*,size_t,int const*,size_t const) ;
 int FUNC_19 (int *,int ,int *,int const*,size_t,int const*,size_t const) ;
 int FUNC_20 (char const*) ;
 size_t FUNC_21 (char const*) ;

__attribute__((used)) static int FUNC_22(const EC_GROUP *VAR_2,
                         const char *VAR_3,
                         const char *VAR_4,
                         const char *VAR_5,
                         const char *VAR_6,
                         const char *VAR_7,
                         const char *VAR_8)
{
    const size_t VAR_9 = FUNC_21(VAR_5);
    int VAR_10 = 0;
    BIGNUM *VAR_11 = ((void*)0);
    EC_POINT *VAR_12 = ((void*)0);
    EC_KEY *VAR_13 = ((void*)0);
    ECDSA_SIG *VAR_14 = ((void*)0);
    const BIGNUM *VAR_15 = ((void*)0);
    const BIGNUM *VAR_16 = ((void*)0);
    BIGNUM *VAR_17 = ((void*)0);
    BIGNUM *VAR_18 = ((void*)0);

    if (!FUNC_16(FUNC_1(&VAR_11, VAR_4)))
        goto done;

    VAR_13 = FUNC_5();
    if (!FUNC_14(VAR_13)
            || !FUNC_16(FUNC_6(VAR_13, VAR_2))
            || !FUNC_16(FUNC_7(VAR_13, VAR_11)))
        goto done;

    VAR_12 = FUNC_11(VAR_2);
    if (!FUNC_14(VAR_12)
            || !FUNC_16(FUNC_10(VAR_2, VAR_12, VAR_11, ((void*)0), ((void*)0), ((void*)0)))
            || !FUNC_16(FUNC_8(VAR_13, VAR_12)))
        goto done;

    FUNC_20(VAR_6);
    VAR_14 = FUNC_18(VAR_13, FUNC_12(), (const uint8_t *)VAR_3, FUNC_21(VAR_3),
                      (const uint8_t *)VAR_5, VAR_9);
    if (!FUNC_14(VAR_14)
            || !FUNC_15(VAR_0, VAR_1)) {
        FUNC_17();
        goto done;
    }
    FUNC_17();

    FUNC_3(VAR_14, &VAR_15, &VAR_16);

    if (!FUNC_16(FUNC_1(&VAR_17, VAR_7))
            || !FUNC_16(FUNC_1(&VAR_18, VAR_8))
            || !FUNC_13(VAR_17, VAR_15)
            || !FUNC_13(VAR_18, VAR_16))
        goto done;

    VAR_10 = FUNC_19(VAR_13, FUNC_12(), VAR_14, (const uint8_t *)VAR_3,
                       FUNC_21(VAR_3), (const uint8_t *)VAR_5, VAR_9);


    FUNC_16(VAR_10);

 done:
    FUNC_2(VAR_14);
    FUNC_9(VAR_12);
    FUNC_4(VAR_13);
    FUNC_0(VAR_11);
    FUNC_0(VAR_17);
    FUNC_0(VAR_18);

    return VAR_10;
}
