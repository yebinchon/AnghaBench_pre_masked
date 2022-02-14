
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ algHash; scalar_t__ algCrypt; int __dwKeyLen; int pbKey; int rounds; int salt; } ;
typedef int PVOID ;
typedef TYPE_1__* PKULL_M_DPAPI_MASTERKEY ;
typedef int PBYTE ;
typedef int LPCVOID ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BOOL ;
typedef scalar_t__ ALG_ID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int,int*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (int,int,int) ;
 int VAR_6 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,int,int,int ,int *,int *) ;
 scalar_t__ FUNC_13 (scalar_t__,int,int,int,int,int,int) ;
 scalar_t__ FUNC_14 (scalar_t__,int,int,int ,int,int ,int,int,int ) ;

BOOL FUNC_15(PKULL_M_DPAPI_MASTERKEY VAR_7, LPCVOID VAR_8, DWORD VAR_9, PVOID *VAR_10, DWORD *VAR_11)
{
 BOOL VAR_12 = VAR_3;
 HCRYPTPROV VAR_13;
 HCRYPTKEY VAR_14;
 ALG_ID VAR_15;
 DWORD VAR_16, VAR_17, VAR_18, VAR_19;
 PVOID VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_15 = (VAR_7->algHash == VAR_1) ? VAR_2 : VAR_7->algHash;
 VAR_16 = FUNC_11(VAR_15);
 VAR_18 = FUNC_9(VAR_7->algCrypt);
 VAR_17 = FUNC_8(VAR_7->algCrypt);

 if((VAR_20 = FUNC_3(VAR_5, VAR_18 + VAR_17)))
 {
  if(FUNC_14(VAR_15, VAR_8, VAR_9, VAR_7->salt, sizeof(VAR_7->salt), VAR_7->rounds, (PBYTE) VAR_20, VAR_18 + VAR_17, VAR_6))
  {
   if(FUNC_12(VAR_7->algCrypt, VAR_20, VAR_18, 0, &VAR_14, &VAR_13))
   {
    if(FUNC_2(VAR_14, VAR_4, (PBYTE) VAR_20 + VAR_18, 0))
    {
     VAR_19 = VAR_7->__dwKeyLen;
     if((VAR_21 = FUNC_3(VAR_5, VAR_19)))
     {
      FUNC_6(VAR_21, VAR_7->pbKey, VAR_19);
      if(FUNC_0(VAR_14, 0, VAR_3, 0, (PBYTE) VAR_21, &VAR_19))
      {
       *VAR_11 = VAR_19 - 16 - VAR_16 - ((VAR_7->algCrypt == VAR_0) ? 4 : 0);
       if((VAR_22 = FUNC_3(VAR_5, VAR_16)))
       {
        if(FUNC_13(VAR_15, VAR_8, VAR_9, VAR_21, 16, VAR_22, VAR_16))
        {
         if((VAR_23 = FUNC_3(VAR_5, VAR_16)))
         {
          if(FUNC_13(VAR_15, VAR_22, VAR_16, (PBYTE) VAR_21 + VAR_19 - *VAR_11, *VAR_11, VAR_23, VAR_16))
          {
           if((VAR_12 = FUNC_7(VAR_23, (PBYTE) VAR_21 + 16, VAR_16)))
           {
            if((*VAR_10 = FUNC_3(VAR_5, *VAR_11)))
             FUNC_6(*VAR_10, (PBYTE) VAR_21 + VAR_19 - *VAR_11, *VAR_11);
           }
          }
          FUNC_4(VAR_23);
         }
        }
        FUNC_4(VAR_22);
       }
      }
      FUNC_4(VAR_21);
     }
    }
    FUNC_1(VAR_14);
    if(!FUNC_10(VAR_13))
     FUNC_5(L"kull_m_crypto_close_hprov_delete_container");
   }
   else FUNC_5(L"kull_m_crypto_hkey_session");
  }
  FUNC_4(VAR_20);
 }
 return VAR_12;
}
