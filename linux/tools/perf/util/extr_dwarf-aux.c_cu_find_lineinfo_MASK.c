
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Line ;
typedef int Dwarf_Die ;
typedef scalar_t__ Dwarf_Addr ;


 int VAR_0 ;
 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 char* FUNC_3 (int *,int *,int *) ;

int FUNC_4(Dwarf_Die *VAR_1, unsigned long VAR_2,
      const char **VAR_3, int *VAR_4)
{
 Dwarf_Line *VAR_5;
 Dwarf_Addr VAR_6;

 VAR_5 = FUNC_0(VAR_1, (Dwarf_Addr)VAR_2);
 if (VAR_5 && FUNC_1(VAR_5, &VAR_6) == 0 &&
     VAR_2 == (unsigned long)VAR_6 && FUNC_2(VAR_5, VAR_4) == 0) {
  *VAR_3 = FUNC_3(VAR_5, ((void*)0), ((void*)0));
  if (!*VAR_3)

   *VAR_4 = 0;
 }

 return *VAR_4 ?: -VAR_0;
}
