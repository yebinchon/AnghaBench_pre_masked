
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ e_lfanew; } ;
struct TYPE_4__ {scalar_t__ NumberOfSections; } ;
struct TYPE_5__ {TYPE_1__ FileHeader; } ;
typedef TYPE_2__* PIMAGE_NT_HEADERS ;
typedef TYPE_3__* PIMAGE_DOS_HEADER ;
typedef scalar_t__ PBYTE ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;

int
FUNC_1 (void)
{
  PBYTE VAR_1;
  PIMAGE_NT_HEADERS VAR_2;

  VAR_1 = (PBYTE) &VAR_0;
  if (! FUNC_0 (VAR_1))
    return 0;

  VAR_2 = (PIMAGE_NT_HEADERS) (VAR_1 + ((PIMAGE_DOS_HEADER) VAR_1)->e_lfanew);

  return (int) VAR_2->FileHeader.NumberOfSections;
}
