
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_18__ {TYPE_4__* revoked; } ;
struct TYPE_25__ {scalar_t__ type; TYPE_2__ value; } ;
struct TYPE_24__ {int responseType; } ;
struct TYPE_17__ {int byKey; int byName; } ;
struct TYPE_22__ {int type; TYPE_1__ value; } ;
struct TYPE_23__ {int responseExtensions; int responses; scalar_t__ producedAt; TYPE_6__ responderId; int version; } ;
struct TYPE_21__ {scalar_t__ responseStatus; TYPE_8__* responseBytes; } ;
struct TYPE_20__ {scalar_t__ revocationReason; scalar_t__ revocationTime; } ;
struct TYPE_19__ {int singleExtensions; scalar_t__ nextUpdate; scalar_t__ thisUpdate; TYPE_9__* certStatus; int * certId; } ;
struct TYPE_16__ {int certs; int signature; int signatureAlgorithm; TYPE_7__ tbsResponseData; } ;
typedef TYPE_3__ OCSP_SINGLERESP ;
typedef TYPE_4__ OCSP_REVOKEDINFO ;
typedef TYPE_5__ OCSP_RESPONSE ;
typedef TYPE_6__ OCSP_RESPID ;
typedef TYPE_7__ OCSP_RESPDATA ;
typedef TYPE_8__ OCSP_RESPBYTES ;
typedef TYPE_9__ OCSP_CERTSTATUS ;
typedef int OCSP_CERTID ;
typedef TYPE_10__ OCSP_BASICRESP ;
typedef int BIO ;


 long FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (long) ;
 TYPE_10__* FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (long) ;
 int FUNC_12 (int *,int ) ;
 scalar_t__ VAR_1 ;


 int FUNC_13 (int *,char*,int ,unsigned long,int) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int *,int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ,int ) ;
 scalar_t__ FUNC_19 (int *,int *,int) ;
 int FUNC_20 (int ) ;
 TYPE_3__* FUNC_21 (int ,int) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int) ;

int FUNC_24(BIO *VAR_3, OCSP_RESPONSE *VAR_4, unsigned long VAR_5)
{
    int VAR_6, VAR_7 = 0;
    long VAR_8;
    OCSP_CERTID *VAR_9 = ((void*)0);
    OCSP_BASICRESP *VAR_10 = ((void*)0);
    OCSP_RESPID *VAR_11 = ((void*)0);
    OCSP_RESPDATA *VAR_12 = ((void*)0);
    OCSP_CERTSTATUS *VAR_13 = ((void*)0);
    OCSP_REVOKEDINFO *VAR_14 = ((void*)0);
    OCSP_SINGLERESP *VAR_15 = ((void*)0);
    OCSP_RESPBYTES *VAR_16 = VAR_4->responseBytes;

    if (FUNC_4(VAR_3, "OCSP Response Data:\n") <= 0)
        goto err;
    VAR_8 = FUNC_0(VAR_4->responseStatus);
    if (FUNC_3(VAR_3, "    OCSP Response Status: %s (0x%lx)\n",
                   FUNC_11(VAR_8), VAR_8) <= 0)
        goto err;
    if (VAR_16 == ((void*)0))
        return 1;
    if (FUNC_4(VAR_3, "    Response Type: ") <= 0)
        goto err;
    if (FUNC_17(VAR_3, VAR_16->responseType) <= 0)
        goto err;
    if (FUNC_6(VAR_16->responseType) != VAR_0) {
        FUNC_4(VAR_3, " (unknown response type)\n");
        return 1;
    }

    if ((VAR_10 = FUNC_10(VAR_4)) == ((void*)0))
        goto err;
    VAR_12 = &VAR_10->tbsResponseData;
    VAR_8 = FUNC_2(VAR_12->version);
    if (FUNC_3(VAR_3, "\n    Version: %lu (0x%lx)\n", VAR_8 + 1, VAR_8) <= 0)
        goto err;
    if (FUNC_4(VAR_3, "    Responder Id: ") <= 0)
        goto err;

    VAR_11 = &VAR_12->responderId;
    switch (VAR_11->type) {
    case 128:
        FUNC_14(VAR_3, VAR_11->value.byName, 0, VAR_2);
        break;
    case 129:
        FUNC_18(VAR_3, VAR_11->value.byKey, 0);
        break;
    }

    if (FUNC_3(VAR_3, "\n    Produced At: ") <= 0)
        goto err;
    if (!FUNC_1(VAR_3, VAR_12->producedAt))
        goto err;
    if (FUNC_3(VAR_3, "\n    Responses:\n") <= 0)
        goto err;
    for (VAR_6 = 0; VAR_6 < FUNC_20(VAR_12->responses); VAR_6++) {
        if (!FUNC_21(VAR_12->responses, VAR_6))
            continue;
        VAR_15 = FUNC_21(VAR_12->responses, VAR_6);
        VAR_9 = VAR_15->certId;
        if (FUNC_19(VAR_3, VAR_9, 4) <= 0)
            goto err;
        VAR_13 = VAR_15->certStatus;
        if (FUNC_3(VAR_3, "    Cert Status: %s",
                       FUNC_8(VAR_13->type)) <= 0)
            goto err;
        if (VAR_13->type == VAR_1) {
            VAR_14 = VAR_13->value.revoked;
            if (FUNC_3(VAR_3, "\n    Revocation Time: ") <= 0)
                goto err;
            if (!FUNC_1(VAR_3, VAR_14->revocationTime))
                goto err;
            if (VAR_14->revocationReason) {
                VAR_8 = FUNC_0(VAR_14->revocationReason);
                if (FUNC_3(VAR_3,
                               "\n    Revocation Reason: %s (0x%lx)",
                               FUNC_9(VAR_8), VAR_8) <= 0)
                    goto err;
            }
        }
        if (FUNC_3(VAR_3, "\n    This Update: ") <= 0)
            goto err;
        if (!FUNC_1(VAR_3, VAR_15->thisUpdate))
            goto err;
        if (VAR_15->nextUpdate) {
            if (FUNC_3(VAR_3, "\n    Next Update: ") <= 0)
                goto err;
            if (!FUNC_1(VAR_3, VAR_15->nextUpdate))
                goto err;
        }
        if (FUNC_5(VAR_3, "\n", 1) <= 0)
            goto err;
        if (!FUNC_13(VAR_3,
                                     "Response Single Extensions",
                                     VAR_15->singleExtensions, VAR_5, 8))
            goto err;
        if (FUNC_5(VAR_3, "\n", 1) <= 0)
            goto err;
    }
    if (!FUNC_13(VAR_3, "Response Extensions",
                                 VAR_12->responseExtensions, VAR_5, 4))
        goto err;
    if (FUNC_16(VAR_3, &VAR_10->signatureAlgorithm, VAR_10->signature) <= 0)
        goto err;

    for (VAR_6 = 0; VAR_6 < FUNC_22(VAR_10->certs); VAR_6++) {
        FUNC_15(VAR_3, FUNC_23(VAR_10->certs, VAR_6));
        FUNC_12(VAR_3, FUNC_23(VAR_10->certs, VAR_6));
    }

    VAR_7 = 1;
 err:
    FUNC_7(VAR_10);
    return VAR_7;
}
