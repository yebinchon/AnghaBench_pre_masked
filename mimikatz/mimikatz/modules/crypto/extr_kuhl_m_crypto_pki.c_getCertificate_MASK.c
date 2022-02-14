
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PCRYPT_ALGORITHM_IDENTIFIER ;
typedef int * PBYTE ;
typedef int LPCSTR ;
typedef int HCRYPTPROV_OR_NCRYPT_KEY_HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int,int ,void const*,int ,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int VAR_3 ;

BOOL FUNC_4(HCRYPTPROV_OR_NCRYPT_KEY_HANDLE VAR_4, DWORD VAR_5, LPCSTR VAR_6, const void *VAR_7, PCRYPT_ALGORITHM_IDENTIFIER VAR_8, PBYTE *VAR_9, DWORD *VAR_10)
{
 BOOL VAR_11 = VAR_0;
 if(FUNC_0(VAR_4, VAR_5, VAR_3 | VAR_2, VAR_6, VAR_7, VAR_8, ((void*)0), ((void*)0), VAR_10))
 {
  if((*VAR_9 = (PBYTE) FUNC_1(VAR_1, *VAR_10)))
  {
   if(!(VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_3 | VAR_2, VAR_6, VAR_7, VAR_8, ((void*)0), *VAR_9, VAR_10)))
   {
    FUNC_3(L"CryptSignAndEncodeCertificate (data)");
    *VAR_9 = (PBYTE) FUNC_2(*VAR_9);
   }
  }
 }
 else FUNC_3(L"CryptSignAndEncodeCertificate (init)");
 return VAR_11;
}
