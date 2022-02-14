
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {scalar_t__ wkui1_oth_domains; int wkui1_logon_server; int wkui1_logon_domain; int wkui1_username; } ;
typedef int NTSTATUS ;
typedef scalar_t__ NET_API_STATUS ;
typedef TYPE_1__* LPWKSTA_USER_INFO_1 ;
typedef int LPBYTE ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int,int *,int ,size_t*,size_t*,size_t*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

NTSTATUS FUNC_5(int VAR_3, wchar_t * VAR_4[])
{
 LPWKSTA_USER_INFO_1 VAR_5;
 DWORD VAR_6;
 DWORD VAR_7;
 DWORD VAR_8 = 0;
 DWORD VAR_9;
 NET_API_STATUS VAR_10;
 do
 {
  VAR_10 = FUNC_1 (VAR_3 ? VAR_4[0] : ((void*)0), 1, (LPBYTE*) &VAR_5, VAR_1, &VAR_6, &VAR_7, &VAR_8);
  if((VAR_10 == 0) || (VAR_10 == VAR_0))
  {
   for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
   {
    FUNC_3(L"\n"
     L"Username   : %s\n"
     L"Domain     : %s\n"
     L"LogonServer: %s\n",
     VAR_5[VAR_9].wkui1_username, VAR_5[VAR_9].wkui1_logon_domain, VAR_5[VAR_9].wkui1_logon_server);
    if(VAR_5[VAR_9].wkui1_oth_domains && FUNC_4(VAR_5[VAR_9].wkui1_oth_domains))
     FUNC_3(L"OthDomains : %s\n", VAR_5[VAR_9].wkui1_oth_domains);
   }
   FUNC_0(VAR_5);
  }
  else FUNC_2(L"NetWkstaUserEnum: %08x\n", VAR_10);
 }
 while (VAR_10 == VAR_0);
 return VAR_2;
}
