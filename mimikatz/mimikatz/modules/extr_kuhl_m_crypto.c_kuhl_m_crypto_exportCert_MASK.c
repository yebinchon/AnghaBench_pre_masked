
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_8__ {int * member_1; int member_0; } ;
struct TYPE_7__ {int cbCertEncoded; int pbCertEncoded; } ;
typedef TYPE_1__* PCCERT_CONTEXT ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef TYPE_2__ CRYPT_DATA_BLOB ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int ,TYPE_1__**) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int * FUNC_7 (int const*,int const*,int const,int const*,char*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;

void FUNC_10(PCCERT_CONTEXT VAR_5, BOOL VAR_6, const wchar_t * VAR_7, const wchar_t * VAR_8, const DWORD VAR_9, const wchar_t * VAR_10)
{
 wchar_t *VAR_11;
 BOOL VAR_12;
 HCERTSTORE VAR_13 = FUNC_3(VAR_3, 0, 0, VAR_2, ((void*)0));
 PCCERT_CONTEXT VAR_14 = ((void*)0);
 CRYPT_DATA_BLOB VAR_15 = {0, ((void*)0)};

 if((VAR_11 = FUNC_7(VAR_7, VAR_8, VAR_9, VAR_10, L"der")))
 {
  VAR_12 = FUNC_9(VAR_11, VAR_5->pbCertEncoded, VAR_5->cbCertEncoded);
  FUNC_6(L"\tPublic export  : %s - ", VAR_12 ? L"OK" : L"KO");
  if(VAR_12)
   FUNC_6(L"\'%s\'\n", VAR_11);
  else FUNC_5(L"CreateFile");
  FUNC_4(VAR_11);
 }
 else FUNC_5(L"kuhl_m_crypto_generateFileName");

 if(VAR_6)
 {
  if((VAR_11 = FUNC_7(VAR_7, VAR_8, VAR_9, VAR_10, L"pfx")))
  {
   VAR_12 = VAR_4;
   if(FUNC_0(VAR_13, VAR_5, VAR_1, &VAR_14))
   {
    VAR_12 = FUNC_8(VAR_13, VAR_11);
    FUNC_2(VAR_14);
   }
   FUNC_6(L"\tPrivate export : %s - ", VAR_12 ? L"OK" : L"KO");
   if(VAR_12)
    FUNC_6(L"\'%s\'\n", VAR_11);
   else FUNC_5(L"Export / CreateFile");
   FUNC_4(VAR_11);
  }
  else FUNC_5(L"kuhl_m_crypto_generateFileName");
 }
 FUNC_6(L"\n");
 FUNC_1(VAR_13, VAR_0);
}
