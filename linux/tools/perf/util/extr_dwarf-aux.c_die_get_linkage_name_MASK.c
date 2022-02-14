
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Die ;
typedef int Dwarf_Attribute ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int *) ;
 char const* FUNC_1 (int *) ;

const char *FUNC_2(Dwarf_Die *VAR_1)
{
 Dwarf_Attribute VAR_2;

 if (FUNC_0(VAR_1, VAR_0, &VAR_2) == ((void*)0))
  return ((void*)0);
 return FUNC_1(&VAR_2);
}
