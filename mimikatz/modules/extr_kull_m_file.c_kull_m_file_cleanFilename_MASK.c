
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PWCHAR ;
typedef size_t DWORD ;


 size_t FUNC_0 (int*) ;
 int* VAR_0 ;

void FUNC_1(PWCHAR VAR_1)
{
 DWORD VAR_2, VAR_3;
 for(VAR_2 = 0; VAR_1[VAR_2]; VAR_2++)
  for(VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
   if(VAR_1[VAR_2] == VAR_0[VAR_3])
    VAR_1[VAR_2] = L'~';
}
