
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int hashToAdd ;
typedef int context_t ;
struct TYPE_25__ {TYPE_3__* vtbl; } ;
typedef TYPE_4__ WINECRYPT_CERTSTORE ;
struct TYPE_27__ {int member_0; int * member_1; } ;
struct TYPE_26__ {TYPE_1__* pCertInfo; int dwCertEncodingType; } ;
struct TYPE_23__ {scalar_t__ (* addContext ) (TYPE_4__*,int *,int *,int **,scalar_t__) ;} ;
struct TYPE_24__ {TYPE_2__ certs; } ;
struct TYPE_22__ {int NotBefore; } ;
typedef TYPE_5__ const* PCCERT_CONTEXT ;
typedef int DWORD ;
typedef TYPE_6__ CRYPT_HASH_BLOB ;
typedef TYPE_5__ CERT_CONTEXT ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 TYPE_5__* FUNC_0 (TYPE_5__ const*) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int ,int ,int ,TYPE_6__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_5__ const*,int ,int *,int*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_5__ const*,TYPE_5__ const*) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_5 ;
 int * FUNC_9 (TYPE_5__ const*) ;
 TYPE_5__ const* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_4__*,int *,int *,int **,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_12(WINECRYPT_CERTSTORE *VAR_6, const CERT_CONTEXT *VAR_7,
 DWORD VAR_8, BOOL VAR_9, PCCERT_CONTEXT *VAR_10)
{
    const CERT_CONTEXT *VAR_11 = ((void*)0);
    BOOL VAR_12 = VAR_5, VAR_13 = VAR_4;
    context_t *VAR_14 = ((void*)0);

    switch (VAR_8)
    {
    case 134:
        break;
    case 133:
    case 130:
    case 129:
    case 128:
    case 132:
    case 131:
    {
        BYTE VAR_15[20];
        DWORD VAR_16 = sizeof(VAR_15);

        VAR_12 = FUNC_2(VAR_7, VAR_1,
         VAR_15, &VAR_16);
        if (VAR_12)
        {
            CRYPT_HASH_BLOB VAR_17 = { sizeof(VAR_15), VAR_15 };

            VAR_11 = FUNC_1(VAR_6, VAR_7->dwCertEncodingType, 0,
             VAR_0, &VAR_17, ((void*)0));
        }
        break;
    }
    default:
        FUNC_6("Unimplemented add disposition %d\n", VAR_8);
        FUNC_7(VAR_3);
        return VAR_4;
    }

    switch (VAR_8)
    {
    case 134:
        break;
    case 133:
        if (VAR_11)
        {
            FUNC_8("found matching certificate, not adding\n");
            FUNC_7(VAR_2);
            return VAR_4;
        }
        break;
    case 130:
        break;
    case 129:
        if (VAR_9)
            FUNC_6("CERT_STORE_ADD_REPLACE_EXISTING_INHERIT_PROPERTIES: semi-stub for links\n");
        if (VAR_11)
            VAR_13 = VAR_5;
        break;
    case 128:
        if(VAR_9)
            FUNC_6("CERT_STORE_ADD_USE_EXISTING: semi-stub for links\n");
        if (VAR_11)
        {
            FUNC_4(VAR_11, VAR_7);
            if (VAR_10)
                *VAR_10 = FUNC_0(VAR_11);
            return VAR_5;
        }
        break;
    case 132:
        if (VAR_11 && FUNC_3(&VAR_11->pCertInfo->NotBefore, &VAR_7->pCertInfo->NotBefore) >= 0)
        {
            FUNC_8("existing certificate is newer, not adding\n");
            FUNC_7(VAR_2);
            return VAR_4;
        }
        break;
    case 131:
        if (VAR_11)
        {
            if (FUNC_3(&VAR_11->pCertInfo->NotBefore, &VAR_7->pCertInfo->NotBefore) >= 0)
            {
                FUNC_8("existing certificate is newer, not adding\n");
                FUNC_7(VAR_2);
                return VAR_4;
            }
            VAR_13 = VAR_5;
        }
        break;
    }


    if(!VAR_6) {
        if(VAR_10)
            *VAR_10 = FUNC_0(VAR_7);
        return VAR_5;
    }

    VAR_12 = VAR_6->vtbl->certs.addContext(VAR_6, FUNC_9(VAR_7), VAR_11 ? FUNC_9(VAR_11) : ((void*)0),
     (VAR_10 || VAR_13) ? &VAR_14 : ((void*)0), VAR_9);
    if(!VAR_12)
        return VAR_4;

    if(VAR_13)
        FUNC_4(FUNC_10(VAR_14), VAR_11);

    if(VAR_10)
        *VAR_10 = FUNC_10(VAR_14);
    else if(VAR_14)
        FUNC_5(VAR_14);

    FUNC_8("returning %d\n", VAR_12);
    return VAR_12;
}
