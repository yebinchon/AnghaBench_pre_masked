
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_15__ {size_t __cbElements; TYPE_3__** attributes; } ;
struct TYPE_14__ {int id; size_t szData; scalar_t__ data; } ;
struct TYPE_13__ {TYPE_1__* key; } ;
struct TYPE_12__ {int dwKeyBlob; int KeyBlob; } ;
typedef int * PVOID ;
typedef TYPE_2__* PKULL_M_CRED_VAULT_POLICY ;
typedef TYPE_3__* PKULL_M_CRED_VAULT_CREDENTIAL_ATTRIBUTE ;
typedef TYPE_4__* PKULL_M_CRED_VAULT_CREDENTIAL ;
typedef int PKULL_M_CRED_VAULT_CLEAR ;
typedef int PCWSTR ;
typedef int PBYTE ;
typedef int NTSTATUS ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef size_t DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,size_t*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int * FUNC_3 (int ,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 int FUNC_7 (int *,scalar_t__,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int ,int ,int *,int,int **,int *,int ,int **,size_t*,char*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int ,int *,int *,int *,scalar_t__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int ) ;
 TYPE_4__* FUNC_14 (int *) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int ,TYPE_4__*) ;
 TYPE_2__* FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_20 (int *,size_t,int *,int *) ;
 scalar_t__ FUNC_21 (int ,int *,size_t*) ;
 scalar_t__ FUNC_22 (int,int **,char*,int *,int *) ;
 int FUNC_23 (int *,size_t,int) ;

NTSTATUS FUNC_24(int VAR_8, wchar_t * VAR_9[])
{
 PCWSTR VAR_10, VAR_11;
 PVOID VAR_12, VAR_13, VAR_14;
 DWORD VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20 = VAR_2;
 BYTE VAR_21[VAR_0], VAR_22[VAR_1];
 PKULL_M_CRED_VAULT_POLICY VAR_23;
 PKULL_M_CRED_VAULT_CREDENTIAL VAR_24;
 PKULL_M_CRED_VAULT_CREDENTIAL_ATTRIBUTE VAR_25;
 PKULL_M_CRED_VAULT_CLEAR VAR_26;
 PVOID VAR_27;
 BOOL VAR_28;
 HCRYPTPROV VAR_29;
 HCRYPTKEY VAR_30;

 if(FUNC_22(VAR_8, VAR_9, L"cred", &VAR_11, ((void*)0)))
 {
  if(FUNC_21(VAR_11, (PBYTE *) &VAR_13, &VAR_16))
  {
   if((VAR_24 = FUNC_14(VAR_13)))
   {
    FUNC_16(0, VAR_24);

    if(FUNC_22(VAR_8, VAR_9, L"policy", &VAR_10, ((void*)0)))
    {
     if(FUNC_21(VAR_10, (PBYTE *) &VAR_12, &VAR_15))
     {
      if((VAR_23 = FUNC_17(VAR_12)))
      {
       FUNC_19(0, VAR_23);
       if(FUNC_9(VAR_23->key->KeyBlob, VAR_23->key->dwKeyBlob, ((void*)0), VAR_8, VAR_9, ((void*)0), 0, &VAR_14, &VAR_17, L"Decrypting Policy Keys:\n"))
       {
        if(FUNC_20(VAR_14, VAR_17, VAR_21, VAR_22))
        {
         FUNC_8(L"  AES128 key: "); FUNC_23(VAR_21, VAR_0, 0); FUNC_8(L"\n");
         FUNC_8(L"  AES256 key: "); FUNC_23(VAR_22, VAR_1, 0); FUNC_8(L"\n\n");

         if(FUNC_0(&VAR_29, ((void*)0), ((void*)0), VAR_5, VAR_3))
         {
          for(VAR_19 = 0; VAR_19 < VAR_24->__cbElements; VAR_19++)
          {
           if((VAR_25 = VAR_24->attributes[VAR_19]))
           {
            FUNC_8(L"  > Attribute %u : ", VAR_25->id);
            if(VAR_25->data && (VAR_18 = VAR_25->szData))
            {
             if((VAR_27 = FUNC_3(VAR_4, VAR_18)))
             {
              FUNC_7(VAR_27, VAR_25->data, VAR_18);
              if(FUNC_10(VAR_25, VAR_29, VAR_21, VAR_22, &VAR_30, &VAR_28))
              {
               if(FUNC_1(VAR_30, 0, VAR_7, 0, (PBYTE) VAR_27, &VAR_18))
               {
                if(VAR_28)
                {
                 FUNC_23(VAR_27, VAR_18, 0);
                }
                else
                {
                 FUNC_8(L"\n");
                 if(!VAR_25->id || (VAR_25->id == 100))
                 {
                  if((VAR_26 = FUNC_11(VAR_27)))
                  {
                   FUNC_13(1, VAR_26);
                   FUNC_12(VAR_26);
                  }
                 }
                 else FUNC_23(VAR_27, VAR_18, 1 | (16 << 16));
                 FUNC_8(L"\n");
                }
               }
               else FUNC_6(L"CryptDecrypt");
              }
              FUNC_4(VAR_27);
             }
            }
            FUNC_8(L"\n");
           }
          }
          FUNC_2(VAR_29, 0);
         }
        }
        FUNC_4(VAR_14);
       }
       FUNC_18(VAR_23);
      }
      FUNC_4(VAR_12);
     }
     else FUNC_6(L"kull_m_file_readData (policy)");
    }
    FUNC_15(VAR_24);
   }
   FUNC_4(VAR_13);
  }
  else FUNC_6(L"kull_m_file_readData (cred)");
 }
 else FUNC_5(L"Input Cred file needed (/cred:file)\n");

 return VAR_6;
}
