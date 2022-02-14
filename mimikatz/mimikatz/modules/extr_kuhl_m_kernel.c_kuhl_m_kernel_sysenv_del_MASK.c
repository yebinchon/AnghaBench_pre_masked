
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UNICODE_STRING ;
struct TYPE_4__ {int Attributes; int * Name; scalar_t__ ValueOffset; scalar_t__ ValueLength; int VendorGuid; } ;
typedef TYPE_1__* PMIMIDRV_VARIABLE_NAME_AND_VALUE ;
typedef int NTSTATUS ;
typedef int * LPCWSTR ;
typedef int GUID ;
typedef int DWORD ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_4 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,TYPE_1__*,int) ;
 int FUNC_12 (int,int **,char*,int **,char*) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int ) ;

NTSTATUS FUNC_15(int VAR_5, wchar_t * VAR_6[])
{
 NTSTATUS VAR_7;
 LPCWSTR VAR_8, VAR_9, VAR_10;
 UNICODE_STRING VAR_11, VAR_12;
 GUID VAR_13;
 DWORD VAR_14, VAR_15, VAR_16;
 PMIMIDRV_VARIABLE_NAME_AND_VALUE VAR_17;

 FUNC_12(VAR_5, VAR_6, L"name", &VAR_8, L"Kernel_Lsa_Ppl_Config");
 FUNC_12(VAR_5, VAR_6, L"guid", &VAR_9, L"{77fa9abd-0359-4d32-bd60-28f4e78f784b}");
 FUNC_12(VAR_5, VAR_6, L"attributes", &VAR_10, L"1");

 FUNC_7(&VAR_11, VAR_8);
 FUNC_7(&VAR_12, VAR_9);
 VAR_14 = FUNC_14(VAR_10, ((void*)0), 0);

 VAR_7 = FUNC_6(&VAR_12, &VAR_13);
 if(FUNC_3(VAR_7))
 {
  FUNC_8(L"Name       : %wZ\nVendor GUID: ", &VAR_11);
  FUNC_10(&VAR_13);
  FUNC_8(L"\nAttributes : %08x (", VAR_14);
  FUNC_9(VAR_14);
  FUNC_8(L")\n\n");

  VAR_15 = ((DWORD) FUNC_13(VAR_8) + 1) * sizeof(wchar_t);
  VAR_16 = FUNC_0(VAR_2, VAR_3) + VAR_15;
  if((VAR_17 = (PMIMIDRV_VARIABLE_NAME_AND_VALUE) FUNC_1(VAR_1, VAR_16)))
  {
   VAR_17->Attributes = VAR_14;
   FUNC_5(&VAR_17->VendorGuid, &VAR_13, sizeof(GUID));
   VAR_17->ValueLength = 0;
   VAR_17->ValueOffset = 0;
   FUNC_5(VAR_17->Name, VAR_8, VAR_15);
   if(FUNC_11(VAR_0, VAR_17, VAR_16))
    FUNC_8(L"> OK!\n");
   FUNC_2(VAR_17);
  }
 }
 else FUNC_4(L"RtlGUIDFromString: 0x%08x\n", VAR_7);
 return VAR_4;
}
