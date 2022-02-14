
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int dwAlgHashLen; int dwAlgCryptLen; scalar_t__ algCrypt; int dwDataLen; int pbData; scalar_t__ algHash; int dwSaltLen; int pbSalt; } ;
typedef int * PVOID ;
typedef TYPE_1__* PKULL_M_DPAPI_BLOB ;
typedef int * LPVOID ;
typedef int LPCWSTR ;
typedef int LPCVOID ;
typedef int LPBYTE ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BOOL ;
typedef scalar_t__ ALG_ID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (scalar_t__,int *,int,int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int ,int,int *,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int *,int,int ,int *,int *) ;
 scalar_t__ FUNC_10 (int ,int,int ,int ,int ,int,int *,int,scalar_t__,int *,int) ;
 int FUNC_11 (int ) ;

BOOL FUNC_12(PKULL_M_DPAPI_BLOB VAR_7, LPCVOID VAR_8, DWORD VAR_9, LPCVOID VAR_10, DWORD VAR_11, LPCWSTR VAR_12, LPVOID *VAR_13, DWORD *VAR_14)
{
 BOOL VAR_15 = VAR_3, VAR_16 = !VAR_12;
 PVOID VAR_17, VAR_18, VAR_19 = ((void*)0);
 HCRYPTPROV VAR_20;
 HCRYPTKEY VAR_21;
 DWORD VAR_22 = VAR_7->dwAlgHashLen / 8, VAR_23 = VAR_7->dwAlgCryptLen / 8, VAR_24;
 ALG_ID VAR_25;

 if((VAR_7->algCrypt == VAR_0) && (VAR_23 < (192 / 8)))
  VAR_23 = 192 / 8;

 if(!VAR_16)
 {
  if(VAR_7->algHash == VAR_2)
  {
   VAR_25 = VAR_2;
   VAR_24 = VAR_22;
  }
  else
  {
   VAR_25 = VAR_1;
   VAR_24 = VAR_5;
  }
  if((VAR_19 = FUNC_2(VAR_4, VAR_24)))
   VAR_16 = FUNC_8(VAR_25, VAR_12, (DWORD) (FUNC_11(VAR_12) * sizeof(wchar_t)), VAR_19, VAR_24);
 }

 if(VAR_16)
 {
  if((VAR_17 = FUNC_2(VAR_4, VAR_22)))
  {
   if(FUNC_10(VAR_8, VAR_9, VAR_7->pbSalt, VAR_7->dwSaltLen, VAR_10, VAR_11, VAR_19, VAR_19 ? VAR_24 : 0, VAR_7->algHash, VAR_17, VAR_22))
   {
    if((VAR_18 = FUNC_2(VAR_4, VAR_23)))
    {
     if(FUNC_6(VAR_7->algHash, VAR_17, VAR_22, VAR_18, VAR_23))
     {
      if(FUNC_9(VAR_7->algCrypt, VAR_18, VAR_23, 0, &VAR_21, &VAR_20))
      {
       if((*VAR_13 = FUNC_2(VAR_4, VAR_7->dwDataLen)))
       {
        FUNC_5(*VAR_13, VAR_7->pbData, VAR_7->dwDataLen);
        *VAR_14 = VAR_7->dwDataLen;
        VAR_15 = FUNC_0(VAR_21, 0, VAR_6, 0, (LPBYTE) *VAR_13, VAR_14);
        if(!VAR_15)
        {
         FUNC_3(*VAR_13);
         FUNC_4(L"CryptDecrypt");
        }
       }
       FUNC_1(VAR_21);
       if(!FUNC_7(VAR_20))
        FUNC_4(L"kull_m_crypto_close_hprov_delete_container");
      }
      else FUNC_4(L"kull_m_crypto_hkey_session");
     }
     FUNC_3(VAR_18);
    }
   }
   FUNC_3(VAR_17);
  }
 }
 if(VAR_19)
  FUNC_3(VAR_19);
 return VAR_15;
}
