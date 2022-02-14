
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int revocationStatus ;
typedef int revocationPara ;
struct TYPE_24__ {int cbSize; int dwRevocationFreshnessTime; int fCheckRevocationFreshnessTime; int dwUrlRetrievalTimeout; } ;
struct TYPE_23__ {int member_0; int cCertStore; int * pIssuerCert; int dwFreshnessTime; int fCheckFreshnessTime; int dwUrlRetrievalTimeout; scalar_t__ hCrlStore; scalar_t__* rgCertStore; int pftTimeToUse; int member_1; } ;
struct TYPE_22__ {int member_0; int dwError; int member_1; } ;
struct TYPE_19__ {int dwErrorStatus; } ;
struct TYPE_21__ {int cChain; TYPE_4__ TrustStatus; TYPE_2__** rgpChain; } ;
struct TYPE_18__ {int dwErrorStatus; } ;
struct TYPE_20__ {TYPE_3__ TrustStatus; } ;
struct TYPE_17__ {int cElement; TYPE_1__** rgpElement; } ;
struct TYPE_16__ {int * pCertContext; } ;
typedef TYPE_5__* PCERT_CHAIN_ELEMENT ;
typedef TYPE_6__* PCERT_CHAIN_CONTEXT ;
typedef int * PCCERT_CONTEXT ;
typedef int LPFILETIME ;
typedef scalar_t__ HCERTSTORE ;
typedef int DWORD ;
typedef TYPE_7__ CERT_REVOCATION_STATUS ;
typedef TYPE_8__ CERT_REVOCATION_PARA ;
typedef TYPE_9__ CERT_CHAIN_PARA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;





 TYPE_5__* FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (int ,int ,int,void**,int,TYPE_8__*,TYPE_7__*) ;
 int VAR_12 ;
 int FUNC_2 (char*,int) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_3(PCERT_CHAIN_CONTEXT VAR_14,
 LPFILETIME VAR_15, HCERTSTORE VAR_16,
 const CERT_CHAIN_PARA *VAR_17, DWORD VAR_18)
{
    DWORD VAR_19;

    if (VAR_18 & VAR_4)
        VAR_19 = 1;
    else if ((VAR_18 & VAR_2) ||
     (VAR_18 & VAR_3))
    {
        DWORD VAR_20;

        for (VAR_20 = 0, VAR_19 = 0; VAR_20 < VAR_14->cChain; VAR_20++)
        {
            if (VAR_20 < VAR_14->cChain - 1 ||
             VAR_18 & VAR_2)
                VAR_19 += VAR_14->rgpChain[VAR_20]->cElement;
            else
                VAR_19 += VAR_14->rgpChain[VAR_20]->cElement - 1;
        }
    }
    else
        VAR_19 = 0;
    if (VAR_19)
    {
        DWORD VAR_21, VAR_22, VAR_23, VAR_24;
        CERT_REVOCATION_PARA VAR_25 = { sizeof(VAR_25), 0 };
        CERT_REVOCATION_STATUS VAR_26 =
         { sizeof(VAR_26), 0 };
        BOOL VAR_27;

        VAR_24 = VAR_11;
        if (VAR_18 & VAR_1)
            VAR_24 |= VAR_9;
        if (VAR_18 & VAR_0)
            VAR_24 |= VAR_10;
        VAR_25.pftTimeToUse = VAR_15;
        if (VAR_16)
        {
            VAR_25.cCertStore = 1;
            VAR_25.rgCertStore = &VAR_16;
            VAR_25.hCrlStore = VAR_16;
        }
        if (VAR_17->cbSize == sizeof(CERT_CHAIN_PARA))
        {
            VAR_25.dwUrlRetrievalTimeout =
             VAR_17->dwUrlRetrievalTimeout;
            VAR_25.fCheckFreshnessTime =
             VAR_17->fCheckRevocationFreshnessTime;
            VAR_25.dwFreshnessTime =
             VAR_17->dwRevocationFreshnessTime;
        }
        for (VAR_21 = 0, VAR_23 = 0; VAR_23 < VAR_19 && VAR_21 < VAR_14->cChain; VAR_21++)
        {
            for (VAR_22 = 0; VAR_23 < VAR_19 &&
             VAR_22 < VAR_14->rgpChain[VAR_21]->cElement; VAR_22++, VAR_23++)
            {
                PCCERT_CONTEXT VAR_28 =
                 VAR_14->rgpChain[VAR_21]->rgpElement[VAR_22]->pCertContext;

                if (VAR_22 < VAR_14->rgpChain[VAR_21]->cElement - 1)
                    VAR_25.pIssuerCert =
                     VAR_14->rgpChain[VAR_21]->rgpElement[VAR_22 + 1]->pCertContext;
                else
                    VAR_25.pIssuerCert = ((void*)0);
                VAR_27 = FUNC_1(VAR_13,
                 VAR_5, 1, (void **)&VAR_28,
                 VAR_24, &VAR_25, &VAR_26);

                if (!VAR_27 && VAR_18 & VAR_2
                    && VAR_26.dwError == 131 && VAR_25.pIssuerCert == ((void*)0))
                    VAR_27 = VAR_12;

                if (!VAR_27)
                {
                    PCERT_CHAIN_ELEMENT VAR_29 = FUNC_0(
                     VAR_14, VAR_23);
                    DWORD VAR_30;

                    switch (VAR_26.dwError)
                    {
                    case 131:
                    case 130:
                    case 132:



                        VAR_30 = VAR_8 |
                         VAR_6;
                        break;
                    case 129:
                        VAR_30 = VAR_6;
                        break;
                    case 128:
                        VAR_30 = VAR_7;
                        break;
                    default:
                        FUNC_2("unmapped error %08x\n", VAR_26.dwError);
                        VAR_30 = 0;
                    }
                    if (VAR_29)
                    {

                        VAR_29->TrustStatus.dwErrorStatus |= VAR_30;
                    }
                    VAR_14->TrustStatus.dwErrorStatus |= VAR_30;
                }
            }
        }
    }
}
