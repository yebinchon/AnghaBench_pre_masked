
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Die ;
typedef int Dwarf_Attribute ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(Dwarf_Die *VAR_4)
{
 Dwarf_Attribute VAR_5;
 int VAR_6 = FUNC_1(VAR_4);

 if (VAR_6 != VAR_2 &&
     VAR_6 != VAR_3)
  return 0;

 return (FUNC_0(VAR_4, VAR_0, &VAR_5) &&
  FUNC_2(&VAR_5) == VAR_1);
}
