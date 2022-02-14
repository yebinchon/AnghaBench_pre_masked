
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_9__ {TYPE_8__* parameter; int * algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
struct TYPE_12__ {int type; } ;
struct TYPE_11__ {int length; int data; } ;
struct TYPE_10__ {int serialNumber; int issuerKeyHash; int issuerNameHash; TYPE_1__ hashAlgorithm; } ;
typedef TYPE_2__ OCSP_CERTID ;
typedef int EVP_MD ;
typedef int ASN1_INTEGER ;
typedef TYPE_3__ ASN1_BIT_STRING ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 TYPE_8__* FUNC_3 () ;
 int FUNC_4 (int ,int ,unsigned char*,unsigned int*,int const*,int *) ;
 int VAR_0 ;
 int FUNC_5 (int const*) ;
 int VAR_1 ;
 int * FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,int ) ;
 int VAR_5 ;
 int FUNC_10 (int const*,int const*,unsigned char*,unsigned int*) ;

OCSP_CERTID *FUNC_11(const EVP_MD *VAR_6,
                              const X509_NAME *VAR_7,
                              const ASN1_BIT_STRING *VAR_8,
                              const ASN1_INTEGER *VAR_9)
{
    int VAR_10;
    unsigned int VAR_11;
    X509_ALGOR *VAR_12;
    OCSP_CERTID *VAR_13 = ((void*)0);
    unsigned char VAR_14[VAR_0];

    if ((VAR_13 = FUNC_8()) == ((void*)0))
        goto err;

    VAR_12 = &VAR_13->hashAlgorithm;
    FUNC_0(VAR_12->algorithm);
    if ((VAR_10 = FUNC_5(VAR_6)) == VAR_1) {
        FUNC_9(VAR_2, VAR_4);
        goto err;
    }
    if ((VAR_12->algorithm = FUNC_6(VAR_10)) == ((void*)0))
        goto err;
    if ((VAR_12->parameter = FUNC_3()) == ((void*)0))
        goto err;
    VAR_12->parameter->type = VAR_5;

    if (!FUNC_10(VAR_7, VAR_6, VAR_14, &VAR_11))
        goto digerr;
    if (!(FUNC_1(&VAR_13->issuerNameHash, VAR_14, VAR_11)))
        goto err;


    if (!FUNC_4(VAR_8->data, VAR_8->length, VAR_14, &VAR_11, VAR_6, ((void*)0)))
        goto err;

    if (!(FUNC_1(&VAR_13->issuerKeyHash, VAR_14, VAR_11)))
        goto err;

    if (VAR_9) {
        if (FUNC_2(&VAR_13->serialNumber, VAR_9) == 0)
            goto err;
    }
    return VAR_13;
 digerr:
    FUNC_9(VAR_2, VAR_3);
 err:
    FUNC_7(VAR_13);
    return ((void*)0);
}
