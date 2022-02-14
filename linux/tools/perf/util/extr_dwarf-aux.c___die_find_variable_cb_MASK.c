
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __find_variable_param {int addr; int name; } ;
typedef int Dwarf_Die ;
typedef int Dwarf_Attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(Dwarf_Die *VAR_7, void *VAR_8)
{
 struct __find_variable_param *VAR_9 = VAR_8;
 Dwarf_Attribute VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_7);
 if ((VAR_11 == VAR_5 ||
      VAR_11 == VAR_6) &&
     FUNC_0(VAR_7, VAR_9->name) &&

     (FUNC_1(VAR_7, VAR_3, &VAR_10) ||
      FUNC_1(VAR_7, VAR_4, &VAR_10)))
  return VAR_1;
 if (FUNC_2(VAR_7, VAR_9->addr))
  return VAR_0;
 else
  return VAR_2;
}
