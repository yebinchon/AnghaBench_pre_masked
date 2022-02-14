
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_6__ {int Protection; int SectionSignatureLevel; scalar_t__ SignatureLevel; } ;
struct TYPE_4__ {int Protection; int SectionSignatureLevel; scalar_t__ SignatureLevel; } ;
struct TYPE_5__ {TYPE_1__ SignatureProtection; scalar_t__ processId; } ;
typedef int SIZE_T ;
typedef int PVOID ;
typedef int * PULONG ;
typedef TYPE_2__* PMIMIDRV_PROCESS_PROTECT_INFORMATION ;
typedef TYPE_3__* PKIWI_PROCESS_SIGNATURE_PROTECTION ;
typedef int PKIWI_BUFFER ;
typedef int * PEPROCESS ;
typedef int NTSTATUS ;
typedef int MIMIDRV_PROCESS_PROTECT_INFORMATION ;
typedef int HANDLE ;


 scalar_t__** VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (int ,int **) ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;

NTSTATUS FUNC_3(SIZE_T VAR_9, PVOID VAR_10, PKIWI_BUFFER VAR_11)
{
 NTSTATUS VAR_12;
 PEPROCESS VAR_13 = ((void*)0);
 PKIWI_PROCESS_SIGNATURE_PROTECTION VAR_14 = ((void*)0);
 PULONG VAR_15 = ((void*)0);
 PMIMIDRV_PROCESS_PROTECT_INFORMATION VAR_16 = (PMIMIDRV_PROCESS_PROTECT_INFORMATION) VAR_10;

 if(VAR_2 >= VAR_4)
 {
  if(VAR_16 && (VAR_9 == sizeof(MIMIDRV_PROCESS_PROTECT_INFORMATION)))
  {
   VAR_12 = FUNC_2((HANDLE) VAR_16->processId, &VAR_13);
   if(FUNC_0(VAR_12))
   {
    if(VAR_2 < VAR_3)
    {
     VAR_15 = (PULONG) (((ULONG_PTR) VAR_13) + VAR_0[VAR_2][VAR_1]);
     if(VAR_16->SignatureProtection.SignatureLevel)
      *VAR_15 |= VAR_5;
     else
      *VAR_15 &= ~VAR_5;
    }
    else
    {
     VAR_14 = (PKIWI_PROCESS_SIGNATURE_PROTECTION) (((ULONG_PTR) VAR_13) + VAR_0[VAR_2][VAR_8]);
     VAR_14->SignatureLevel = VAR_16->SignatureProtection.SignatureLevel;
     VAR_14->SectionSignatureLevel = VAR_16->SignatureProtection.SectionSignatureLevel;
     if(VAR_2 > VAR_3)
      VAR_14->Protection = VAR_16->SignatureProtection.Protection;
    }
    FUNC_1(VAR_13);
   }
  }
  else VAR_12 = VAR_6;
 }
 else VAR_12 = VAR_7;

 return VAR_12;
}
