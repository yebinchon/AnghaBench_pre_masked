
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Lines ;
typedef int Dwarf_Line ;
typedef scalar_t__ Dwarf_Addr ;


 scalar_t__ FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,int*) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 int * FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_4(unsigned long VAR_0,
          Dwarf_Lines *VAR_1,
          unsigned long VAR_2,
          Dwarf_Addr VAR_3,
          Dwarf_Addr *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6, VAR_7;
 Dwarf_Line *VAR_8;
 Dwarf_Addr VAR_9;
 bool VAR_10;


 VAR_8 = FUNC_3(VAR_1, VAR_0);
 if (FUNC_1(VAR_8, &VAR_6))
  return 0;

 for (VAR_5 = VAR_0; VAR_5 < VAR_2; VAR_5++) {
  VAR_8 = FUNC_3(VAR_1, VAR_5);

  if (FUNC_0(VAR_8, &VAR_9) ||
      FUNC_1(VAR_8, &VAR_7) ||
      FUNC_2(VAR_8, &VAR_10))
   return 0;


  if (VAR_9 >= VAR_3)
   break;


  if (VAR_10)
   break;


  if (VAR_7 != VAR_6)
   break;
  if (VAR_5 != VAR_0)
   break;
 }

 FUNC_0(VAR_8, VAR_4);
 if (*VAR_4 >= VAR_3)
  FUNC_0(FUNC_3(VAR_1, VAR_5 - 1),
          VAR_4);

 return 1;
}
