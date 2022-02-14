
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Lines ;
typedef int Dwarf_Die ;
typedef int Dwarf_Addr ;


 int FUNC_0 (unsigned long,int *,size_t,int ,int *) ;
 int FUNC_1 (int *,size_t,int ,unsigned long*) ;
 scalar_t__ FUNC_2 (int *,int **,size_t*) ;
 scalar_t__ FUNC_3 (int *,int *) ;

void FUNC_4(Dwarf_Die *VAR_0, Dwarf_Die *VAR_1,
         Dwarf_Addr *VAR_2)
{
 size_t VAR_3 = 0;
 unsigned long VAR_4 = 0;
 Dwarf_Lines *VAR_5 = ((void*)0);
 Dwarf_Addr VAR_6;
 Dwarf_Addr VAR_7;

 if (FUNC_3(VAR_0, &VAR_7))
  return;

 if (FUNC_2(VAR_1, &VAR_5, &VAR_3))
  return;

 if (!FUNC_1(VAR_5, VAR_3, *VAR_2, &VAR_4))
  return;

 if (!FUNC_0(VAR_4, VAR_5, VAR_3,
           VAR_7, &VAR_6))
  return;

 *VAR_2 = VAR_6;
}
