
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int dwCertEncodingType; } ;
struct TYPE_12__ {unsigned int cUrl; int * rgwszUrl; } ;
struct TYPE_11__ {scalar_t__ hWorld; } ;
typedef int * PCCERT_CONTEXT ;
typedef scalar_t__ HCERTSTORE ;
typedef int DWORD ;
typedef TYPE_1__ CertificateChainEngine ;
typedef TYPE_2__ CRYPT_URL_ARRAY ;
typedef TYPE_3__ CERT_CONTEXT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,TYPE_3__*,int ,int *) ;
 int FUNC_1 (scalar_t__,int ) ;
 int * FUNC_2 (scalar_t__,int ,int ,int,void*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,void*,int ,TYPE_2__*,int*,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,void**,int *,int *,int *,int *) ;
 int * FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_2__* FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,TYPE_2__*) ;
 int FUNC_11 (char*,int *) ;
 int VAR_7 ;
 int * FUNC_12 (int ) ;

__attribute__((used)) static PCCERT_CONTEXT FUNC_13(const CertificateChainEngine *VAR_8, const CERT_CONTEXT *VAR_9,
        HCERTSTORE VAR_10, DWORD VAR_11, void *VAR_12, DWORD VAR_13, PCCERT_CONTEXT VAR_14)
{
    CRYPT_URL_ARRAY *VAR_15;
    PCCERT_CONTEXT VAR_16;
    DWORD VAR_17;
    BOOL VAR_18;

    VAR_16 = FUNC_2(VAR_10, VAR_9->dwCertEncodingType, 0, VAR_11, VAR_12, VAR_14);
    if(VAR_16) {
        FUNC_11("Found in store %p\n", VAR_16);
        return VAR_16;
    }




    if(VAR_14)
        return ((void*)0);

    if(VAR_8->hWorld) {
        VAR_16 = FUNC_2(VAR_8->hWorld, VAR_9->dwCertEncodingType, 0, VAR_11, VAR_12, ((void*)0));
        if(VAR_16) {
            FUNC_11("Found in world %p\n", VAR_16);
            return VAR_16;
        }
    }

    VAR_18 = FUNC_5(VAR_7, (void*)VAR_9, 0, ((void*)0), &VAR_17, ((void*)0), ((void*)0), ((void*)0));
    if(!VAR_18)
        return ((void*)0);

    VAR_15 = FUNC_9(FUNC_8(), 0, VAR_17);
    if(!VAR_15)
        return ((void*)0);

    VAR_18 = FUNC_5(VAR_7, (void*)VAR_9, 0, VAR_15, &VAR_17, ((void*)0), ((void*)0), ((void*)0));
    if(VAR_18)
    {
        CERT_CONTEXT *VAR_19;
        HCERTSTORE VAR_20;
        unsigned VAR_21;

        for(VAR_21=0; VAR_21 < VAR_15->cUrl; VAR_21++)
        {
            FUNC_11("Trying URL %s\n", FUNC_12(VAR_15->rgwszUrl[VAR_21]));

            VAR_18 = FUNC_6(VAR_15->rgwszUrl[VAR_21], VAR_4,
             (VAR_13 & VAR_0) ? VAR_6 : VAR_5,
             0, (void**)&VAR_19, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
            if(!VAR_18)
            {
                FUNC_11("CryptRetrieveObjectByUrlW failed: %u\n", FUNC_7());
                continue;
            }


            VAR_20 = FUNC_4(VAR_3, 0, 0, VAR_2, ((void*)0));
            FUNC_0(VAR_20, VAR_19, VAR_1, ((void*)0));
            VAR_16 = FUNC_2(VAR_20, VAR_9->dwCertEncodingType, 0, VAR_11, VAR_12, ((void*)0));
            FUNC_3(VAR_19);
            FUNC_1(VAR_20, 0);
            if(VAR_16)
            {
                FUNC_11("Found downloaded issuer %p\n", VAR_16);
                break;
            }
        }
    }

    FUNC_10(FUNC_8(), 0, VAR_15);
    return VAR_16;
}
