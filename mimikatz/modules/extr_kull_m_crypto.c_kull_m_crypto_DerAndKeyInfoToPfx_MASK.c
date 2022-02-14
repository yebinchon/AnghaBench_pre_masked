
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PCRYPT_KEY_PROV_INFO ;
typedef int PCCERT_CONTEXT ;
typedef int LPCWSTR ;
typedef scalar_t__ LPCVOID ;
typedef int LPCBYTE ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int VAR_6 ;
 int FUNC_6 (int ,int ) ;

BOOL FUNC_7(LPCVOID VAR_7, DWORD VAR_8, PCRYPT_KEY_PROV_INFO VAR_9, LPCWSTR VAR_10)
{
 BOOL VAR_11 = VAR_5;
 HCERTSTORE VAR_12;
 PCCERT_CONTEXT VAR_13;
 if((VAR_12 = FUNC_3(VAR_4, 0, 0, VAR_3, ((void*)0))))
 {
  if(FUNC_0(VAR_12, VAR_6, (LPCBYTE) VAR_7, VAR_8, VAR_2, &VAR_13))
  {
   if(FUNC_4(VAR_13, VAR_1, 0, (LPCVOID) VAR_9))
    VAR_11 = FUNC_6(VAR_12, VAR_10);
   else FUNC_5(L"CertSetCertificateContextProperty(CERT_KEY_PROV_INFO_PROP_ID)");
   FUNC_2(VAR_13);
  }
  else FUNC_5(L"CertAddEncodedCertificateToStore");
  FUNC_1(VAR_12, VAR_0);
 }
 return VAR_11;
}
