
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tbs ;
struct TYPE_2__ {int nid; } ;
typedef unsigned char EVP_PKEY ;
typedef unsigned char EVP_MD_CTX ;
typedef unsigned char EC_KEY ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int) ;
 int FUNC_3 (unsigned char*,unsigned char*,size_t*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int *,int *,int *,unsigned char*) ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t,unsigned char*,int) ;
 int FUNC_6 (unsigned char*,int *,int *,int *,unsigned char*) ;
 int FUNC_7 (unsigned char*) ;
 unsigned char* FUNC_8 () ;
 int FUNC_9 (unsigned char*) ;
 int FUNC_10 (unsigned char*,unsigned char*) ;
 int FUNC_11 (unsigned char*) ;
 unsigned char* FUNC_12 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_13 (int) ;
 int FUNC_14 (unsigned char*) ;
 unsigned char* FUNC_15 (size_t) ;
 int FUNC_16 (unsigned char*,int) ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int,int ) ;
 int FUNC_20 (size_t,int) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (unsigned char*) ;
 int FUNC_23 (int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_24(int VAR_3)
{
    EC_KEY *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    unsigned char VAR_6, VAR_7, VAR_8[128];
    unsigned char *VAR_9 = ((void*)0);
    EVP_PKEY *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    EVP_MD_CTX *VAR_12 = ((void*)0);
    size_t VAR_13;
    int VAR_14, VAR_15 = 0;
    int VAR_16;

    VAR_14 = VAR_2[VAR_3].nid;


    if (VAR_14 == VAR_1 || VAR_14 == VAR_0) {
        FUNC_17("skipped: ECDSA unsupported for curve %s", FUNC_13(VAR_14));
        return 1;
    }

    FUNC_17("testing ECDSA for curve %s", FUNC_13(VAR_14));

    if (!FUNC_22(VAR_12 = FUNC_8())

        || !FUNC_23(FUNC_16(VAR_8, sizeof(VAR_8)))

        || !FUNC_22(VAR_5 = FUNC_2(VAR_14))
        || !FUNC_23(FUNC_1(VAR_5))
        || !FUNC_22(VAR_11 = FUNC_12())
        || !FUNC_23(FUNC_10(VAR_11, VAR_5))

        || !FUNC_22(VAR_4 = FUNC_2(VAR_14))
        || !FUNC_23(FUNC_1(VAR_4))
        || !FUNC_22(VAR_10 = FUNC_12())
        || !FUNC_23(FUNC_10(VAR_10, VAR_4)))
        goto err;

    VAR_16 = FUNC_0(VAR_5);

    if (!FUNC_19(VAR_16, 0)
        || !FUNC_22(VAR_9 = FUNC_15(VAR_13 = (size_t)VAR_16))

        || !FUNC_23(FUNC_4(VAR_12, ((void*)0), ((void*)0), ((void*)0), VAR_11))
        || !FUNC_23(FUNC_3(VAR_12, VAR_9, &VAR_13, VAR_8, sizeof(VAR_8)))
        || !FUNC_20(VAR_13, FUNC_0(VAR_5))

        || !FUNC_23(FUNC_9(VAR_12))
        || !FUNC_23(FUNC_6(VAR_12, ((void*)0), ((void*)0), ((void*)0), VAR_10))
        || !FUNC_18(FUNC_5(VAR_12, VAR_9, VAR_13, VAR_8, sizeof(VAR_8)), 0)

        || !FUNC_23(FUNC_9(VAR_12))
        || !FUNC_23(FUNC_6(VAR_12, ((void*)0), ((void*)0), ((void*)0), VAR_11))
        || !FUNC_18(FUNC_5(VAR_12, VAR_9, VAR_13 - 1, VAR_8, sizeof(VAR_8)), -1)

        || !FUNC_23(FUNC_9(VAR_12))
        || !FUNC_23(FUNC_6(VAR_12, ((void*)0), ((void*)0), ((void*)0), VAR_11))
        || !FUNC_18(FUNC_5(VAR_12, VAR_9, VAR_13, VAR_8, sizeof(VAR_8)), 1))
        goto err;


    VAR_8[0] ^= 1;
    if (!FUNC_23(FUNC_9(VAR_12))
        || !FUNC_23(FUNC_6(VAR_12, ((void*)0), ((void*)0), ((void*)0), VAR_11))
        || !FUNC_18(FUNC_5(VAR_12, VAR_9, VAR_13, VAR_8, sizeof(VAR_8)), 0))
        goto err;

    VAR_8[0] ^= 1;
    if (!FUNC_23(FUNC_9(VAR_12))
        || !FUNC_23(FUNC_6(VAR_12, ((void*)0), ((void*)0), ((void*)0), VAR_11))
        || !FUNC_18(FUNC_5(VAR_12, VAR_9, VAR_13, VAR_8, sizeof(VAR_8)), 1))
        goto err;
    VAR_7 = VAR_8[0] % VAR_13;
    VAR_6 = VAR_8[1] ? VAR_8[1] : 1;
    VAR_9[VAR_7] ^= VAR_6;
    if (!FUNC_23(FUNC_9(VAR_12))
        || !FUNC_23(FUNC_6(VAR_12, ((void*)0), ((void*)0), ((void*)0), VAR_11))
        || !FUNC_21(FUNC_5(VAR_12, VAR_9, VAR_13, VAR_8, sizeof(VAR_8)), 1))
        goto err;

    VAR_9[VAR_7] ^= VAR_6;
    if (!FUNC_23(FUNC_9(VAR_12))
        || !FUNC_23(FUNC_6(VAR_12, ((void*)0), ((void*)0), ((void*)0), VAR_11))
        || !FUNC_18(FUNC_5(VAR_12, VAR_9, VAR_13, VAR_8, sizeof(VAR_8)), 1))
        goto err;

    VAR_15 = 1;
 err:
    FUNC_11(VAR_11);
    FUNC_11(VAR_10);
    FUNC_7(VAR_12);
    FUNC_14(VAR_9);
    return VAR_15;
}
