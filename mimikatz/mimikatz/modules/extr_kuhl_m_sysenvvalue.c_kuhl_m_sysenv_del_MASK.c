
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UNICODE_STRING ;
typedef int NTSTATUS ;
typedef int LPCWSTR ;
typedef int GUID ;
typedef int DWORD ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int **,char*,int *,char*) ;
 int FUNC_9 (int ,int *,int ) ;

NTSTATUS FUNC_10(int VAR_3, wchar_t * VAR_4[])
{
 NTSTATUS VAR_5;
 LPCWSTR VAR_6, VAR_7, VAR_8;
 UNICODE_STRING VAR_9, VAR_10;
 GUID VAR_11;
 DWORD VAR_12;

 FUNC_8(VAR_3, VAR_4, L"name", &VAR_6, VAR_0);
 FUNC_8(VAR_3, VAR_4, L"guid", &VAR_7, L"{b16b00b5-cafe-babe-0ee0-dabadabad000}");
 FUNC_8(VAR_3, VAR_4, L"attributes", &VAR_8, L"1");

 FUNC_4(&VAR_9, VAR_6);
 FUNC_4(&VAR_10, VAR_7);
 VAR_12 = FUNC_9(VAR_8, ((void*)0), 0);

 VAR_5 = FUNC_3(&VAR_10, &VAR_11);
 if(FUNC_0(VAR_5))
 {
  FUNC_5(L"Name       : %wZ\nVendor GUID: ", &VAR_9);
  FUNC_7(&VAR_11);
  FUNC_5(L"\nAttributes : %08x (", VAR_12);
  FUNC_6(VAR_12);
  FUNC_5(L")\n");

  VAR_5 = FUNC_1(&VAR_9, &VAR_11, ((void*)0), 0, VAR_12);
  if(FUNC_0(VAR_5))
   FUNC_5(L"> OK!\n");
  else if(VAR_5 == VAR_2)
   FUNC_2(L"System Environment Variable not found.\n");
  else FUNC_2(L"NtSetSystemEnvironmentValueEx(data): 0x%08x\n", VAR_5);
 }
 else FUNC_2(L"RtlGUIDFromString: 0x%08x\n", VAR_5);
 return VAR_1;
}
