
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* pCertInfo; } ;
struct TYPE_16__ {int pwszContainerName; int pwszProvName; } ;
struct TYPE_15__ {int dwKeySpec; scalar_t__ hProv; int Subject; } ;
struct TYPE_14__ {int Subject; } ;
typedef TYPE_2__* PKIWI_SIGNER ;
typedef TYPE_3__* PCRYPT_KEY_PROV_INFO ;
typedef TYPE_3__* PCERT_PUBLIC_KEY_INFO ;
typedef int PCERT_EXTENSION ;
typedef TYPE_5__* PCCERT_CONTEXT ;
typedef scalar_t__ HCRYPTPROV_OR_NCRYPT_KEY_HANDLE ;
typedef int DWORD ;
typedef int CERT_NAME_BLOB ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ,TYPE_3__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int,int *,scalar_t__*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 TYPE_3__* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (char*,int ,int ) ;

BOOL FUNC_9(PCCERT_CONTEXT VAR_5, PKIWI_SIGNER VAR_6, HCRYPTPROV_OR_NCRYPT_KEY_HANDLE *VAR_7, DWORD *VAR_8, BOOL *VAR_9, PCERT_EXTENSION VAR_10, CERT_NAME_BLOB *VAR_11)
{
 BOOL VAR_12 = VAR_3;
 DWORD VAR_13;
 PCRYPT_KEY_PROV_INFO VAR_14;
 PCERT_PUBLIC_KEY_INFO VAR_15;

 if(VAR_5)
 {
  *VAR_11 = VAR_5->pCertInfo->Subject;
  if(FUNC_0(VAR_5, VAR_0, ((void*)0), &VAR_13))
  {
   if((VAR_14 = (PCRYPT_KEY_PROV_INFO) FUNC_2(VAR_4, VAR_13)))
   {
    if(FUNC_0(VAR_5, VAR_0, VAR_14, &VAR_13))
     FUNC_8(L" [i.key ] provider : %s\n [i.key ] container: %s\n", VAR_14->pwszProvName, VAR_14->pwszContainerName);
    FUNC_3(VAR_14);
   }
  }
  if(FUNC_1(VAR_5, VAR_2 | VAR_1, ((void*)0), VAR_7, VAR_8, VAR_9))
  {
   if((VAR_15 = FUNC_6(*VAR_7, *VAR_8)))
   {
    VAR_12 = FUNC_7(VAR_10, VAR_15);
    FUNC_3(VAR_15);
   }
   if(!VAR_12)
    FUNC_5(*VAR_9, *VAR_8, *VAR_7);
  }
  else FUNC_4(L"CryptAcquireCertificatePrivateKey(signer)");
 }
 else if(VAR_6)
 {
  *VAR_11 = VAR_6->Subject;
  *VAR_7 = VAR_6->hProv;
  *VAR_8 = VAR_6->dwKeySpec;
  *VAR_9 = VAR_3;
  if((VAR_15 = FUNC_6(*VAR_7, *VAR_8)))
  {
   VAR_12 = FUNC_7(VAR_10, VAR_15);
   FUNC_3(VAR_15);
  }
 }

 if(!VAR_12)
 {
  *VAR_7 = 0;
  *VAR_9 = VAR_3;
 }
 return VAR_12;
}
