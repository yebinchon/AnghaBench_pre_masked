
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sessionType; } ;
struct TYPE_8__ {TYPE_1__ publicKey; scalar_t__ hSessionKey; int hPrivateKey; int hProvParty; } ;
struct TYPE_7__ {scalar_t__ sessionType; int cbPublicKey; int pbPublicKey; } ;
typedef TYPE_2__* PMIMI_PUBLICKEY ;
typedef TYPE_3__* PKIWI_DH ;
typedef int PBYTE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;

BOOL FUNC_6(PKIWI_DH VAR_2, PMIMI_PUBLICKEY VAR_3)
{
 BOOL VAR_4 = VAR_0;
 VAR_2->hSessionKey = 0;
 if(VAR_2 && VAR_3)
 {
  if(VAR_2->publicKey.sessionType == VAR_3->sessionType)
  {
   if(FUNC_1(VAR_2->hProvParty, VAR_3->pbPublicKey, VAR_3->cbPublicKey, VAR_2->hPrivateKey, 0, &VAR_2->hSessionKey))
   {
    if(!(VAR_4 = FUNC_2(VAR_2->hSessionKey, VAR_1, (PBYTE) &VAR_2->publicKey.sessionType, 0)))
    {
     FUNC_4(L"CryptSetKeyParam");
     FUNC_0(VAR_2->hSessionKey);
     VAR_2->hSessionKey = 0;
    }
   }
   else FUNC_4(L"CryptImportKey");

  }
  else FUNC_3(L"Alg mismatch: DH - %s (%08x) / P - %s (%08x)\n", FUNC_5(VAR_2->publicKey.sessionType), VAR_2->publicKey.sessionType, FUNC_5(VAR_3->sessionType), VAR_3->sessionType);
 }
 return VAR_4;
}
