
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PCERT_PUBLIC_KEY_INFO ;
typedef int HCRYPTPROV_OR_NCRYPT_KEY_HANDLE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ,int ,int,int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;

PCERT_PUBLIC_KEY_INFO FUNC_4(HCRYPTPROV_OR_NCRYPT_KEY_HANDLE VAR_3, DWORD VAR_4)
{
 PCERT_PUBLIC_KEY_INFO VAR_5 = ((void*)0);
 DWORD VAR_6;
 if(FUNC_0(VAR_3, VAR_4, VAR_2 | VAR_1, ((void*)0), &VAR_6))
 {
  if((VAR_5 = (PCERT_PUBLIC_KEY_INFO) FUNC_1(VAR_0, VAR_6)))
  {
   if(!FUNC_0(VAR_3, VAR_4, VAR_2 | VAR_1, VAR_5, &VAR_6))
   {
    FUNC_3(L"CryptExportPublicKeyInfo (data)");
    VAR_5 = (PCERT_PUBLIC_KEY_INFO) FUNC_2(VAR_5);
   }
  }
 }
 else FUNC_3(L"CryptExportPublicKeyInfo (init)");
 return VAR_5;
}
