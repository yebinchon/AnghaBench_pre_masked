
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_9__ {int off1; int off0; } ;
struct TYPE_8__ {int Length; int Pattern; } ;
struct TYPE_10__ {TYPE_2__ Offsets; TYPE_1__ Search; int end; int start; } ;
typedef int SIZE_T ;
typedef int * PULONG ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_2__* PKKLL_M_MEMORY_OFFSETS ;
typedef TYPE_3__* PKKLL_M_MEMORY_GENERIC ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__*,scalar_t__,scalar_t__,int ,int ,int ) ;
 TYPE_3__* FUNC_4 (TYPE_3__*,int ) ;

NTSTATUS FUNC_5(PKKLL_M_MEMORY_GENERIC VAR_1, SIZE_T VAR_2, PUCHAR * VAR_3, PULONG VAR_4, PKKLL_M_MEMORY_OFFSETS * VAR_5)
{
 NTSTATUS VAR_6 = VAR_0;
 PKKLL_M_MEMORY_GENERIC VAR_7;
 UNICODE_STRING VAR_8, VAR_9;
 PUCHAR VAR_10, VAR_11;

 if((VAR_7 = FUNC_4(VAR_1, VAR_2)))
 {
  FUNC_2(&VAR_8, VAR_7->start);
  FUNC_2(&VAR_9, VAR_7->end);
  VAR_10 = (PUCHAR) FUNC_0(&VAR_8);
  VAR_11 = (PUCHAR) FUNC_0(&VAR_9);

  if(VAR_10 && VAR_11)
  {
   VAR_6 = FUNC_3(VAR_3, VAR_10, VAR_11, VAR_7->Search.Pattern, VAR_7->Search.Length, VAR_7->Offsets.off0);
   if(FUNC_1(VAR_6))
   {
    if(VAR_4)
     *VAR_4 = VAR_7->Offsets.off1;
    if(VAR_5)
     *VAR_5 = &VAR_7->Offsets;
   }
  }
 }
 return VAR_6;
}
