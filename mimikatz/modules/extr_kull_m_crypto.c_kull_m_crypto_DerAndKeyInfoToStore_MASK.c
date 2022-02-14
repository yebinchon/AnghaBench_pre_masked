
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
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char*) ;
 int VAR_7 ;

BOOL FUNC_6(LPCVOID VAR_8, DWORD VAR_9, PCRYPT_KEY_PROV_INFO VAR_10, DWORD VAR_11, LPCWSTR VAR_12, BOOL VAR_13)
{
 BOOL VAR_14 = VAR_6;
 HCERTSTORE VAR_15;
 PCCERT_CONTEXT VAR_16;
 if((VAR_15 = FUNC_3(VAR_5, 0, 0, VAR_4 | VAR_11, VAR_12)))
 {
  if(FUNC_0(VAR_15, VAR_7, (LPCBYTE) VAR_8, VAR_9, VAR_13 ? VAR_2 : VAR_3, &VAR_16))
  {
   if(!(VAR_14 = FUNC_4(VAR_16, VAR_1, 0, (LPCVOID) VAR_10)))
    FUNC_5(L"CertSetCertificateContextProperty(CERT_KEY_PROV_INFO_PROP_ID)");
   FUNC_2(VAR_16);
  }
  else FUNC_5(L"CertAddEncodedCertificateToStore");
  FUNC_1(VAR_15, VAR_0);
 }
 return VAR_14;
}
