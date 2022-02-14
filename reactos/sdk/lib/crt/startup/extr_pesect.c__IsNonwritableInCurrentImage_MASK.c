
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINBOOL ;
struct TYPE_3__ {int Characteristics; } ;
typedef TYPE_1__* PIMAGE_SECTION_HEADER ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ DWORD_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;

WINBOOL
FUNC_2 (PBYTE VAR_3)
{
  PBYTE VAR_4;
  DWORD_PTR VAR_5;
  PIMAGE_SECTION_HEADER VAR_6;

  VAR_4 = (PBYTE) &VAR_2;
  if (! FUNC_1 (VAR_4))
    return VAR_0;
  VAR_5 = VAR_3 - VAR_4;
  VAR_6 = FUNC_0 (VAR_4, VAR_5);
  if (VAR_6 == ((void*)0))
    return VAR_0;
  return (VAR_6->Characteristics & VAR_1) == 0;
}
