
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Sword ;
typedef int Dwarf_Die ;
typedef int Dwarf_Attribute ;


 int VAR_0 ;
 int * FUNC_0 (int *,unsigned int,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(Dwarf_Die *VAR_1, unsigned int VAR_2,
         Dwarf_Sword *VAR_3)
{
 Dwarf_Attribute VAR_4;

 if (FUNC_0(VAR_1, VAR_2, &VAR_4) == ((void*)0) ||
     FUNC_1(&VAR_4, VAR_3) != 0)
  return -VAR_0;

 return 0;
}
