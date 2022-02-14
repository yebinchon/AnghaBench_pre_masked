
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct hierarchy_data {scalar_t__ imageList; TYPE_2__* pCertViewInfo; } ;
struct TYPE_22__ {int mask; int iImage; int iSelectedImage; int lParam; void* stateMask; void* state; scalar_t__ pszText; } ;
struct TYPE_23__ {TYPE_8__ item; } ;
struct TYPE_21__ {TYPE_6__* pChainElement; int pCert; } ;
struct TYPE_19__ {scalar_t__ dwErrorStatus; } ;
struct TYPE_20__ {TYPE_5__ TrustStatus; } ;
struct TYPE_17__ {int dwErrorStatus; } ;
struct TYPE_18__ {TYPE_3__ TrustStatus; } ;
struct TYPE_15__ {scalar_t__ pCryptProviderData; } ;
struct TYPE_16__ {int idxCounterSigner; int fCounterSigner; int idxSigner; TYPE_1__ u; } ;
struct TYPE_14__ {int csCertChain; TYPE_7__* pasCertChain; TYPE_4__* pChainContext; } ;
struct TYPE_13__ {TYPE_9__ u; int hInsertAfter; int * hParent; } ;
typedef TYPE_10__ TVINSERTSTRUCTW ;
typedef scalar_t__ LPWSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef int * HTREEITEM ;
typedef int DWORD ;
typedef TYPE_11__ CRYPT_PROVIDER_SGNR ;
typedef int CRYPT_PROVIDER_DATA ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_11__* FUNC_4 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct hierarchy_data*,int) ;

__attribute__((used)) static void FUNC_7(HWND VAR_12, struct hierarchy_data *VAR_13)
{
    HWND VAR_14 = FUNC_0(VAR_12, VAR_1);
    CRYPT_PROVIDER_SGNR *VAR_15 = FUNC_4(
     (CRYPT_PROVIDER_DATA *)VAR_13->pCertViewInfo->u.pCryptProviderData,
     VAR_13->pCertViewInfo->idxSigner, VAR_13->pCertViewInfo->fCounterSigner,
     VAR_13->pCertViewInfo->idxCounterSigner);
    DWORD VAR_16;
    HTREEITEM VAR_17 = ((void*)0);

    FUNC_3(VAR_14, VAR_10, VAR_11, (LPARAM)VAR_13->imageList);
    for (VAR_16 = VAR_15->csCertChain; VAR_16; VAR_16--)
    {
        LPWSTR VAR_18;

        VAR_18 = FUNC_5(VAR_15->pasCertChain[VAR_16 - 1].pCert);
        if (VAR_18)
        {
            TVINSERTSTRUCTW VAR_19;

            VAR_19.hParent = VAR_17;
            VAR_19.hInsertAfter = VAR_8;
            VAR_19.u.item.mask = VAR_6 | VAR_5 | VAR_2 |
             VAR_4 | VAR_3;
            VAR_19.u.item.pszText = VAR_18;
            VAR_19.u.item.state = VAR_7;
            VAR_19.u.item.stateMask = VAR_7;
            if (VAR_16 == 1 && (!VAR_15->pChainContext ||
             VAR_15->pChainContext->TrustStatus.dwErrorStatus &
             VAR_0))
            {




                VAR_19.u.item.iImage = 2;
            }
            else if (VAR_15->pasCertChain[VAR_16 - 1].pChainElement->TrustStatus.
             dwErrorStatus == 0)
                VAR_19.u.item.iImage = 0;
            else
                VAR_19.u.item.iImage = 1;
            VAR_19.u.item.iSelectedImage = VAR_19.u.item.iImage;
            VAR_19.u.item.lParam = FUNC_6(VAR_13, VAR_16 - 1);
            VAR_17 = (HTREEITEM)FUNC_3(VAR_14, VAR_9, 0,
             (LPARAM)&VAR_19);
            FUNC_2(FUNC_1(), 0, VAR_18);
        }
    }
}
