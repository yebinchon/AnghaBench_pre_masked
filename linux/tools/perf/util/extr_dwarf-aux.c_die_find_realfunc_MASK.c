
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __addr_die_search_param {int * die_mem; int addr; } ;
typedef int Dwarf_Die ;
typedef int Dwarf_Addr ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct __addr_die_search_param*,int ) ;

Dwarf_Die *FUNC_1(Dwarf_Die *VAR_1, Dwarf_Addr VAR_2,
        Dwarf_Die *VAR_3)
{
 struct __addr_die_search_param VAR_4;
 VAR_4.addr = VAR_2;
 VAR_4.die_mem = VAR_3;

 if (!FUNC_0(VAR_1, VAR_0, &VAR_4, 0))
  return ((void*)0);
 else
  return VAR_3;
}
