
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __find_variable_param {char const* name; int addr; } ;
typedef int Dwarf_Die ;
typedef int Dwarf_Addr ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,void*,int *) ;

Dwarf_Die *FUNC_1(Dwarf_Die *VAR_1, const char *VAR_2,
    Dwarf_Addr VAR_3, Dwarf_Die *VAR_4)
{
 struct __find_variable_param VAR_5 = { .name = VAR_2, .addr = VAR_3};

 return FUNC_0(VAR_1, VAR_0, (void *)&VAR_5,
         VAR_4);
}
