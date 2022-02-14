
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t USHORT ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_2__ {size_t TableSize; int* OffsetToService; scalar_t__* ServiceTable; } ;
typedef int PVOID ;
typedef int PKIWI_BUFFER ;
typedef int NTSTATUS ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;

NTSTATUS FUNC_4(PKIWI_BUFFER VAR_4)
{
 NTSTATUS VAR_5;
 USHORT VAR_6;
 ULONG_PTR VAR_7;






  VAR_5 = FUNC_3(VAR_4, L"KeServiceDescriptorTable : 0x%p (%u)\n", VAR_1, VAR_1->TableSize);
  for(VAR_6 = 0; (VAR_6 < VAR_1->TableSize) && FUNC_0(VAR_5) ; VAR_6++)
  {



   VAR_7 = (ULONG_PTR) VAR_1->OffsetToService;
   if(VAR_2 < VAR_3)
    VAR_7 += VAR_1->OffsetToService[VAR_6] & ~VAR_0;
   else
    VAR_7 += VAR_1->OffsetToService[VAR_6] >> 4;

   VAR_5 = FUNC_3(VAR_4, L"[%5u] ", VAR_6);
   if(FUNC_0(VAR_5))
    VAR_5 = FUNC_1(VAR_4, (PVOID) VAR_7);
  }



 return VAR_5;
}
