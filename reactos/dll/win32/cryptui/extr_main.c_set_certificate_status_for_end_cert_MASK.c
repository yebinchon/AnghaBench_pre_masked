
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pCryptProviderData; } ;
struct TYPE_5__ {int idxCert; int idxCounterSigner; int fCounterSigner; int idxSigner; TYPE_1__ u; } ;
typedef TYPE_2__* PCCRYPTUI_VIEWCERTIFICATE_STRUCTW ;
typedef int HWND ;
typedef int CRYPT_PROVIDER_SGNR ;
typedef int CRYPT_PROVIDER_DATA ;
typedef int CRYPT_PROVIDER_CERT ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(HWND VAR_1,
 PCCRYPTUI_VIEWCERTIFICATE_STRUCTW VAR_2)
{
    HWND VAR_3 = FUNC_0(VAR_1, VAR_0);
    CRYPT_PROVIDER_SGNR *VAR_4 = FUNC_2(
     (CRYPT_PROVIDER_DATA *)VAR_2->u.pCryptProviderData,
     VAR_2->idxSigner, VAR_2->fCounterSigner,
     VAR_2->idxCounterSigner);
    CRYPT_PROVIDER_CERT *VAR_5 = FUNC_1(VAR_4,
     VAR_2->idxCert);

    FUNC_3(VAR_3, VAR_5);
}
