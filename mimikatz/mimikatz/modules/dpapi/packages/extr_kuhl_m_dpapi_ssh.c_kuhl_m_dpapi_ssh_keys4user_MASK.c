
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_3__ {char* pSid; scalar_t__ hToken; int * member_1; int * member_0; } ;
typedef int PKULL_M_REGISTRY_HANDLE ;
typedef scalar_t__ LPCWSTR ;
typedef TYPE_1__ KUHL_M_DPAPI_SSH_TOKEN ;
typedef int HKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int ,int,char**,scalar_t__) ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int,char*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_10 (int ,int ,char*,int ,int,int *) ;
 scalar_t__ FUNC_11 (int ,int ,int *,int *,int *,int*,int*,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_12 (int,char**,char*,int *,int *) ;
 scalar_t__ FUNC_13 (int ,TYPE_1__*) ;

void FUNC_14(PKULL_M_REGISTRY_HANDLE VAR_5, HKEY VAR_6, LPCWSTR VAR_7, int VAR_8, wchar_t * VAR_9[])
{
 HKEY VAR_10, VAR_11;
 DWORD VAR_12, VAR_13, VAR_14, VAR_15;
 wchar_t * VAR_16;
 KUHL_M_DPAPI_SSH_TOKEN VAR_17 = {((void*)0), ((void*)0)};
 BOOL VAR_18 = VAR_0;

 if(FUNC_10(VAR_5, VAR_6, L"Software\\OpenSSH\\Agent\\Keys", 0, VAR_2 | VAR_1, &VAR_10))
 {
  if(VAR_7 && FUNC_12(VAR_8, VAR_9, L"impersonate", ((void*)0), ((void*)0)))
  {
   FUNC_5(L" * Trying to get an impersonation token for %s: ", VAR_7);
   if(FUNC_1(VAR_7, &VAR_17.pSid))
   {
    if((VAR_18 = FUNC_13(VAR_4, &VAR_17)))
    {
     FUNC_5(L"   ");
     FUNC_7(VAR_17.hToken, VAR_0);
    }
    else FUNC_4(L"kull_m_token_getTokensUnique/kull_m_token_getTokensUnique");
   }
   else FUNC_4(L"ConvertStringSidToSid");
  }

  if(FUNC_11(VAR_5, VAR_10, ((void*)0), ((void*)0), ((void*)0), &VAR_13, &VAR_14, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0)))
  {
   VAR_14++;
   if((VAR_16 = (wchar_t *) FUNC_2(VAR_3, (VAR_14 + 1) * sizeof(wchar_t))))
   {
    for(VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
    {
     VAR_15 = VAR_14;
     if(FUNC_9(VAR_5, VAR_10, VAR_12, VAR_16, &VAR_15, ((void*)0), ((void*)0), ((void*)0), ((void*)0)))
     {
      FUNC_5(L"\n   [%s] ", VAR_16);
      if(FUNC_10(VAR_5, VAR_10, VAR_16, 0, VAR_1, &VAR_11))
      {
       FUNC_5(L"\n");
       FUNC_6(VAR_5, VAR_11, VAR_8, VAR_9, VAR_17.hToken);
       FUNC_8(VAR_5, VAR_11);
      }
      else FUNC_4(L"kull_m_registry_RegOpenKeyEx");
     }
    }
    FUNC_3(VAR_16);
   }
  }
  else FUNC_4(L"kull_m_registry_RegQueryInfoKey");

  if(VAR_17.pSid)
   FUNC_3(VAR_17.pSid);
  if(VAR_18 && VAR_17.hToken)
   FUNC_0(VAR_17.hToken);
  FUNC_8(VAR_5, VAR_10);
 }
}
