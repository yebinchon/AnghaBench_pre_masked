
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Die ;
typedef int Dwarf_Attribute ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

Dwarf_Die *FUNC_2(Dwarf_Die *VAR_1, Dwarf_Die *VAR_2)
{
 Dwarf_Attribute VAR_3;

 if (FUNC_0(VAR_1, VAR_0, &VAR_3) &&
     FUNC_1(&VAR_3, VAR_2))
  return VAR_2;
 else
  return ((void*)0);
}
