
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int parFmt ;
typedef int charFmt ;
struct TYPE_22__ {int cbSize; int dwEffects; int dwMask; } ;
struct TYPE_21__ {scalar_t__ fSelfSigned; int fTrustedRoot; } ;
struct TYPE_20__ {int csCertChain; scalar_t__ dwError; TYPE_3__* pChainContext; TYPE_7__* pasCertChain; } ;
struct TYPE_19__ {int cbSize; int dxStartIndent; int dwMask; } ;
struct TYPE_15__ {scalar_t__ pCryptProviderData; } ;
struct TYPE_18__ {int idxCounterSigner; int fCounterSigner; int idxSigner; TYPE_1__ u; } ;
struct TYPE_16__ {int dwErrorStatus; } ;
struct TYPE_17__ {TYPE_2__ TrustStatus; } ;
typedef TYPE_4__* PCCRYPTUI_VIEWCERTIFICATE_STRUCTW ;
typedef TYPE_5__ PARAFORMAT2 ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_6__ CRYPT_PROVIDER_SGNR ;
typedef int CRYPT_PROVIDER_DATA ;
typedef TYPE_7__ CRYPT_PROVIDER_CERT ;
typedef TYPE_8__ CHARFORMATW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ VAR_18 ;
 TYPE_6__* FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_5__*) ;
 int FUNC_5 (TYPE_8__*,int ,int) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(HWND VAR_19,
 PCCRYPTUI_VIEWCERTIFICATE_STRUCTW VAR_20)
{
    CHARFORMATW VAR_21;
    PARAFORMAT2 VAR_22;
    HWND VAR_23 = FUNC_0(VAR_19, VAR_7);
    HWND VAR_24 = FUNC_0(VAR_19, VAR_8);
    CRYPT_PROVIDER_SGNR *VAR_25 = FUNC_2(
     (CRYPT_PROVIDER_DATA *)VAR_20->u.pCryptProviderData,
     VAR_20->idxSigner, VAR_20->fCounterSigner,
     VAR_20->idxCounterSigner);
    CRYPT_PROVIDER_CERT *VAR_26 =
     &VAR_25->pasCertChain[VAR_25->csCertChain - 1];

    if (!VAR_25->pChainContext ||
     (VAR_25->pChainContext->TrustStatus.dwErrorStatus &
     VAR_0))
        FUNC_3(VAR_23, VAR_6);
    else if (!VAR_26->fTrustedRoot)
        FUNC_3(VAR_23, VAR_5);
    else
        FUNC_3(VAR_23, VAR_4);

    FUNC_5(&VAR_21, 0, sizeof(VAR_21));
    VAR_21.cbSize = sizeof(VAR_21);
    VAR_21.dwMask = VAR_2;
    VAR_21.dwEffects = VAR_1;
    FUNC_1(VAR_24, VAR_3, VAR_17, (LPARAM)&VAR_21);

    VAR_22.cbSize = sizeof(VAR_22);
    VAR_22.dwMask = VAR_16;
    VAR_22.dxStartIndent = VAR_15;
    FUNC_4(VAR_24,
     VAR_10, &VAR_22);

    VAR_24 = FUNC_0(VAR_19, VAR_9);
    FUNC_1(VAR_24, VAR_3, VAR_17, (LPARAM)&VAR_21);
    if (VAR_25->dwError == VAR_18)
        FUNC_4(VAR_24,
         VAR_11, &VAR_22);
    else if (!VAR_25->pChainContext ||
     (VAR_25->pChainContext->TrustStatus.dwErrorStatus &
     VAR_0))
        FUNC_4(VAR_24,
         VAR_12, &VAR_22);
    else if (!VAR_26->fTrustedRoot)
    {
        if (VAR_25->csCertChain == 1 && VAR_26->fSelfSigned)
            FUNC_4(VAR_24,
             VAR_13, &VAR_22);
        else
            FUNC_4(VAR_24,
             VAR_14, &VAR_22);
    }
    else
    {
        FUNC_7(VAR_24, VAR_20);
        FUNC_6(VAR_19, VAR_20);
    }
}
