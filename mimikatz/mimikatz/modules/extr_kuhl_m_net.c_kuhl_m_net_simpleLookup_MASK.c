
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UNICODE_STRING ;
typedef int SID_NAME_USE ;
typedef int SAMPR_HANDLE ;
typedef int NTSTATUS ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ,int,scalar_t__*,scalar_t__**,scalar_t__**) ;
 int FUNC_4 (char*,scalar_t__*,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(SAMPR_HANDLE VAR_0, DWORD VAR_1)
{
 NTSTATUS VAR_2;
 UNICODE_STRING *VAR_3;
 DWORD *VAR_4;

 VAR_2 = FUNC_3(VAR_0, 1, &VAR_1, &VAR_3, &VAR_4);
 if(FUNC_0(VAR_2))
 {
  FUNC_4(L"%wZ\t(%s)", VAR_3, FUNC_5((SID_NAME_USE) *VAR_4));
  FUNC_2(VAR_3);
  FUNC_2(VAR_4);
 }
 else FUNC_1(L"SamLookupIdsInDomain %08x", VAR_2);
}
