
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PBYTE ;
typedef scalar_t__ LPVOID ;
typedef scalar_t__ LPCVOID ;
typedef int LPCBYTE ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 int VAR_7 ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__,int,int ,int *,int *) ;

BOOL FUNC_10(LPCVOID VAR_9, LPCVOID VAR_10, LPCVOID VAR_11, DWORD VAR_12, LPVOID *VAR_13, DWORD *VAR_14)
{
 BOOL VAR_15 = VAR_3;
 HCRYPTPROV VAR_16;
 HCRYPTKEY VAR_17;
 DWORD VAR_18 = VAR_1;

 if(FUNC_0(&VAR_16, ((void*)0), ((void*)0), VAR_7, VAR_2))
 {
  if(FUNC_9(VAR_16, VAR_0, VAR_9, 16, 0, &VAR_17, ((void*)0)))
  {
   if(FUNC_4(VAR_17, VAR_5, (LPCBYTE) &VAR_18, 0))
   {
    if(FUNC_4(VAR_17, VAR_4, (LPCBYTE) VAR_10, 0))
    {
     if((*VAR_13 = FUNC_5(VAR_6, VAR_12)))
     {
      *VAR_14 = VAR_12;
      FUNC_8(*VAR_13, VAR_11, VAR_12);
      if(!(VAR_15 = FUNC_1(VAR_17, 0, VAR_8, 0, (PBYTE) *VAR_13, VAR_14)))
      {
       FUNC_7(L"CryptDecrypt");
       *VAR_13 = FUNC_6(*VAR_13);
       *VAR_14 = 0;
      }
     }
    }
    else FUNC_7(L"CryptSetKeyParam (IV)");
   }
   else FUNC_7(L"CryptSetKeyParam (MODE)");
   FUNC_2(VAR_17);
  }
  else FUNC_7(L"kull_m_crypto_hkey");
  FUNC_3(VAR_16, 0);
 }
 else FUNC_7(L"CryptAcquireContext");
 return VAR_15;
}
