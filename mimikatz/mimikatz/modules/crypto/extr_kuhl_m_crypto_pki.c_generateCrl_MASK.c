
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ pszObjId; } ;
struct TYPE_14__ {int pbData; } ;
struct TYPE_13__ {TYPE_4__ Value; int pszObjId; void* fCritical; } ;
struct TYPE_12__ {TYPE_3__* rgExtension; TYPE_8__ SignatureAlgorithm; int Issuer; int NextUpdate; int ThisUpdate; int cExtension; int dwVersion; int member_0; } ;
struct TYPE_11__ {int crlnumber; scalar_t__ algorithm; } ;
typedef int PWSTR ;
typedef int PKIWI_SIGNER ;
typedef TYPE_1__* PKIWI_CRL_INFO ;
typedef int PCCERT_CONTEXT ;
typedef int PBYTE ;
typedef int HCRYPTPROV_OR_NCRYPT_KEY_HANDLE ;
typedef int DWORD ;
typedef TYPE_2__ CRL_INFO ;
typedef TYPE_3__ CERT_EXTENSION ;
typedef void* BOOL ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (void*,int ,int ) ;
 void* FUNC_4 (int ,int ,int ,TYPE_2__*,TYPE_8__*,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int *,void**,TYPE_3__*,int *) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int ,int *,TYPE_4__*) ;
 int FUNC_10 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

BOOL FUNC_11(PKIWI_CRL_INFO VAR_5, PCCERT_CONTEXT VAR_6, PKIWI_SIGNER VAR_7, PBYTE *VAR_8, DWORD *VAR_9)
{
 BOOL VAR_10 = VAR_1, VAR_11 = VAR_1, VAR_12;
 HCRYPTPROV_OR_NCRYPT_KEY_HANDLE VAR_13 = 0;
 DWORD VAR_14;

 CERT_EXTENSION VAR_15[2] = {0};
 CRL_INFO VAR_16 = {0};
 PWSTR VAR_17;

 VAR_16.dwVersion = VAR_0;
 VAR_16.cExtension = FUNC_0(VAR_15);
 VAR_16.rgExtension = VAR_15;
 VAR_16.SignatureAlgorithm.pszObjId = VAR_5->algorithm ? VAR_5->algorithm : VAR_4;

 FUNC_6(&VAR_16.ThisUpdate, &VAR_16.NextUpdate, VAR_5, VAR_6, VAR_7);

 VAR_16.rgExtension[0].pszObjId = VAR_3;
 VAR_16.rgExtension[0].fCritical = VAR_1;
 if(FUNC_9(VAR_16.rgExtension[0].pszObjId, &VAR_5->crlnumber, &VAR_16.rgExtension[0].Value))
 {
  FUNC_8(L"[s.crl ] algorithm : %S\n", VAR_16.SignatureAlgorithm.pszObjId);
  FUNC_8(L"[s.crl ] validity  : ");
  FUNC_10(&VAR_16.ThisUpdate);
  FUNC_8(L" -> ");
  FUNC_10(&VAR_16.NextUpdate);
  FUNC_8(L"\n");

  if(FUNC_7(VAR_6, VAR_7, &VAR_13, &VAR_14, &VAR_12, &VAR_16.rgExtension[1], &VAR_16.Issuer))
  {
   if((VAR_17 = FUNC_5(&VAR_16.Issuer)))
   {
    FUNC_8(L" [i.cert] subject  : %s\n", VAR_17);
    FUNC_1(VAR_17);
   }
   FUNC_8(L"[s.crl ] signature : ");
   if((VAR_10 = FUNC_4(VAR_13, VAR_14, VAR_2, &VAR_16, &VAR_16.SignatureAlgorithm, VAR_8, VAR_9)))
    FUNC_8(L"OK\n");
   FUNC_3(VAR_12, VAR_14, VAR_13);
   FUNC_1(VAR_16.rgExtension[1].Value.pbData);
  }
  FUNC_1(VAR_16.rgExtension[0].Value.pbData);
 }
 else FUNC_2(L"Unable to create CRL Number\n");
 return VAR_10;
}
