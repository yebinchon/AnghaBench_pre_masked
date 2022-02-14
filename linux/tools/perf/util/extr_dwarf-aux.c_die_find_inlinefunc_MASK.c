
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Die ;
typedef int Dwarf_Addr ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int *,int *) ;
 int FUNC_1 (int *,int *,int) ;

Dwarf_Die *FUNC_2(Dwarf_Die *VAR_1, Dwarf_Addr VAR_2,
          Dwarf_Die *VAR_3)
{
 Dwarf_Die VAR_4;

 VAR_1 = FUNC_0(VAR_1, VAR_0, &VAR_2, &VAR_4);
 if (!VAR_1)
  return ((void*)0);


 while (VAR_1) {
  FUNC_1(VAR_3, VAR_1, sizeof(Dwarf_Die));
  VAR_1 = FUNC_0(VAR_1, VAR_0, &VAR_2,
     &VAR_4);
 }

 return VAR_3;
}
