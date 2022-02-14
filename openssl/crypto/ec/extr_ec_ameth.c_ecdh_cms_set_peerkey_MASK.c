
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_8__ {int ec; } ;
struct TYPE_9__ {TYPE_1__ pkey; } ;
typedef int EVP_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef int ASN1_OBJECT ;
typedef int ASN1_BIT_STRING ;


 unsigned char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int const*) ;
 TYPE_2__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 () ;
 int FUNC_10 (TYPE_2__*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_11 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (int const**,int*,void const**,int *) ;
 int * FUNC_13 (int,void const*) ;
 int FUNC_14 (int **,unsigned char const**,int) ;

__attribute__((used)) static int FUNC_15(EVP_PKEY_CTX *VAR_3,
                                X509_ALGOR *VAR_4, ASN1_BIT_STRING *VAR_5)
{
    const ASN1_OBJECT *VAR_6;
    int VAR_7;
    const void *VAR_8;
    int VAR_9 = 0;
    EVP_PKEY *VAR_10 = ((void*)0);
    EC_KEY *VAR_11 = ((void*)0);
    const unsigned char *VAR_12;
    int VAR_13;
    FUNC_12(&VAR_6, &VAR_7, &VAR_8, VAR_4);
    if (FUNC_11(VAR_6) != VAR_0)
        goto err;

    if (VAR_7 == VAR_2 || VAR_7 == VAR_1) {
        const EC_GROUP *VAR_14;
        EVP_PKEY *VAR_15;
        VAR_15 = FUNC_6(VAR_3);
        if (VAR_15 == ((void*)0))
            goto err;
        VAR_14 = FUNC_3(VAR_15->pkey.ec);
        VAR_11 = FUNC_4();
        if (VAR_11 == ((void*)0))
            goto err;
        if (!FUNC_5(VAR_11, VAR_14))
            goto err;
    } else {
        VAR_11 = FUNC_13(VAR_7, VAR_8);
        if (!VAR_11)
            goto err;
    }

    VAR_13 = FUNC_1(VAR_5);
    VAR_12 = FUNC_0(VAR_5);
    if (VAR_12 == ((void*)0) || VAR_13 == 0)
        goto err;
    if (!FUNC_14(&VAR_11, &VAR_12, VAR_13))
        goto err;
    VAR_10 = FUNC_9();
    if (VAR_10 == ((void*)0))
        goto err;
    FUNC_10(VAR_10, VAR_11);
    if (FUNC_7(VAR_3, VAR_10) > 0)
        VAR_9 = 1;
 err:
    FUNC_2(VAR_11);
    FUNC_8(VAR_10);
    return VAR_9;
}
