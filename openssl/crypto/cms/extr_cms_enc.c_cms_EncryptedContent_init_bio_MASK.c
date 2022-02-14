
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* parameter; int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_9__ {unsigned char* key; size_t keylen; scalar_t__ debug; int * cipher; TYPE_1__* contentEncryptionAlgorithm; } ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;
typedef TYPE_2__ CMS_EncryptedContentInfo ;
typedef int BIO ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 int * FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 size_t FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,unsigned char*) ;
 scalar_t__ FUNC_11 (int *,size_t) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_14 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_15 (int *,int const*,int *,unsigned char*,unsigned char*,int) ;
 int VAR_6 ;
 int * FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (unsigned char*,size_t) ;
 unsigned char* FUNC_19 (size_t) ;
 scalar_t__ FUNC_20 (unsigned char*,int) ;
 scalar_t__ VAR_7 ;

BIO *FUNC_21(CMS_EncryptedContentInfo *VAR_8)
{
    BIO *VAR_9;
    EVP_CIPHER_CTX *VAR_10;
    const EVP_CIPHER *VAR_11;
    X509_ALGOR *VAR_12 = VAR_8->contentEncryptionAlgorithm;
    unsigned char VAR_13[VAR_6], *VAR_14 = ((void*)0);
    unsigned char *VAR_15 = ((void*)0);
    size_t VAR_16 = 0;

    int VAR_17 = 0;

    int VAR_18, VAR_19 = 0;

    VAR_18 = VAR_8->cipher ? 1 : 0;

    VAR_9 = FUNC_5(FUNC_2());
    if (VAR_9 == ((void*)0)) {
        FUNC_6(VAR_0, VAR_5);
        return ((void*)0);
    }

    FUNC_4(VAR_9, &VAR_10);

    if (VAR_18) {
        VAR_11 = VAR_8->cipher;



        if (VAR_8->key)
            VAR_8->cipher = ((void*)0);
    } else {
        VAR_11 = FUNC_16(VAR_12->algorithm);

        if (!VAR_11) {
            FUNC_6(VAR_0, VAR_4);
            goto err;
        }
    }

    if (FUNC_15(VAR_10, VAR_11, ((void*)0), ((void*)0), ((void*)0), VAR_18) <= 0) {
        FUNC_6(VAR_0,
               VAR_1);
        goto err;
    }

    if (VAR_18) {
        int VAR_20;
        VAR_12->algorithm = FUNC_17(FUNC_12(VAR_10));

        VAR_20 = FUNC_8(VAR_10);
        if (VAR_20 > 0) {
            if (FUNC_20(VAR_13, VAR_20) <= 0)
                goto err;
            VAR_14 = VAR_13;
        }
    } else if (FUNC_13(VAR_10, VAR_12->parameter) <= 0) {
        FUNC_6(VAR_0,
               VAR_2);
        goto err;
    }
    VAR_16 = FUNC_9(VAR_10);

    if (!VAR_18 || !VAR_8->key) {
        VAR_15 = FUNC_19(VAR_16);
        if (VAR_15 == ((void*)0)) {
            FUNC_6(VAR_0, VAR_5);
            goto err;
        }
        if (FUNC_10(VAR_10, VAR_15) <= 0)
            goto err;
    }

    if (!VAR_8->key) {
        VAR_8->key = VAR_15;
        VAR_8->keylen = VAR_16;
        VAR_15 = ((void*)0);
        if (VAR_18)
            VAR_19 = 1;
        else
            FUNC_7();

    }

    if (VAR_8->keylen != VAR_16) {

        if (FUNC_11(VAR_10, VAR_8->keylen) <= 0) {




            if (VAR_18 || VAR_8->debug) {
                FUNC_6(VAR_0,
                       VAR_3);
                goto err;
            } else {

                FUNC_18(VAR_8->key, VAR_8->keylen);
                VAR_8->key = VAR_15;
                VAR_8->keylen = VAR_16;
                VAR_15 = ((void*)0);
                FUNC_7();
            }
        }
    }

    if (FUNC_15(VAR_10, ((void*)0), ((void*)0), VAR_8->key, VAR_14, VAR_18) <= 0) {
        FUNC_6(VAR_0,
               VAR_1);
        goto err;
    }
    if (VAR_18) {
        VAR_12->parameter = FUNC_1();
        if (VAR_12->parameter == ((void*)0)) {
            FUNC_6(VAR_0, VAR_5);
            goto err;
        }
        if (FUNC_14(VAR_10, VAR_12->parameter) <= 0) {
            FUNC_6(VAR_0,
                   VAR_2);
            goto err;
        }

        if (VAR_12->parameter->type == VAR_7) {
            FUNC_0(VAR_12->parameter);
            VAR_12->parameter = ((void*)0);
        }
    }
    VAR_17 = 1;

 err:
    if (!VAR_19 || !VAR_17) {
        FUNC_18(VAR_8->key, VAR_8->keylen);
        VAR_8->key = ((void*)0);
    }
    FUNC_18(VAR_15, VAR_16);
    if (VAR_17)
        return VAR_9;
    FUNC_3(VAR_9);
    return ((void*)0);
}
