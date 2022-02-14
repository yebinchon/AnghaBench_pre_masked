
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __addr_die_search_param {scalar_t__ addr; int die_mem; } ;
typedef int Dwarf_Die ;
typedef scalar_t__ Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(Dwarf_Die *VAR_3, void *VAR_4)
{
 struct __addr_die_search_param *VAR_5 = VAR_4;
 Dwarf_Addr VAR_6 = 0;

 if (FUNC_1(VAR_3) == VAR_2 &&
     !FUNC_0(VAR_3, &VAR_6) &&
     VAR_6 == VAR_5->addr) {
  FUNC_2(VAR_5->die_mem, VAR_3, sizeof(Dwarf_Die));
  return VAR_0;
 }
 return VAR_1;
}
