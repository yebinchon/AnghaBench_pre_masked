
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Die ;
typedef int Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int *,int *) ;
 int * FUNC_1 (int *,int ,int *) ;

int FUNC_2(Dwarf_Die *VAR_2, Dwarf_Addr VAR_3,
      int (*VAR_4)(Dwarf_Die *, void *), void *VAR_5)
{
 Dwarf_Die VAR_6;
 Dwarf_Die *VAR_7;
 int VAR_8 = -VAR_0;


 for (VAR_7 = FUNC_1(VAR_2, VAR_3, &VAR_6);
      VAR_7 != ((void*)0);
      VAR_7 = FUNC_0(VAR_7, VAR_1, &VAR_3,
         &VAR_6)) {
  VAR_8 = VAR_4(VAR_7, VAR_5);
  if (VAR_8)
   break;
 }

 return VAR_8;

}
