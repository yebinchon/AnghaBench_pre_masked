
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_3__ {int publicKey; int * serialNumber; int issuer; int subject; } ;
typedef TYPE_1__ OSSL_CRMF_CERTTEMPLATE ;
typedef int EVP_PKEY ;
typedef int ASN1_INTEGER ;


 int * FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(OSSL_CRMF_CERTTEMPLATE *VAR_2,
                                EVP_PKEY *VAR_3,
                                const X509_NAME *VAR_4,
                                const X509_NAME *VAR_5,
                                const ASN1_INTEGER *VAR_6)
{
    if (VAR_2 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    if (VAR_4 != ((void*)0) && !FUNC_3(&VAR_2->subject, VAR_4))
        return 0;
    if (VAR_5 != ((void*)0) && !FUNC_3(&VAR_2->issuer, VAR_5))
        return 0;
    if (VAR_6 != ((void*)0)) {
        FUNC_1(VAR_2->serialNumber);
        if ((VAR_2->serialNumber = FUNC_0(VAR_6)) == ((void*)0))
            return 0;
    }
    if (VAR_3 != ((void*)0) && !FUNC_4(&VAR_2->publicKey, VAR_3))
        return 0;
    return 1;
}
