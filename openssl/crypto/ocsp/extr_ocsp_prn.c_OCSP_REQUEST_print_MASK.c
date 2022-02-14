
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int singleRequestExtensions; int * reqCert; } ;
struct TYPE_9__ {int requestExtensions; int requestList; int * requestorName; int version; } ;
struct TYPE_8__ {TYPE_1__* optionalSignature; TYPE_3__ tbsRequest; } ;
struct TYPE_7__ {int certs; int signature; int signatureAlgorithm; } ;
typedef TYPE_1__ OCSP_SIGNATURE ;
typedef TYPE_2__ OCSP_REQUEST ;
typedef TYPE_3__ OCSP_REQINFO ;
typedef TYPE_4__ OCSP_ONEREQ ;
typedef int OCSP_CERTID ;
typedef int BIO ;


 long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,char*,long,long) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*,int ,unsigned long,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int ) ;
 TYPE_4__* FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;

int FUNC_13(BIO *VAR_0, OCSP_REQUEST *VAR_1, unsigned long VAR_2)
{
    int VAR_3;
    long VAR_4;
    OCSP_CERTID *VAR_5 = ((void*)0);
    OCSP_ONEREQ *VAR_6 = ((void*)0);
    OCSP_REQINFO *VAR_7 = &VAR_1->tbsRequest;
    OCSP_SIGNATURE *VAR_8 = VAR_1->optionalSignature;

    if (FUNC_2(VAR_0, "OCSP Request Data:\n", 19) <= 0)
        goto err;
    VAR_4 = FUNC_0(VAR_7->version);
    if (FUNC_1(VAR_0, "    Version: %lu (0x%lx)", VAR_4 + 1, VAR_4) <= 0)
        goto err;
    if (VAR_7->requestorName != ((void*)0)) {
        if (FUNC_2(VAR_0, "\n    Requestor Name: ", 21) <= 0)
            goto err;
        FUNC_3(VAR_0, VAR_7->requestorName);
    }
    if (FUNC_2(VAR_0, "\n    Requestor List:\n", 21) <= 0)
        goto err;
    for (VAR_3 = 0; VAR_3 < FUNC_9(VAR_7->requestList); VAR_3++) {
        VAR_6 = FUNC_10(VAR_7->requestList, VAR_3);
        VAR_5 = VAR_6->reqCert;
        FUNC_8(VAR_0, VAR_5, 8);
        if (!FUNC_5(VAR_0,
                                     "Request Single Extensions",
                                     VAR_6->singleRequestExtensions, VAR_2, 8))
            goto err;
    }
    if (!FUNC_5(VAR_0, "Request Extensions",
                                 VAR_7->requestExtensions, VAR_2, 4))
        goto err;
    if (VAR_8) {
        FUNC_7(VAR_0, &VAR_8->signatureAlgorithm, VAR_8->signature);
        for (VAR_3 = 0; VAR_3 < FUNC_11(VAR_8->certs); VAR_3++) {
            FUNC_6(VAR_0, FUNC_12(VAR_8->certs, VAR_3));
            FUNC_4(VAR_0, FUNC_12(VAR_8->certs, VAR_3));
        }
    }
    return 1;
 err:
    return 0;
}
