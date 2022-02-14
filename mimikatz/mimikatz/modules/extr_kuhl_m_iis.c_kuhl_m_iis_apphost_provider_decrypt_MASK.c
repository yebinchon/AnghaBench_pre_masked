
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_12__ {int cbPvk; } ;
typedef int PVK_FILE_HDR ;
typedef TYPE_1__* PPVK_FILE_HDR ;
typedef char* PCWSTR ;
typedef TYPE_1__* PBYTE ;
typedef TYPE_1__* LPCBYTE ;
typedef int HCRYPTPROV ;
typedef scalar_t__ HCRYPTKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,int ,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ,TYPE_1__*,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int ,scalar_t__,int ,scalar_t__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*) ;
 int VAR_8 ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (char*,TYPE_1__**,int *) ;
 scalar_t__ FUNC_11 (int,int **,char*,char**,int *) ;

void FUNC_12(int VAR_9, wchar_t * VAR_10[], PCWSTR VAR_11, BOOL VAR_12, LPCBYTE VAR_13, DWORD VAR_14, LPCBYTE VAR_15, DWORD VAR_16)
{
 BOOL VAR_17;
 PBYTE VAR_18;
 DWORD VAR_19, VAR_20;
 HCRYPTPROV VAR_21;
 HCRYPTKEY VAR_22 = 0, VAR_23;
 PPVK_FILE_HDR VAR_24 = ((void*)0);
 PCWSTR VAR_25 = ((void*)0);

 VAR_17 = FUNC_11(VAR_9, VAR_10, L"live", ((void*)0), ((void*)0));
 if(!FUNC_11(VAR_9, VAR_10, VAR_11, &VAR_25, ((void*)0)))
  FUNC_11(VAR_9, VAR_10, L"pvk", &VAR_25, ((void*)0));

 if(VAR_17 || VAR_25)
 {
  if((VAR_18 = (PBYTE) FUNC_5(VAR_4, VAR_16)))
  {
   FUNC_8(VAR_18, VAR_15, VAR_16);
   VAR_19 = VAR_16;
   if(VAR_17)
    FUNC_9(L"  | Live Key  : %s - %s : ", VAR_11, VAR_12 ? L"machine" : L"user");
   if(FUNC_0(&VAR_21, VAR_17 ? VAR_11 : ((void*)0), (VAR_5 <= VAR_3) ? VAR_7 : VAR_6 , VAR_8, (VAR_17 ? 0 : VAR_1) | (VAR_12 ? VAR_0 : 0)))
   {
    if(VAR_17)
     FUNC_9(L"OK\n");
    else
    {

     if(FUNC_10(VAR_25, (PBYTE *) &VAR_24, &VAR_20))
     {
      FUNC_9(L"  | PVK file  : %s - \'%s\' : ", VAR_11, VAR_25);
      if(FUNC_3(VAR_21, (PBYTE) VAR_24 + sizeof(PVK_FILE_HDR), VAR_24->cbPvk, 0, 0, &VAR_22))
       FUNC_9(L"OK\n");
      else FUNC_7(L"CryptImportKey (RSA)");
     }
    }
    if(VAR_17 || VAR_22)
    {
     if(FUNC_3(VAR_21, VAR_13, VAR_14, VAR_22, 0, &VAR_23))
     {
      if(FUNC_1(VAR_23, 0, VAR_2, 0, VAR_18, &VAR_19))
      {
       FUNC_9(L"  | Password  : %s\n", VAR_18 + sizeof(DWORD) );
      }
      else FUNC_7(L"CryptDecrypt");
      FUNC_2(VAR_23);
     }
     else FUNC_7(L"CryptImportKey (session)");
    }
    if(!VAR_17)
    {
     if(VAR_22)
      FUNC_2(VAR_22);
     if(VAR_24)
      FUNC_6(VAR_24);
    }
    FUNC_4(VAR_21, 0);
   }
   else FUNC_7(L"CryptAcquireContext");
   FUNC_6(VAR_18);
  }
 }
}
