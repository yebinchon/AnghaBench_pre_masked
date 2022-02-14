
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;
typedef int * PVOID ;
typedef scalar_t__ DWORD64 ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,size_t) ;

void FUNC_2(PVOID VAR_1, DWORD64 VAR_2)
{
 PVOID VAR_3 = ((void*)0);
 if(VAR_2)
  if((VAR_3 = FUNC_0(VAR_0, (SIZE_T) VAR_2)))
   FUNC_1(VAR_3, *(PVOID *) VAR_1, (size_t) VAR_2);
 *(PVOID *) VAR_1 = VAR_3;
}
