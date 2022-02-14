
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Lines ;
typedef scalar_t__ Dwarf_Addr ;


 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(Dwarf_Lines *VAR_0, unsigned long VAR_1,
      Dwarf_Addr VAR_2, unsigned long *VAR_3)
{
 unsigned long VAR_4;
 Dwarf_Addr VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (FUNC_0(FUNC_1(VAR_0, VAR_4), &VAR_5))
   return 0;

  if (VAR_5 == VAR_2) {
   *VAR_3 = VAR_4;
   return 1;
  }
 }
 return 0;
}
