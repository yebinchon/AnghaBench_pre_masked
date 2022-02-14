
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {scalar_t__ ValueLength; scalar_t__ ValueOffset; int Attributes; int VendorGuid; int Name; scalar_t__ NextEntryOffset; } ;
typedef TYPE_1__* PVARIABLE_NAME_AND_VALUE ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ NTSTATUS ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,scalar_t__*) ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;

NTSTATUS FUNC_9(int VAR_4, wchar_t * VAR_5[])
{
 NTSTATUS VAR_6;
 PVARIABLE_NAME_AND_VALUE VAR_7;
 DWORD VAR_8 = 0;

 VAR_6 = FUNC_3(VAR_3, ((void*)0), &VAR_8);
 if((VAR_6 == VAR_1) && VAR_8)
 {
  if((VAR_7 = (PVARIABLE_NAME_AND_VALUE) FUNC_0(VAR_0, VAR_8)))
  {
   VAR_6 = FUNC_3(VAR_3, VAR_7, &VAR_8);
   if(FUNC_2(VAR_6))
   {
    for(; VAR_7; VAR_7 = VAR_7->NextEntryOffset ? (PVARIABLE_NAME_AND_VALUE) ((PBYTE) VAR_7 + VAR_7->NextEntryOffset) : ((void*)0))
    {
     FUNC_5(L"Name       : %s\nVendor GUID: ", VAR_7->Name);
     FUNC_7(&VAR_7->VendorGuid);
     FUNC_5(L"\nAttributes : %08x (", VAR_7->Attributes);
     FUNC_6(VAR_7->Attributes);
     FUNC_5(L")\nLength     : %u\nData       : ", VAR_7->ValueLength);
     if(VAR_7->ValueLength && VAR_7->ValueOffset)
      FUNC_8((PBYTE) VAR_7 + VAR_7->ValueOffset, VAR_7->ValueLength, 1);
     FUNC_5(L"\n\n");
    }
   }
   else FUNC_4(L"NtEnumerateSystemEnvironmentValuesEx(data): 0x%08x\n", VAR_6);
   FUNC_1(VAR_7);
  }
 }
 else FUNC_4(L"NtEnumerateSystemEnvironmentValuesEx(size): 0x%08x\n", VAR_6);
 return VAR_2;
}
