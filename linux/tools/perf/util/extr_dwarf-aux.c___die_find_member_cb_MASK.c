
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int *,char const*,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(Dwarf_Die *VAR_3, void *VAR_4)
{
 const char *VAR_5 = VAR_4;

 if (FUNC_4(VAR_3) == VAR_2) {
  if (FUNC_0(VAR_3, VAR_5))
   return VAR_0;
  else if (!FUNC_3(VAR_3)) {
   Dwarf_Die VAR_6, VAR_7;
   if (FUNC_2(VAR_3, &VAR_6) &&
       FUNC_1(&VAR_6, VAR_5, &VAR_7))
    return VAR_0;
  }
 }
 return VAR_1;
}
