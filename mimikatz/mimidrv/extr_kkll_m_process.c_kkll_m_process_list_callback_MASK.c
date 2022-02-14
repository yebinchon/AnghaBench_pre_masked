
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_3__ {int Signer; int Audit; int Type; } ;
struct TYPE_4__ {TYPE_1__ Protection; int SectionSignatureLevel; int SignatureLevel; } ;
typedef int SIZE_T ;
typedef int PVOID ;
typedef int* PULONG ;
typedef TYPE_2__* PKIWI_PROCESS_SIGNATURE_PROTECTION ;
typedef int PKIWI_BUFFER ;
typedef scalar_t__ PEPROCESS ;
typedef int PCHAR ;
typedef int NTSTATUS ;
typedef int HANDLE ;


 scalar_t__** VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,...) ;

NTSTATUS FUNC_4(SIZE_T VAR_8, PVOID VAR_9, PKIWI_BUFFER VAR_10, PEPROCESS VAR_11, PVOID VAR_12)
{
 NTSTATUS VAR_13;
 PKIWI_PROCESS_SIGNATURE_PROTECTION VAR_14 = ((void*)0);
 PULONG VAR_15 = ((void*)0);

 HANDLE VAR_16 = FUNC_1(VAR_11);
 PCHAR VAR_17 = FUNC_2(VAR_11);

 VAR_13 = FUNC_3(VAR_10, L"%u\t%-14S", VAR_16, VAR_17);
 if(FUNC_0(VAR_13))
 {
  if(VAR_2 >= VAR_4)
  {
   VAR_15 = (PULONG) (((ULONG_PTR) VAR_11) + VAR_0[VAR_2][VAR_1]);
   VAR_13 = FUNC_3(VAR_10, L"\t%s", (*VAR_15 & VAR_7) ? L"F-Tok" : L"     ");
   if(FUNC_0(VAR_13))
   {
    if(VAR_2 >= VAR_3)
    {
     VAR_14 = (PKIWI_PROCESS_SIGNATURE_PROTECTION) (((ULONG_PTR) VAR_11) + VAR_0[VAR_2][VAR_6]);
     VAR_13 = FUNC_3(VAR_10, L"\tSig %02x/%02x", VAR_14->SignatureLevel, VAR_14->SectionSignatureLevel);
     if(FUNC_0(VAR_13) && (VAR_2 > VAR_3))
      VAR_13 = FUNC_3(VAR_10, L" [%1x-%1x-%1x]", VAR_14->Protection.Type, VAR_14->Protection.Audit, VAR_14->Protection.Signer);
    }
    else if(*VAR_15 & VAR_5)
    {
     VAR_13 = FUNC_3(VAR_10, L"\tP-Proc");
    }
   }
  }
  if(FUNC_0(VAR_13))
   FUNC_3(VAR_10, L"\n");
 }
 return VAR_13;
}
