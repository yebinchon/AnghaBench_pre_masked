
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int viewInfo ;
struct hierarchy_data {TYPE_3__* pCertViewInfo; } ;
typedef int item ;
struct TYPE_14__ {TYPE_2__* pasCertChain; } ;
struct TYPE_13__ {int mask; int dwSize; int nStartPage; int rgPropSheetPages; int cPropSheetPages; int rghStores; int cStores; int pCertContext; int szTitle; int dwFlags; int lParam; scalar_t__ hItem; } ;
struct TYPE_10__ {scalar_t__ pCryptProviderData; } ;
struct TYPE_12__ {int nStartPage; int rgPropSheetPages; int cPropSheetPages; int rghStores; int cStores; int szTitle; int dwFlags; int idxCounterSigner; int fCounterSigner; int idxSigner; TYPE_1__ u; } ;
struct TYPE_11__ {int pCert; } ;
typedef TYPE_4__ TVITEMW ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ HTREEITEM ;
typedef scalar_t__ DWORD ;
typedef TYPE_5__ CRYPT_PROVIDER_SGNR ;
typedef int CRYPT_PROVIDER_DATA ;
typedef TYPE_4__ CRYPTUI_VIEWCERTIFICATE_STRUCTW ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_4__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__* FUNC_3 (int *,int ,int ,int ) ;
 struct hierarchy_data* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct hierarchy_data*,int ) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (int ,struct hierarchy_data*) ;

__attribute__((used)) static void FUNC_8(HWND VAR_9)
{
    HWND VAR_10 = FUNC_1(VAR_9, VAR_1);
    TVITEMW VAR_11;
    struct hierarchy_data *VAR_12;
    DWORD VAR_13;

    FUNC_6(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.mask = VAR_3 | VAR_4;
    VAR_11.hItem = (HTREEITEM)FUNC_2(VAR_10, VAR_8, VAR_2, 0);
    FUNC_2(VAR_10, VAR_7, 0, (LPARAM)&VAR_11);
    VAR_12 = FUNC_4(VAR_10, VAR_11.hItem);
    VAR_13 = FUNC_5(VAR_12, VAR_11.lParam);
    if (VAR_13 != 0)
    {
        CRYPT_PROVIDER_SGNR *VAR_14;
        CRYPTUI_VIEWCERTIFICATE_STRUCTW VAR_15;
        BOOL VAR_16 = VAR_0;

        VAR_14 = FUNC_3(
         (CRYPT_PROVIDER_DATA *)VAR_12->pCertViewInfo->u.pCryptProviderData,
         VAR_12->pCertViewInfo->idxSigner,
         VAR_12->pCertViewInfo->fCounterSigner,
         VAR_12->pCertViewInfo->idxCounterSigner);
        FUNC_6(&VAR_15, 0, sizeof(VAR_15));
        VAR_15.dwSize = sizeof(VAR_15);
        VAR_15.dwFlags = VAR_12->pCertViewInfo->dwFlags;
        VAR_15.szTitle = VAR_12->pCertViewInfo->szTitle;
        VAR_15.pCertContext = VAR_14->pasCertChain[VAR_13].pCert;
        VAR_15.cStores = VAR_12->pCertViewInfo->cStores;
        VAR_15.rghStores = VAR_12->pCertViewInfo->rghStores;
        VAR_15.cPropSheetPages = VAR_12->pCertViewInfo->cPropSheetPages;
        VAR_15.rgPropSheetPages = VAR_12->pCertViewInfo->rgPropSheetPages;
        VAR_15.nStartPage = VAR_12->pCertViewInfo->nStartPage;
        FUNC_0(&VAR_15, &VAR_16);
        if (VAR_16)
        {

            FUNC_2(VAR_10, VAR_6, 0, (LPARAM)VAR_5);

            FUNC_7(VAR_9, VAR_12);
        }
    }
}
