
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int * responses; } ;
struct TYPE_18__ {TYPE_2__ tbsResponseData; } ;
struct TYPE_13__ {int * unknown; int * good; TYPE_4__* revoked; } ;
struct TYPE_17__ {int type; TYPE_1__ value; } ;
struct TYPE_16__ {int * revocationReason; int revocationTime; } ;
struct TYPE_15__ {TYPE_5__* certStatus; int * certId; int nextUpdate; int thisUpdate; } ;
typedef TYPE_3__ OCSP_SINGLERESP ;
typedef TYPE_4__ OCSP_REVOKEDINFO ;
typedef TYPE_5__ OCSP_CERTSTATUS ;
typedef int OCSP_CERTID ;
typedef TYPE_6__ OCSP_BASICRESP ;
typedef int ASN1_TIME ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 TYPE_4__* FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 () ;
 int FUNC_9 (int ,int ) ;



 int * FUNC_10 () ;
 int FUNC_11 (int *,TYPE_3__*) ;

OCSP_SINGLERESP *FUNC_12(OCSP_BASICRESP *VAR_3,
                                        OCSP_CERTID *VAR_4,
                                        int VAR_5, int VAR_6,
                                        ASN1_TIME *VAR_7,
                                        ASN1_TIME *VAR_8,
                                        ASN1_TIME *VAR_9)
{
    OCSP_SINGLERESP *VAR_10 = ((void*)0);
    OCSP_CERTSTATUS *VAR_11;
    OCSP_REVOKEDINFO *VAR_12;

    if (VAR_3->tbsResponseData.responses == ((void*)0)
        && (VAR_3->tbsResponseData.responses
                = FUNC_10()) == ((void*)0))
        goto err;

    if ((VAR_10 = FUNC_8()) == ((void*)0))
        goto err;

    if (!FUNC_3(VAR_8, &VAR_10->thisUpdate))
        goto err;
    if (VAR_9 &&
        !FUNC_3(VAR_9, &VAR_10->nextUpdate))
        goto err;

    FUNC_5(VAR_10->certId);

    if ((VAR_10->certId = FUNC_4(VAR_4)) == ((void*)0))
        goto err;

    VAR_11 = VAR_10->certStatus;
    switch (VAR_11->type = VAR_5) {
    case 129:
        if (!VAR_7) {
            FUNC_9(VAR_0, VAR_2);
            goto err;
        }
        if ((VAR_11->value.revoked = VAR_12 = FUNC_6()) == ((void*)0))
            goto err;
        if (!FUNC_3(VAR_7, &VAR_12->revocationTime))
            goto err;
        if (VAR_6 != VAR_1) {
            if ((VAR_12->revocationReason = FUNC_0()) == ((void*)0))
                goto err;
            if (!(FUNC_1(VAR_12->revocationReason, VAR_6)))
                goto err;
        }
        break;

    case 130:
        if ((VAR_11->value.good = FUNC_2()) == ((void*)0))
            goto err;
        break;

    case 128:
        if ((VAR_11->value.unknown = FUNC_2()) == ((void*)0))
            goto err;
        break;

    default:
        goto err;

    }
    if (!(FUNC_11(VAR_3->tbsResponseData.responses, VAR_10)))
        goto err;
    return VAR_10;
 err:
    FUNC_7(VAR_10);
    return ((void*)0);
}
