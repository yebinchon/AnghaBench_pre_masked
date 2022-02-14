
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ e_lfanew; } ;
struct TYPE_9__ {scalar_t__ TimeDateStamp; scalar_t__ Name; } ;
struct TYPE_7__ {TYPE_1__* DataDirectory; } ;
struct TYPE_8__ {TYPE_2__ OptionalHeader; } ;
struct TYPE_6__ {scalar_t__ VirtualAddress; } ;
typedef int PIMAGE_SECTION_HEADER ;
typedef TYPE_3__* PIMAGE_NT_HEADERS ;
typedef TYPE_4__* PIMAGE_IMPORT_DESCRIPTOR ;
typedef TYPE_5__* PIMAGE_DOS_HEADER ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ DWORD ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;

const char *
FUNC_2 (int VAR_2)
{
  PBYTE VAR_3;
  PIMAGE_NT_HEADERS VAR_4;
  PIMAGE_IMPORT_DESCRIPTOR VAR_5;
  PIMAGE_SECTION_HEADER VAR_6;
  DWORD VAR_7;

  VAR_3 = (PBYTE) &VAR_1;
  if (! FUNC_1 (VAR_3))
    return ((void*)0);

  VAR_4 = (PIMAGE_NT_HEADERS) (VAR_3 + ((PIMAGE_DOS_HEADER) VAR_3)->e_lfanew);

  VAR_7 = VAR_4->OptionalHeader.DataDirectory[VAR_0].VirtualAddress;
  if (!VAR_7)
    return ((void*)0);

  VAR_6 = FUNC_0 (VAR_3, VAR_7);
  if (!VAR_6)
      return ((void*)0);

  VAR_5 = (PIMAGE_IMPORT_DESCRIPTOR) (VAR_3 + VAR_7);
  if (!VAR_5)
    return ((void*)0);

  for (;;)
    {
      if (VAR_5->TimeDateStamp == 0 && VAR_5->Name == 0)
        break;

      if (VAR_2 <= 0)
       return (char *) (VAR_3 + VAR_5->Name);
      --VAR_2;
      VAR_5++;
    }

  return ((void*)0);
}
