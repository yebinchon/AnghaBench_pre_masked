
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int NumberOfSections; } ;
struct TYPE_10__ {TYPE_2__ FileHeader; } ;
struct TYPE_7__ {int VirtualSize; } ;
struct TYPE_9__ {int PointerToRawData; int VirtualAddress; TYPE_1__ Misc; } ;
typedef TYPE_3__* PIMAGE_SECTION_HEADER ;
typedef scalar_t__ DWORD ;


 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* VAR_1 ;

void *FUNC_2(DWORD VAR_2)
{
   PIMAGE_SECTION_HEADER VAR_3;
   unsigned int VAR_4;

   for (VAR_4 = 0, VAR_3 = FUNC_0(VAR_1);
        VAR_4 < FUNC_1(VAR_1->FileHeader.NumberOfSections);
        VAR_4++, VAR_3++)
   {
      if (VAR_2 >= FUNC_1(VAR_3->VirtualAddress) &&
          VAR_2 < FUNC_1(VAR_3->VirtualAddress) +
                FUNC_1(VAR_3->Misc.VirtualSize))
      {
         return VAR_0 + VAR_2 - FUNC_1(VAR_3->VirtualAddress) +
                FUNC_1(VAR_3->PointerToRawData);
      }
   }

   return ((void*)0);
}
