
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UNICODE_STRING ;
typedef int NTSTATUS ;
typedef int LPCWSTR ;
typedef int LPBYTE ;
typedef int GUID ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int **,char*,int *,char*) ;
 scalar_t__ FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int *,int ) ;

NTSTATUS FUNC_13(int VAR_2, wchar_t * VAR_3[])
{
 NTSTATUS VAR_4;
 LPCWSTR VAR_5, VAR_6, VAR_7, VAR_8;
 UNICODE_STRING VAR_9, VAR_10;
 GUID VAR_11;
 LPBYTE VAR_12;
 DWORD VAR_13, VAR_14;

 FUNC_9(VAR_2, VAR_3, L"name", &VAR_5, VAR_0);
 FUNC_9(VAR_2, VAR_3, L"guid", &VAR_6, L"{b16b00b5-cafe-babe-0ee0-dabadabad000}");
 FUNC_9(VAR_2, VAR_3, L"attributes", &VAR_7, L"1");
 FUNC_9(VAR_2, VAR_3, L"data", &VAR_8, L"410020004c00610020005600690065002c002000410020004c00270041006d006f00750072000000");

 FUNC_5(&VAR_9, VAR_5);
 FUNC_5(&VAR_10, VAR_6);
 VAR_14 = FUNC_12(VAR_7, ((void*)0), 0);

 VAR_4 = FUNC_4(&VAR_10, &VAR_11);
 if(FUNC_1(VAR_4))
 {
  FUNC_6(L"Name       : %wZ\nVendor GUID: ", &VAR_9);
  FUNC_8(&VAR_11);
  FUNC_6(L"\nAttributes : %08x (", VAR_14);
  FUNC_7(VAR_14);
  FUNC_6(L")\n");
  if(FUNC_10(VAR_8, &VAR_12, &VAR_13))
  {
   FUNC_6(L"Length     : %u\nData       : ", VAR_13);
   FUNC_11(VAR_12, VAR_13, 1);
   FUNC_6(L"\n\n");
   VAR_4 = FUNC_2(&VAR_9, &VAR_11, VAR_12, VAR_13, VAR_14);
   if(FUNC_1(VAR_4))
    FUNC_6(L"> OK!\n");
   else FUNC_3(L"NtSetSystemEnvironmentValueEx(data): 0x%08x\n", VAR_4);
   FUNC_0(VAR_12);
  }
 }
 else FUNC_3(L"RtlGUIDFromString: 0x%08x\n", VAR_4);
 return VAR_1;
}
