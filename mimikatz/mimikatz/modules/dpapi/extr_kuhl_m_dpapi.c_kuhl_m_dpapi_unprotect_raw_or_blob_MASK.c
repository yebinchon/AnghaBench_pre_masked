
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_13__ {int member_0; int member_1; int dwPromptFlags; int member_3; int * member_2; } ;
struct TYPE_10__ {int * keyHash; } ;
struct TYPE_12__ {TYPE_1__ data; } ;
struct TYPE_11__ {int guidMasterKey; } ;
typedef TYPE_2__* PKULL_M_DPAPI_BLOB ;
typedef TYPE_3__* PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY ;
typedef int * PCWSTR ;
typedef int * PBYTE ;
typedef int LPWSTR ;
typedef int LPVOID ;
typedef scalar_t__ LPCWSTR ;
typedef int * LPCVOID ;
typedef int DWORD ;
typedef TYPE_4__ CRYPTPROTECT_PROMPTSTRUCT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *,int,int *,int *,int,TYPE_4__*,int,int *,int*,int *,int,int *) ;
 scalar_t__ FUNC_12 (int,int **,char*,int **,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int **,int*) ;
 int FUNC_15 (int *,int,int ) ;

BOOL FUNC_16(LPCVOID VAR_8, DWORD VAR_9, LPWSTR *VAR_10, int VAR_11, wchar_t * VAR_12[], LPCVOID VAR_13, DWORD VAR_14, LPVOID *VAR_15, DWORD *VAR_16, LPCWSTR VAR_17)
{
 BOOL VAR_18 = VAR_5;
 PCWSTR VAR_19, VAR_20, VAR_21 = ((void*)0);
 CRYPTPROTECT_PROMPTSTRUCT VAR_22 = {sizeof(CRYPTPROTECT_PROMPTSTRUCT), VAR_1 | VAR_2 | VAR_3, ((void*)0), VAR_6}, *VAR_23;

 PBYTE VAR_24 = ((void*)0), VAR_25 = ((void*)0);
 DWORD VAR_26 = 0, VAR_27 = 0, VAR_28 = 0;
 PKULL_M_DPAPI_BLOB VAR_29;
 PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY VAR_30 = ((void*)0);
 BOOL VAR_31 = FUNC_12(VAR_11, VAR_12, L"unprotect", ((void*)0), ((void*)0));

 if(FUNC_12(VAR_11, VAR_12, L"masterkey", &VAR_20, ((void*)0)))
  FUNC_14(VAR_20, &VAR_24, &VAR_26);
 FUNC_12(VAR_11, VAR_12, L"password", &VAR_21, ((void*)0));
 if(FUNC_12(VAR_11, VAR_12, L"entropy", &VAR_19, ((void*)0)))
  FUNC_14(VAR_19, &VAR_25, &VAR_27);
 VAR_23 = FUNC_12(VAR_11, VAR_12, L"prompt", ((void*)0), ((void*)0)) ? &VAR_22 : ((void*)0);

 if(FUNC_12(VAR_11, VAR_12, L"machine", ((void*)0), ((void*)0)))
  VAR_28 |= VAR_0;

 if((VAR_29 = FUNC_8(VAR_8)))
 {
  VAR_30 = FUNC_7(&VAR_29->guidMasterKey);
  if(VAR_30 || (VAR_24 && VAR_26) || VAR_31)
  {
   if(VAR_17)
    FUNC_4(L"%s", VAR_17);

   if(VAR_31)
   {
    FUNC_4(L" * using CryptUnprotectData API\n");
   }

   if(VAR_30)
   {
    FUNC_4(L" * volatile cache: ");
    FUNC_6(VAR_30);
   }
   if(VAR_24)
   {
    FUNC_4(L" * masterkey     : ");
    FUNC_15(VAR_24, VAR_26, 0);
    FUNC_4(L"\n");
   }
   if(VAR_23)
   {
    FUNC_4(L" > prompt flags  : ");
    FUNC_10(VAR_23->dwPromptFlags);
    FUNC_4(L"\n");
   }
   else VAR_28 |= VAR_4;
   if(VAR_25)
   {
    FUNC_4(L" > entropy       : ");
    FUNC_15(VAR_25, VAR_27, 0);
    FUNC_4(L"\n");
   }
   if(VAR_21)
    FUNC_4(L" > password      : %s\n", VAR_21);

   if(VAR_30)
    VAR_18 = FUNC_11(VAR_8, VAR_9, VAR_10, (VAR_13 && VAR_14) ? VAR_13 : VAR_25, (VAR_13 && VAR_14) ? VAR_14 : VAR_27, ((void*)0), 0, VAR_15, VAR_16, VAR_30->data.keyHash, sizeof(VAR_30->data.keyHash), VAR_21);

   if(!VAR_18 && ((VAR_24 && VAR_26) || VAR_31))
   {
    VAR_18 = FUNC_11(VAR_8, VAR_9, VAR_10, (VAR_13 && VAR_14) ? VAR_13 : VAR_25, (VAR_13 && VAR_14) ? VAR_14 : VAR_27, VAR_23, VAR_28, VAR_15, VAR_16, VAR_24, VAR_26, VAR_21);
    if(VAR_18 && VAR_24 && VAR_26)
     FUNC_5(&VAR_29->guidMasterKey, VAR_24, VAR_26);

    if(!VAR_18 && !VAR_24)
    {
     if(FUNC_0() == VAR_7)
     {
      FUNC_2(L"NTE_BAD_KEY_STATE, needed Masterkey is: ");
      FUNC_13(&VAR_29->guidMasterKey);
      FUNC_4(L"\n");
     }
     else FUNC_3(L"CryptUnprotectData");
    }
   }

  }
  FUNC_9(VAR_29);
 }

 if(VAR_25)
  FUNC_1(VAR_25);
 if(VAR_24)
  FUNC_1(VAR_24);
 return VAR_18;
}
