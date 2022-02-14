
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
typedef int EVP_MD ;
typedef unsigned char EC_POINT ;
typedef unsigned char EC_KEY ;
typedef int EC_GROUP ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char const*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 () ;
 int FUNC_4 (unsigned char*,int const*) ;
 int FUNC_5 (unsigned char*,int *) ;
 int FUNC_6 (unsigned char*,unsigned char*) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (int const*,unsigned char*,int *,int *,int *,int *) ;
 unsigned char* FUNC_9 (int const*) ;
 int FUNC_10 (unsigned char*) ;
 unsigned char* FUNC_11 (char const*,int *) ;
 unsigned char* FUNC_12 (size_t) ;
 int FUNC_13 (size_t,size_t const) ;
 int FUNC_14 (unsigned char*,size_t,...) ;
 int FUNC_15 (unsigned char*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_18 () ;
 int FUNC_19 (unsigned char*,int const*,size_t const,size_t*) ;
 int FUNC_20 (unsigned char*,int const*,unsigned char*,size_t,unsigned char*,size_t*) ;
 int FUNC_21 (unsigned char*,int const*,unsigned char const*,size_t const,unsigned char*,size_t*) ;
 int FUNC_22 (unsigned char*,int const*,size_t,size_t*) ;
 int FUNC_23 (char const*) ;
 size_t FUNC_24 (char const*) ;

__attribute__((used)) static int FUNC_25(const EC_GROUP *VAR_2,
                          const EVP_MD *VAR_3,
                          const char *VAR_4,
                          const char *VAR_5,
                          const char *VAR_6, const char *VAR_7)
{
    const size_t VAR_8 = FUNC_24(VAR_5);
    BIGNUM *VAR_9 = ((void*)0);
    EC_KEY *VAR_10 = ((void*)0);
    EC_POINT *VAR_11 = ((void*)0);
    unsigned char *VAR_12 = FUNC_11(VAR_7, ((void*)0));
    size_t VAR_13 = 0;
    size_t VAR_14 = 0;
    uint8_t *VAR_15 = ((void*)0);
    uint8_t *VAR_16 = ((void*)0);
    size_t VAR_17 = VAR_8;
    int VAR_18 = 0;

    if (!FUNC_15(VAR_12)
            || !FUNC_17(FUNC_1(&VAR_9, VAR_4)))
        goto done;

    VAR_10 = FUNC_3();
    if (!FUNC_15(VAR_10)
            || !FUNC_17(FUNC_4(VAR_10, VAR_2))
            || !FUNC_17(FUNC_5(VAR_10, VAR_9)))
        goto done;

    VAR_11 = FUNC_9(VAR_2);
    if (!FUNC_15(VAR_11)
            || !FUNC_17(FUNC_8(VAR_2, VAR_11, VAR_9, ((void*)0), ((void*)0), ((void*)0)))
            || !FUNC_17(FUNC_6(VAR_10, VAR_11))
            || !FUNC_17(FUNC_19(VAR_10, VAR_3, VAR_8, &VAR_13)))
        goto done;

    VAR_15 = FUNC_12(VAR_13);
    if (!FUNC_15(VAR_15))
        goto done;

    FUNC_23(VAR_6);
    if (!FUNC_17(FUNC_21(VAR_10, VAR_3, (const uint8_t *)VAR_5, VAR_8,
                               VAR_15, &VAR_13))
            || !FUNC_16(VAR_0, VAR_1)) {
        FUNC_18();
        goto done;
    }
    FUNC_18();

    if (!FUNC_14(VAR_15, VAR_13, VAR_12, VAR_13))
        goto done;

    if (!FUNC_17(FUNC_22(VAR_10, VAR_3, VAR_13, &VAR_14))
            || !FUNC_13(VAR_14, VAR_8))
        goto done;

    VAR_16 = FUNC_12(VAR_14);
    if (!FUNC_15(VAR_16)
            || !FUNC_17(FUNC_20(VAR_10, VAR_3, VAR_15, VAR_13, VAR_16, &VAR_17))
            || !FUNC_13(VAR_17, VAR_8)
            || !FUNC_14(VAR_16, VAR_17, VAR_5, VAR_8))
        goto done;

    VAR_18 = 1;
 done:
    FUNC_0(VAR_9);
    FUNC_7(VAR_11);
    FUNC_10(VAR_15);
    FUNC_10(VAR_16);
    FUNC_10(VAR_12);
    FUNC_2(VAR_10);
    return VAR_18;
}
