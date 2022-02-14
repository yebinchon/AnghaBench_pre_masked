
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINBOOL ;
struct TYPE_6__ {scalar_t__ e_magic; scalar_t__ e_lfanew; } ;
struct TYPE_5__ {scalar_t__ Signature; int OptionalHeader; } ;
struct TYPE_4__ {scalar_t__ Magic; } ;
typedef TYPE_1__* PIMAGE_OPTIONAL_HEADER ;
typedef TYPE_2__* PIMAGE_NT_HEADERS ;
typedef TYPE_3__* PIMAGE_DOS_HEADER ;
typedef scalar_t__ PBYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

WINBOOL
FUNC_0 (PBYTE VAR_5)
{
  PIMAGE_DOS_HEADER VAR_6;
  PIMAGE_NT_HEADERS VAR_7;
  PIMAGE_OPTIONAL_HEADER VAR_8;

  VAR_6 = (PIMAGE_DOS_HEADER) VAR_5;
  if (VAR_6->e_magic != VAR_1)
    return VAR_0;
  VAR_7 = (PIMAGE_NT_HEADERS) ((PBYTE) VAR_6 + VAR_6->e_lfanew);
  if (VAR_7->Signature != VAR_3)
    return VAR_0;
  VAR_8 = (PIMAGE_OPTIONAL_HEADER) &VAR_7->OptionalHeader;
  if (VAR_8->Magic != VAR_2)
    return VAR_0;
  return VAR_4;
}
