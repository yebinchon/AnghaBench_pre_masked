
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_9__ {int * serialNumber; TYPE_2__* issuer; } ;
struct TYPE_7__ {int directoryName; } ;
struct TYPE_8__ {int type; TYPE_1__ d; } ;
typedef TYPE_3__ OSSL_CRMF_CERTID ;
typedef int ASN1_INTEGER ;


 int * FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (int *,int const*) ;

OSSL_CRMF_CERTID *FUNC_6(const X509_NAME *VAR_3,
                                       const ASN1_INTEGER *VAR_4)
{
    OSSL_CRMF_CERTID *VAR_5 = ((void*)0);

    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return ((void*)0);
    }

    if ((VAR_5 = FUNC_4()) == ((void*)0))
        goto err;

    if (!FUNC_5(&VAR_5->issuer->d.directoryName, VAR_3))
        goto err;
    VAR_5->issuer->type = VAR_2;

    FUNC_1(VAR_5->serialNumber);
    if ((VAR_5->serialNumber = FUNC_0(VAR_4)) == ((void*)0))
        goto err;

    return VAR_5;

 err:
    FUNC_3(VAR_5);
    return ((void*)0);
}
