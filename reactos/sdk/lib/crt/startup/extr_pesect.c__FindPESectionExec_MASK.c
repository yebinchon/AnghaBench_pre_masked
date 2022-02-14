
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ e_lfanew; } ;
struct TYPE_8__ {unsigned int NumberOfSections; } ;
struct TYPE_10__ {TYPE_1__ FileHeader; } ;
struct TYPE_9__ {int Characteristics; } ;
typedef TYPE_2__* PIMAGE_SECTION_HEADER ;
typedef TYPE_3__* PIMAGE_NT_HEADERS ;
typedef TYPE_4__* PIMAGE_DOS_HEADER ;
typedef scalar_t__ PBYTE ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;

PIMAGE_SECTION_HEADER
FUNC_2 (size_t VAR_2)
{
  PBYTE VAR_3;
  PIMAGE_NT_HEADERS VAR_4;
  PIMAGE_SECTION_HEADER VAR_5;
  unsigned int VAR_6;

  VAR_3 = (PBYTE) &VAR_1;
  if (! FUNC_1 (VAR_3))
    return ((void*)0);

  VAR_4 = (PIMAGE_NT_HEADERS) (VAR_3 + ((PIMAGE_DOS_HEADER) VAR_3)->e_lfanew);

  for (VAR_6 = 0, VAR_5 = FUNC_0 (VAR_4);
    VAR_6 < VAR_4->FileHeader.NumberOfSections;
    ++VAR_6,++VAR_5)
    {
      if ((VAR_5->Characteristics & VAR_0) != 0)
      {
 if (!VAR_2)
   return VAR_5;
 --VAR_2;
      }
    }
  return ((void*)0);
}
