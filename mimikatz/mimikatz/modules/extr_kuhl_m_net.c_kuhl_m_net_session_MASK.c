
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int sesi10_idle_time; int sesi10_time; int sesi10_username; int sesi10_cname; } ;
typedef int NTSTATUS ;
typedef scalar_t__ NET_API_STATUS ;
typedef TYPE_1__* LPSESSION_INFO_10 ;
typedef int LPBYTE ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int,int *,int ,size_t*,size_t*,size_t*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;

NTSTATUS FUNC_4(int VAR_3, wchar_t * VAR_4[])
{
 LPSESSION_INFO_10 VAR_5;
 DWORD VAR_6;
 DWORD VAR_7;
 DWORD VAR_8 = 0;
 DWORD VAR_9;
 NET_API_STATUS VAR_10;
 do
 {
  VAR_10 = FUNC_1(VAR_3 ? VAR_4[0] : ((void*)0), ((void*)0), ((void*)0), 10, (LPBYTE*) &VAR_5, VAR_1, &VAR_6, &VAR_7, &VAR_8);
  if((VAR_10 == 0) || (VAR_10 == VAR_0))
  {
   for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
    FUNC_3(L"\n"
     L"Client  : %s\n"
     L"Username: %s\n"
     L"Active  : %u\n"
     L"Idle    : %u\n",
     VAR_5[VAR_9].sesi10_cname, VAR_5[VAR_9].sesi10_username, VAR_5[VAR_9].sesi10_time, VAR_5[VAR_9].sesi10_idle_time);
   FUNC_0(VAR_5);
  }
  else FUNC_2(L"NetSessionEnum: %08x\n", VAR_10);
 }
 while (VAR_10 == VAR_0);
 return VAR_2;
}
