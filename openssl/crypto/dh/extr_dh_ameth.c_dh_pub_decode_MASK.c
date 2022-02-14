
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int X509_PUBKEY ;
typedef int X509_ALGOR ;
struct TYPE_14__ {unsigned char* data; int length; } ;
struct TYPE_13__ {int * pub_key; } ;
struct TYPE_12__ {TYPE_1__* ameth; } ;
struct TYPE_11__ {int pkey_id; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef TYPE_3__ DH ;
typedef TYPE_4__ ASN1_STRING ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_5 (int *,int*,void const**,int *) ;
 int FUNC_6 (int *,unsigned char const**,int*,int **,int *) ;
 int * FUNC_7 (int *,unsigned char const**,int) ;
 TYPE_3__* FUNC_8 (TYPE_2__*,unsigned char const**,int) ;

__attribute__((used)) static int FUNC_9(EVP_PKEY *VAR_5, X509_PUBKEY *VAR_6)
{
    const unsigned char *VAR_7, *VAR_8;
    int VAR_9, VAR_10;
    int VAR_11;
    const void *VAR_12;
    const ASN1_STRING *VAR_13;
    X509_ALGOR *VAR_14;
    ASN1_INTEGER *VAR_15 = ((void*)0);

    DH *VAR_16 = ((void*)0);

    if (!FUNC_6(((void*)0), &VAR_7, &VAR_9, &VAR_14, VAR_6))
        return 0;
    FUNC_5(((void*)0), &VAR_11, &VAR_12, VAR_14);

    if (VAR_11 != VAR_4) {
        FUNC_3(VAR_0, VAR_3);
        goto err;
    }

    VAR_13 = VAR_12;
    VAR_8 = VAR_13->data;
    VAR_10 = VAR_13->length;

    if ((VAR_16 = FUNC_8(VAR_5, &VAR_8, VAR_10)) == ((void*)0)) {
        FUNC_3(VAR_0, VAR_2);
        goto err;
    }

    if ((VAR_15 = FUNC_7(((void*)0), &VAR_7, VAR_9)) == ((void*)0)) {
        FUNC_3(VAR_0, VAR_2);
        goto err;
    }


    if ((VAR_16->pub_key = FUNC_1(VAR_15, ((void*)0))) == ((void*)0)) {
        FUNC_3(VAR_0, VAR_1);
        goto err;
    }

    FUNC_0(VAR_15);
    FUNC_4(VAR_5, VAR_5->ameth->pkey_id, VAR_16);
    return 1;

 err:
    FUNC_0(VAR_15);
    FUNC_2(VAR_16);
    return 0;

}
