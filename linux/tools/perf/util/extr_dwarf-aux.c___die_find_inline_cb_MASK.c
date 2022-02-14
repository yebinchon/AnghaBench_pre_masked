
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Die ;
typedef int Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(Dwarf_Die *VAR_3, void *VAR_4)
{
 Dwarf_Addr *VAR_5 = VAR_4;

 if (FUNC_1(VAR_3) == VAR_2 &&
     FUNC_0(VAR_3, *VAR_5))
  return VAR_1;

 return VAR_0;
}
