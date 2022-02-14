
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hierarchy_data {TYPE_2__* pCertViewInfo; } ;
struct TYPE_7__ {int csCertChain; } ;
struct TYPE_5__ {scalar_t__ pCryptProviderData; } ;
struct TYPE_6__ {int idxCounterSigner; int fCounterSigner; int idxSigner; TYPE_1__ u; } ;
typedef int LPARAM ;
typedef int DWORD ;
typedef TYPE_3__ CRYPT_PROVIDER_SGNR ;
typedef int CRYPT_PROVIDER_DATA ;


 TYPE_3__* FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static inline DWORD FUNC_1(struct hierarchy_data *VAR_0, LPARAM VAR_1)
{
    CRYPT_PROVIDER_SGNR *VAR_2 = FUNC_0(
     (CRYPT_PROVIDER_DATA *)VAR_0->pCertViewInfo->u.pCryptProviderData,
     VAR_0->pCertViewInfo->idxSigner, VAR_0->pCertViewInfo->fCounterSigner,
     VAR_0->pCertViewInfo->idxCounterSigner);

    if (!(VAR_1 & 1))
        return VAR_2->csCertChain - 1;
    return VAR_1 >> 1;
}
