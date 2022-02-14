
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int * parameter; int const* algorithm; } ;
typedef TYPE_3__ X509_ALGOR ;
struct TYPE_23__ {int flags; } ;
struct TYPE_20__ {TYPE_1__* dh; } ;
struct TYPE_22__ {TYPE_2__ pkey; } ;
struct TYPE_19__ {int pub_key; } ;
typedef int EVP_PKEY_CTX ;
typedef TYPE_4__ EVP_PKEY ;
typedef int EVP_MD ;
typedef int EVP_CIPHER_CTX ;
typedef int CMS_RecipientInfo ;
typedef TYPE_5__ ASN1_STRING ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_OBJECT ;
typedef int ASN1_INTEGER ;
typedef TYPE_5__ ASN1_BIT_STRING ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 () ;
 int FUNC_4 (TYPE_5__*,unsigned char*,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int * FUNC_8 (int ,int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_3__**,int **) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_3__**,TYPE_5__**,int *,int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 scalar_t__ FUNC_16 (int const*) ;
 TYPE_4__* FUNC_17 (int *) ;
 int FUNC_18 (int *,int const**) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *,int const*) ;
 scalar_t__ FUNC_21 (int *,unsigned char*,size_t) ;
 scalar_t__ FUNC_22 (int *,int const*) ;
 scalar_t__ FUNC_23 (int *,int) ;
 scalar_t__ FUNC_24 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_25 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int const* FUNC_26 (int) ;
 int FUNC_27 (unsigned char*) ;
 unsigned char* FUNC_28 (int ,size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_29 (TYPE_3__*) ;
 int FUNC_30 (int const**,int *,int *,TYPE_3__*) ;
 TYPE_3__* FUNC_31 () ;
 int FUNC_32 (TYPE_3__*,int const*,int ,TYPE_5__*) ;
 int FUNC_33 (int *,unsigned char**) ;
 int FUNC_34 (TYPE_3__*,unsigned char**) ;

__attribute__((used)) static int FUNC_35(CMS_RecipientInfo *VAR_9)
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
    unsigned char *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
    int VAR_22;
    size_t VAR_23 = 0;
    int VAR_24 = 0;
    int VAR_25, VAR_26;
    const EVP_MD *VAR_27;

    VAR_10 = FUNC_9(VAR_9);
    if (VAR_10 == ((void*)0))
        return 0;

    VAR_11 = FUNC_17(VAR_10);
    if (!FUNC_12(VAR_9, &VAR_14, &VAR_17,
                                             ((void*)0), ((void*)0), ((void*)0)))
        goto err;
    FUNC_30(&VAR_16, ((void*)0), ((void*)0), VAR_14);

    if (VAR_16 == FUNC_26(VAR_6)) {
        ASN1_INTEGER *VAR_28 = FUNC_8(VAR_11->pkey.dh->pub_key, ((void*)0));

        if (VAR_28 == ((void*)0))
            goto err;


        VAR_22 = FUNC_33(VAR_28, &VAR_20);
        FUNC_0(VAR_28);
        if (VAR_22 <= 0)
            goto err;
        FUNC_4(VAR_17, VAR_20, VAR_22);
        VAR_17->flags &= ~(VAR_0 | 0x07);
        VAR_17->flags |= VAR_0;

        VAR_20 = ((void*)0);
        FUNC_32(VAR_14, FUNC_26(VAR_3),
                        VAR_8, ((void*)0));
    }


    VAR_25 = FUNC_19(VAR_10);
    if (VAR_25 <= 0)
        goto err;
    if (!FUNC_18(VAR_10, &VAR_27))
        goto err;

    if (VAR_25 == VAR_1) {
        VAR_25 = VAR_2;
        if (FUNC_24(VAR_10, VAR_25) <= 0)
            goto err;
    } else if (VAR_25 != VAR_2)

        goto err;
    if (VAR_27 == ((void*)0)) {

        VAR_27 = FUNC_25();
        if (FUNC_22(VAR_10, VAR_27) <= 0)
            goto err;
    } else if (FUNC_16(VAR_27) != VAR_5)

        goto err;

    if (!FUNC_10(VAR_9, &VAR_14, &VAR_19))
        goto err;


    VAR_12 = FUNC_11(VAR_9);
    VAR_26 = FUNC_14(VAR_12);
    if (FUNC_20(VAR_10, FUNC_26(VAR_26)) <= 0)
        goto err;
    VAR_13 = FUNC_13(VAR_12);



    VAR_15 = FUNC_31();
    if (VAR_15 == ((void*)0))
        goto err;
    VAR_15->algorithm = FUNC_26(VAR_26);
    VAR_15->parameter = FUNC_7();
    if (VAR_15->parameter == ((void*)0))
        goto err;
    if (FUNC_15(VAR_12, VAR_15->parameter) <= 0)
        goto err;
    if (FUNC_6(VAR_15->parameter) == VAR_6) {
        FUNC_5(VAR_15->parameter);
        VAR_15->parameter = ((void*)0);
    }

    if (FUNC_23(VAR_10, VAR_13) <= 0)
        goto err;

    if (VAR_19) {
        VAR_23 = FUNC_2(VAR_19);
        VAR_21 = FUNC_28(FUNC_1(VAR_19), VAR_23);
        if (!VAR_21)
            goto err;
    }

    if (FUNC_21(VAR_10, VAR_21, VAR_23) <= 0)
        goto err;
    VAR_21 = ((void*)0);





    VAR_20 = ((void*)0);
    VAR_22 = FUNC_34(VAR_15, &VAR_20);
    if (VAR_20 == ((void*)0) || VAR_22 == 0)
        goto err;
    VAR_18 = FUNC_3();
    if (VAR_18 == ((void*)0))
        goto err;
    FUNC_4(VAR_18, VAR_20, VAR_22);
    VAR_20 = ((void*)0);
    FUNC_32(VAR_14, FUNC_26(VAR_4),
                    VAR_7, VAR_18);

    VAR_24 = 1;

 err:
    FUNC_27(VAR_20);
    FUNC_29(VAR_15);
    FUNC_27(VAR_21);
    return VAR_24;
}
