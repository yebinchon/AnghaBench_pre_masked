
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nid; int md_nid; char* r; char* s; char* msg; char const* Q; int k; int d; } ;
typedef unsigned char EVP_MD_CTX ;
typedef unsigned char EC_KEY ;
typedef unsigned char ECDSA_SIG ;
typedef unsigned char BIGNUM ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 size_t FUNC_2 (unsigned char**,char const*) ;
 unsigned char* FUNC_3 () ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*,unsigned char const**,unsigned char const**) ;
 unsigned char* FUNC_6 (unsigned char*,unsigned int,unsigned char*,unsigned char*,unsigned char*) ;
 long FUNC_7 (unsigned char*,unsigned int,unsigned char*,unsigned char*) ;
 size_t FUNC_8 (unsigned char*,int *,unsigned char**,unsigned char**) ;
 int FUNC_9 (unsigned char*) ;
 size_t FUNC_10 (unsigned char*) ;
 size_t FUNC_11 (unsigned char*,int ,unsigned char**,int *) ;
 unsigned char* FUNC_12 (int) ;
 int * FUNC_13 (int) ;
 size_t FUNC_14 (unsigned char*,unsigned char*,unsigned int*) ;
 size_t FUNC_15 (unsigned char*,int ,int *) ;
 size_t FUNC_16 (unsigned char*,unsigned char*,long) ;
 int VAR_0 ;
 int FUNC_17 (unsigned char*) ;
 unsigned char* FUNC_18 () ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (unsigned char*) ;
 unsigned char* FUNC_22 (char const*,long*) ;
 int VAR_1 ;
 int FUNC_23 (unsigned char const*,unsigned char*) ;
 int FUNC_24 (char*,int ) ;
 int FUNC_25 (long,int) ;
 int FUNC_26 (unsigned char*,long,unsigned char*,size_t) ;
 int FUNC_27 (unsigned char*) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (size_t) ;
 size_t FUNC_30 () ;
 TYPE_1__* VAR_2 ;
 int * VAR_3 ;
 size_t FUNC_31 () ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_32(int VAR_5)
{
    int VAR_6, VAR_7, VAR_8 = 0;
    const char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    unsigned char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
    unsigned char VAR_15[VAR_0];
    unsigned int VAR_16 = 0;
    long VAR_17, VAR_18 = 0;
    size_t VAR_19;
    EVP_MD_CTX *VAR_20 = ((void*)0);
    EC_KEY *VAR_21 = ((void*)0);
    ECDSA_SIG *VAR_22 = ((void*)0);
    BIGNUM *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
    BIGNUM *VAR_25 = ((void*)0), *VAR_26 = ((void*)0);
    const BIGNUM *VAR_27 = ((void*)0), *VAR_28 = ((void*)0);

    VAR_6 = VAR_2[VAR_5].nid;
    VAR_7 = VAR_2[VAR_5].md_nid;
    VAR_9 = VAR_2[VAR_5].r;
    VAR_10 = VAR_2[VAR_5].s;
    VAR_11 = VAR_2[VAR_5].msg;
    VAR_3[0] = VAR_2[VAR_5].d;
    VAR_3[1] = VAR_2[VAR_5].k;

    FUNC_24("ECDSA KATs for curve %s", FUNC_20(VAR_6));






    if (!FUNC_27(VAR_20 = FUNC_18())

        || !FUNC_27(VAR_14 = FUNC_22(VAR_11, &VAR_18))
        || !FUNC_29(FUNC_15(VAR_20, FUNC_19(VAR_7), ((void*)0)))
        || !FUNC_29(FUNC_16(VAR_20, VAR_14, VAR_18))
        || !FUNC_29(FUNC_14(VAR_20, VAR_15, &VAR_16))

        || !FUNC_27(VAR_21 = FUNC_12(VAR_6))

        || !FUNC_27(VAR_23 = FUNC_3())
        || !FUNC_27(VAR_24 = FUNC_3())
        || !FUNC_29(FUNC_2(&VAR_23, VAR_9))
        || !FUNC_29(FUNC_2(&VAR_24, VAR_10))

        || !FUNC_29(FUNC_30()))
        goto err;


    VAR_4 = 1;
    if (!FUNC_29(FUNC_10(VAR_21))
        || !FUNC_29(VAR_19 = FUNC_11(VAR_21, VAR_1,
                                             &VAR_12, ((void*)0)))
        || !FUNC_27(VAR_13 = FUNC_22(VAR_2[VAR_5].Q, &VAR_17))
        || !FUNC_25(VAR_17, VAR_19)
        || !FUNC_26(VAR_13, VAR_17, VAR_12, VAR_19))
        goto err;


    VAR_4 = 1;
    if (!FUNC_29(FUNC_8(VAR_21, ((void*)0), &VAR_25, &VAR_26))
        || !FUNC_27(VAR_22 = FUNC_6(VAR_15, VAR_16,
                                                  VAR_25, VAR_26, VAR_21))

        || !FUNC_25(FUNC_7(VAR_15, VAR_16, VAR_22, VAR_21), 1))
        goto err;


    FUNC_5(VAR_22, &VAR_27, &VAR_28);
    if (!FUNC_23(VAR_27, VAR_23)
        || !FUNC_23(VAR_28, VAR_24))
        goto err;

    VAR_8 = 1;

 err:

    if (!FUNC_29(FUNC_31()))
        VAR_8 = 0;

    FUNC_21(VAR_14);
    FUNC_21(VAR_12);
    FUNC_21(VAR_13);
    FUNC_9(VAR_21);
    FUNC_4(VAR_22);
    FUNC_1(VAR_23);
    FUNC_1(VAR_24);
    FUNC_17(VAR_20);
    FUNC_0(VAR_25);
    FUNC_0(VAR_26);
    return VAR_8;
}
