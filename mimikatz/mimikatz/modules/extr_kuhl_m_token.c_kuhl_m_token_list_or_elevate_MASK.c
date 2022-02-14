
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef scalar_t__ WELL_KNOWN_SID_TYPE ;
struct TYPE_7__ {char* pCommandLine; char* pUsername; int pSid; scalar_t__ tokenId; int * member_5; scalar_t__ member_4; scalar_t__ member_3; int member_2; int * member_1; int * member_0; } ;
struct TYPE_6__ {int * Sid; } ;
typedef int PWSTR ;
typedef TYPE_1__* PPOLICY_DNS_DOMAIN_INFO ;
typedef char* PCWSTR ;
typedef int NTSTATUS ;
typedef TYPE_2__ KUHL_M_TOKEN_ELEVATE_DATA ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*,...) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,int *,int *) ;
 int FUNC_6 (TYPE_1__**) ;
 scalar_t__ FUNC_7 (int,int **,char*,char**,char*) ;
 scalar_t__ FUNC_8 (int ,int *,int *,int *,int *) ;
 int FUNC_9 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_10 (char*,int *,int ) ;

NTSTATUS FUNC_11(int VAR_7, wchar_t * VAR_8[], BOOL VAR_9, BOOL VAR_10)
{
 KUHL_M_TOKEN_ELEVATE_DATA VAR_11 = {((void*)0), ((void*)0), 0, VAR_9, VAR_10, ((void*)0)};
 WELL_KNOWN_SID_TYPE VAR_12 = VAR_5;
 PWSTR VAR_13, VAR_14;
 PCWSTR VAR_15;
 PPOLICY_DNS_DOMAIN_INFO VAR_16 = ((void*)0);

 if(VAR_10)
  FUNC_7(VAR_7, VAR_8, L"process", &VAR_11.pCommandLine, L"whoami.exe");
 FUNC_7(VAR_7, VAR_8, L"user", &VAR_11.pUsername, ((void*)0));

 if(FUNC_7(VAR_7, VAR_8, L"id", &VAR_15, ((void*)0)))
 {
  VAR_11.tokenId = FUNC_10(VAR_15, ((void*)0), 0);
 }
 else if(FUNC_7(VAR_7, VAR_8, L"domainadmin", ((void*)0), ((void*)0)))
  VAR_12 = VAR_1;
 else if(FUNC_7(VAR_7, VAR_8, L"enterpriseadmin", ((void*)0), ((void*)0)))
  VAR_12 = VAR_2;
 else if(FUNC_7(VAR_7, VAR_8, L"admin", ((void*)0), ((void*)0)))
  VAR_12 = VAR_3;
 else if((VAR_9 && !VAR_11.pUsername) || FUNC_7(VAR_7, VAR_8, L"system", ((void*)0), ((void*)0)))
 {
  VAR_12 = VAR_4;
  if(VAR_11.pUsername)
  {
   FUNC_2(L"No username available when SYSTEM\n");
   VAR_11.pUsername = ((void*)0);
  }
 }

 if((VAR_12 == VAR_1) || (VAR_12 == VAR_2))
  if(!FUNC_6(&VAR_16))
   FUNC_3(L"kull_m_local_domain_user_getCurrentDomainSID");

 if(!VAR_9 || !VAR_10 || VAR_11.tokenId || VAR_12 || VAR_11.pUsername)
 {
  FUNC_4(L"Token Id  : %u\nUser name : %s\nSID name  : ", VAR_11.tokenId, VAR_11.pUsername ? VAR_11.pUsername : L"");
  if(VAR_12)
  {
   if(FUNC_5(VAR_12, VAR_16 ? VAR_16->Sid : ((void*)0), &VAR_11.pSid))
   {
    if(FUNC_8(VAR_11.pSid, &VAR_13, &VAR_14, ((void*)0), ((void*)0)))
    {
     FUNC_4(L"%s\\%s\n", VAR_14, VAR_13);
     FUNC_0(VAR_13);
     FUNC_0(VAR_14);
    }
    else FUNC_3(L"kull_m_token_getNameDomainFromSID");
   }
   else FUNC_3(L"kull_m_local_domain_user_CreateWellKnownSid");
  }
  else FUNC_4(L"\n");
  FUNC_4(L"\n");

  if(!VAR_9 || !VAR_10 || VAR_11.tokenId || VAR_11.pSid || VAR_11.pUsername)
   FUNC_9(VAR_6, &VAR_11);


  if(VAR_11.pSid)
   FUNC_0(VAR_11.pSid);
  if(VAR_16)
   FUNC_1(VAR_16);
 }
 return VAR_0;
}
