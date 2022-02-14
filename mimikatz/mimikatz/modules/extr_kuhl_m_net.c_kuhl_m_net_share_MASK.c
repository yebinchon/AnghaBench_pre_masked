
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int shi502_path; int shi502_max_uses; int shi502_current_uses; int shi502_type; int shi502_netname; } ;
typedef int NTSTATUS ;
typedef scalar_t__ NET_API_STATUS ;
typedef TYPE_1__* LPSHARE_INFO_502 ;
typedef int LPBYTE ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int,int *,int ,size_t*,size_t*,size_t*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,int ,...) ;
 int FUNC_4 (int ) ;

NTSTATUS FUNC_5(int VAR_3, wchar_t * VAR_4[])
{
 LPSHARE_INFO_502 VAR_5;
 DWORD VAR_6;
 DWORD VAR_7;
 DWORD VAR_8 = 0;
 DWORD VAR_9;
 NET_API_STATUS VAR_10;
 do
 {
  VAR_10 = FUNC_1 (VAR_3 ? VAR_4[0] : ((void*)0), 502, (LPBYTE*) &VAR_5, VAR_1, &VAR_6, &VAR_7, &VAR_8);
  if((VAR_10 == 0) || (VAR_10 == VAR_0))
  {
   for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
   {
    FUNC_3(L"\n"
     L"Netname : %s\n"
     L"Type    : %08x - ",
     VAR_5[VAR_9].shi502_netname, VAR_5[VAR_9].shi502_type);
    FUNC_4(VAR_5[VAR_9].shi502_type);
    FUNC_3(
     L"Uses    : %u/%u\n"
     L"Path    : %s\n",
     VAR_5[VAR_9].shi502_current_uses, VAR_5[VAR_9].shi502_max_uses, VAR_5[VAR_9].shi502_path);
   }
   FUNC_0(VAR_5);
  }
  else FUNC_2(L"NetShareEnum: %08x\n", VAR_10);
 }
 while (VAR_10 == VAR_0);
 return VAR_2;
}
