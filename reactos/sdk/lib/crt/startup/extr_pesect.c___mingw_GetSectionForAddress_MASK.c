
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PIMAGE_SECTION_HEADER ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ LPVOID ;
typedef scalar_t__ DWORD_PTR ;


 int * FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;

PIMAGE_SECTION_HEADER
FUNC_2 (LPVOID VAR_1)
{
  PBYTE VAR_2;
  DWORD_PTR VAR_3;

  VAR_2 = (PBYTE) &VAR_0;
  if (! FUNC_1 (VAR_2))
    return ((void*)0);

  VAR_3 = (DWORD_PTR) (((PBYTE) VAR_1) - VAR_2);
  return FUNC_0 (VAR_2, VAR_3);
}
