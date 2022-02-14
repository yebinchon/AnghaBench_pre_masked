
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int dwSecretLen; int pbSecret; int dwAccesscheckLen; int pbAccesscheck; } ;
struct TYPE_17__ {int buffer; int cbMasterKey; scalar_t__ dataLen; scalar_t__ data; } ;
typedef TYPE_1__* PVOID ;
typedef TYPE_1__* PSID ;
typedef TYPE_3__* PKULL_M_DPAPI_MASTERKEY_DOMAINKEY ;
typedef TYPE_1__* PKULL_M_DPAPI_DOMAIN_RSA_MASTER_KEY ;
typedef TYPE_1__* PKULL_M_DPAPI_DOMAIN_ACCESS_CHECK ;
typedef int PBYTE ;
typedef scalar_t__ LPCVOID ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int,int*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int,int,int ,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int,int ) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_8 (int ,int) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*) ;
 int VAR_6 ;
 int FUNC_11 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_12 (int,int *,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,TYPE_1__*,int,int *,int) ;
 scalar_t__ FUNC_15 (int ,int ,int,int,int ,int *,int *) ;

BOOL FUNC_16(PKULL_M_DPAPI_MASTERKEY_DOMAINKEY VAR_9, LPCVOID VAR_10, DWORD VAR_11, PVOID *VAR_12, DWORD *VAR_13, PSID *VAR_14)
{
 BOOL VAR_15 = VAR_3;
 HCRYPTPROV VAR_16, VAR_17;
 HCRYPTKEY VAR_18, VAR_19;
 PKULL_M_DPAPI_DOMAIN_RSA_MASTER_KEY VAR_20;
 PKULL_M_DPAPI_DOMAIN_ACCESS_CHECK VAR_21;
 BYTE VAR_22[VAR_7];
 DWORD VAR_23;
 PSID VAR_24;

 if(FUNC_1(&VAR_16, ((void*)0), ((void*)0), VAR_6, VAR_2))
 {
  if(FUNC_4(VAR_16, (PBYTE) VAR_10, VAR_11, 0, 0, &VAR_18))
  {
   VAR_23 = VAR_9->dwSecretLen;
   if((VAR_20 = (PKULL_M_DPAPI_DOMAIN_RSA_MASTER_KEY) FUNC_8(VAR_5, VAR_23)))
   {
    FUNC_11(VAR_20, VAR_9->pbSecret, VAR_23);
    if(FUNC_2(VAR_18, 0, VAR_8, 0, (PBYTE) VAR_20, &VAR_23))
    {





     if(FUNC_15(VAR_16, VAR_0, VAR_20->buffer + VAR_20->cbMasterKey, 192 / 8, 0, &VAR_19, &VAR_17))
     {
      if(FUNC_6(VAR_19, VAR_4, VAR_20->buffer + VAR_20->cbMasterKey + 192 / 8, 0))
      {
       VAR_23 = VAR_9->dwAccesscheckLen;

       if((VAR_21 = (PKULL_M_DPAPI_DOMAIN_ACCESS_CHECK) FUNC_8(VAR_5, VAR_23)))
       {
        FUNC_11(VAR_21, VAR_9->pbAccesscheck, VAR_23);

        if(FUNC_2(VAR_19, 0, VAR_3, 0, (PBYTE) VAR_21, &VAR_23))
        {
         VAR_24 = (PSID) (VAR_21->data + VAR_21->dataLen);





         if(FUNC_14(VAR_1, VAR_21, VAR_23 - VAR_7, VAR_22, VAR_7))
         {

          if(FUNC_12((PBYTE) VAR_21 + VAR_23 - VAR_7, VAR_22, VAR_7))
          {
           *VAR_13 = VAR_20->cbMasterKey;
           if((*VAR_12 = FUNC_8(VAR_5, *VAR_13)))
           {
            FUNC_11(*VAR_12, VAR_20->buffer, *VAR_13);
            VAR_15 = VAR_8;
            *VAR_14 = ((void*)0);
            if(VAR_14)
            {
             VAR_15 = VAR_3;
             VAR_23 = FUNC_7(VAR_24);
             if((*VAR_14 = (PSID) FUNC_8(VAR_5, VAR_23)))
              VAR_15 = FUNC_0(VAR_23, *VAR_14, VAR_24);
            }
            if(!VAR_15)
            {
             if(*VAR_12)
              *VAR_12 = FUNC_9(*VAR_12);
             if(*VAR_14)
              *VAR_14 = FUNC_9(*VAR_14);
             *VAR_13 = 0;
            }
           }
          }
         }
        }
        else FUNC_10(L"CryptDecrypt");
        FUNC_9(VAR_21);
       }
      }
      else FUNC_10(L"CryptSetKeyParam");
      FUNC_3(VAR_19);
      if(!FUNC_13(VAR_17))
       FUNC_10(L"kull_m_crypto_close_hprov_delete_container");
     }
    }
    else FUNC_10(L"CryptDecrypt");
    FUNC_9(VAR_20);
   }
   FUNC_3(VAR_18);
  }
  FUNC_5(VAR_16, 0);
 }
 return VAR_15;
}
