
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int * parameter; int const* algorithm; } ;
typedef TYPE_2__ X509_ALGOR ;
struct TYPE_22__ {int flags; } ;
struct TYPE_19__ {int * ec; } ;
struct TYPE_21__ {TYPE_1__ pkey; } ;
typedef int EVP_PKEY_CTX ;
typedef TYPE_3__ EVP_PKEY ;
typedef int EVP_MD ;
typedef int EVP_CIPHER_CTX ;
typedef int EC_KEY ;
typedef int CMS_RecipientInfo ;
typedef TYPE_4__ ASN1_STRING ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_OBJECT ;
typedef TYPE_4__ ASN1_BIT_STRING ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (TYPE_4__*,unsigned char*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_2__**,int **) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_2__**,TYPE_4__**,int *,int *,int *) ;
 int FUNC_9 (unsigned char**,TYPE_2__*,int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (int const*) ;
 TYPE_3__* FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int const**) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_19 (int *,int const*) ;
 scalar_t__ FUNC_20 (int *,int) ;
 scalar_t__ FUNC_21 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_22 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_23 (int*,int ,int) ;
 int const* FUNC_24 (int) ;
 int FUNC_25 (unsigned char*) ;
 unsigned char* FUNC_26 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (int const**,int *,int *,TYPE_2__*) ;
 TYPE_2__* FUNC_29 () ;
 int FUNC_30 (TYPE_2__*,int const*,int ,TYPE_4__*) ;
 int FUNC_31 (TYPE_2__*,unsigned char**) ;
 int FUNC_32 (int *,unsigned char**) ;

__attribute__((used)) static int FUNC_33(CMS_RecipientInfo *VAR_9)
{
    EVP_PKEY_CTX *VAR_10;
    EVP_PKEY *VAR_11;
    EVP_CIPHER_CTX *VAR_12;
    int VAR_13;
    X509_ALGOR *VAR_14, *VAR_15 = ((void*)0);
    const ASN1_OBJECT *VAR_16;
    ASN1_BIT_STRING *VAR_17;
    ASN1_STRING *VAR_18;
    ASN1_OCTET_STRING *VAR_19;
    unsigned char *VAR_20 = ((void*)0);
    int VAR_21;
    int VAR_22 = 0;
    int VAR_23, VAR_24, VAR_25, VAR_26;
    const EVP_MD *VAR_27;
    VAR_10 = FUNC_5(VAR_9);
    if (!VAR_10)
        return 0;

    VAR_11 = FUNC_14(VAR_10);
    if (!FUNC_8(VAR_9, &VAR_14, &VAR_17,
                                             ((void*)0), ((void*)0), ((void*)0)))
        goto err;
    FUNC_28(&VAR_16, ((void*)0), ((void*)0), VAR_14);

    if (VAR_16 == FUNC_24(VAR_6)) {

        EC_KEY *VAR_28 = VAR_11->pkey.ec;

        unsigned char *VAR_29;

        VAR_21 = FUNC_32(VAR_28, ((void*)0));
        if (VAR_21 <= 0)
            goto err;
        VAR_20 = FUNC_26(VAR_21);
        if (VAR_20 == ((void*)0))
            goto err;
        VAR_29 = VAR_20;
        VAR_21 = FUNC_32(VAR_28, &VAR_29);
        if (VAR_21 <= 0)
            goto err;
        FUNC_1(VAR_17, VAR_20, VAR_21);
        VAR_17->flags &= ~(VAR_0 | 0x07);
        VAR_17->flags |= VAR_0;

        VAR_20 = ((void*)0);
        FUNC_30(VAR_14, FUNC_24(VAR_3),
                        VAR_8, ((void*)0));
    }


    VAR_24 = FUNC_17(VAR_10);
    if (VAR_24 <= 0)
        goto err;
    if (!FUNC_16(VAR_10, &VAR_27))
        goto err;
    VAR_23 = FUNC_15(VAR_10);
    if (VAR_23 < 0)
        goto err;
    else if (VAR_23 == 0)
        VAR_23 = VAR_5;
    else if (VAR_23 == 1)
        VAR_23 = VAR_4;

    if (VAR_24 == VAR_1) {
        VAR_24 = VAR_2;
        if (FUNC_21(VAR_10, VAR_24) <= 0)
            goto err;
    } else

        goto err;
    if (VAR_27 == ((void*)0)) {

        VAR_27 = FUNC_22();
        if (FUNC_19(VAR_10, VAR_27) <= 0)
            goto err;
    }

    if (!FUNC_6(VAR_9, &VAR_14, &VAR_19))
        goto err;



    if (!FUNC_23(&VAR_25, FUNC_13(VAR_27), VAR_23))
        goto err;

    VAR_12 = FUNC_7(VAR_9);
    VAR_26 = FUNC_11(VAR_12);
    VAR_13 = FUNC_10(VAR_12);



    VAR_15 = FUNC_29();
    if (VAR_15 == ((void*)0))
        goto err;
    VAR_15->algorithm = FUNC_24(VAR_26);
    VAR_15->parameter = FUNC_4();
    if (VAR_15->parameter == ((void*)0))
        goto err;
    if (FUNC_12(VAR_12, VAR_15->parameter) <= 0)
        goto err;
    if (FUNC_3(VAR_15->parameter) == VAR_6) {
        FUNC_2(VAR_15->parameter);
        VAR_15->parameter = ((void*)0);
    }

    if (FUNC_20(VAR_10, VAR_13) <= 0)
        goto err;

    VAR_21 = FUNC_9(&VAR_20, VAR_15, VAR_19, VAR_13);

    if (!VAR_21)
        goto err;

    if (FUNC_18(VAR_10, VAR_20, VAR_21) <= 0)
        goto err;
    VAR_20 = ((void*)0);





    VAR_21 = FUNC_31(VAR_15, &VAR_20);
    if (!VAR_20 || !VAR_21)
        goto err;
    VAR_18 = FUNC_0();
    if (VAR_18 == ((void*)0))
        goto err;
    FUNC_1(VAR_18, VAR_20, VAR_21);
    VAR_20 = ((void*)0);
    FUNC_30(VAR_14, FUNC_24(VAR_25), VAR_7, VAR_18);

    VAR_22 = 1;

 err:
    FUNC_25(VAR_20);
    FUNC_27(VAR_15);
    return VAR_22;
}
