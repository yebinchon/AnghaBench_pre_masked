
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UNICODE_STRING ;
typedef int * PVOID ;
typedef scalar_t__ NTSTATUS ;
typedef int LPCWSTR ;
typedef int GUID ;
typedef int DWORD ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,int *) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int **,char*,int *,char*) ;
 int FUNC_11 (int *,int ,int) ;

NTSTATUS FUNC_12(int VAR_4, wchar_t * VAR_5[])
{
 NTSTATUS VAR_6;
 LPCWSTR VAR_7, VAR_8;
 UNICODE_STRING VAR_9, VAR_10;
 GUID VAR_11;
 DWORD VAR_12 = 0, VAR_13;
 PVOID VAR_14;

 FUNC_10(VAR_4, VAR_5, L"name", &VAR_7, L"Kernel_Lsa_Ppl_Config");
 FUNC_10(VAR_4, VAR_5, L"guid", &VAR_8, L"{77fa9abd-0359-4d32-bd60-28f4e78f784b}");
 FUNC_6(&VAR_9, VAR_7);
 FUNC_6(&VAR_10, VAR_8);

 VAR_6 = FUNC_5(&VAR_10, &VAR_11);
 if(FUNC_2(VAR_6))
 {
  FUNC_7(L"Name       : %wZ\nVendor GUID: ", &VAR_9);
  FUNC_9(&VAR_11);
  FUNC_7(L"\n");
  VAR_6 = FUNC_3(&VAR_9, &VAR_11, ((void*)0), &VAR_12, &VAR_13);
  if((VAR_6 == VAR_1) && VAR_12)
  {
   if((VAR_14 = FUNC_0(VAR_0, VAR_12)))
   {
    VAR_6 = FUNC_3(&VAR_9, &VAR_11, VAR_14, &VAR_12, &VAR_13);
    if(FUNC_2(VAR_6))
    {
     FUNC_7(L"Attributes : %08x (", VAR_13);
     FUNC_8(VAR_13);
     FUNC_7(L")\nLength     : %u\nData       : ", VAR_12);
     FUNC_11(VAR_14, VAR_12, 1);
     FUNC_7(L"\n");
    }
    else FUNC_4(L"NtQuerySystemEnvironmentValueEx(data): 0x%08x\n", VAR_6);
    FUNC_1(VAR_14);
   }
  }
  else if(VAR_6 == VAR_3)
   FUNC_4(L"System Environment Variable not found.\n");
  else FUNC_4(L"NtQuerySystemEnvironmentValueEx(size): 0x%08x\n", VAR_6);
 }
 else FUNC_4(L"RtlGUIDFromString: 0x%08x\n", VAR_6);
 return VAR_2;
}
