
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int sv102_type; int sv102_comment; int sv102_version_minor; int sv102_version_major; int sv102_name; int sv102_platform_id; } ;
typedef int NTSTATUS ;
typedef scalar_t__ NET_API_STATUS ;
typedef TYPE_1__* LPSERVER_INFO_102 ;
typedef int LPBYTE ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int,int *) ;
 int FUNC_3 (char*,scalar_t__) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (char*,...) ;

NTSTATUS FUNC_5(int VAR_3, wchar_t * VAR_4[])
{
 LPSERVER_INFO_102 VAR_5;
 NET_API_STATUS VAR_6;
 DWORD VAR_7;
 VAR_6 = FUNC_2(VAR_3 ? VAR_4[0] : ((void*)0), 102, (LPBYTE*) &VAR_5);
 if(VAR_6 == VAR_0)
 {
  FUNC_4(L"platform_id: %u\n"
    L"name       : %s\n"
    L"version    : %u.%u\n"
    L"comment    : %s\n"
    L"type       : %08x - ",
  VAR_5->sv102_platform_id, VAR_5->sv102_name, VAR_5->sv102_version_major, VAR_5->sv102_version_minor, VAR_5->sv102_comment, VAR_5->sv102_type);

  for(VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++)
   if((1 << VAR_7) & VAR_5->sv102_type)
    FUNC_4(L"%s ; ", VAR_2[VAR_7]);
  FUNC_4(L"\n");
  FUNC_1(VAR_5);
 }
 else FUNC_3(L"NetServerGetInfo: %08x\n", VAR_6);
 return VAR_1;
}
