
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,int ) ;

__attribute__((used)) static bool FUNC_6(tree VAR_2)
{
 tree VAR_3;

 for (VAR_3 = FUNC_3(VAR_2); VAR_3; VAR_3 = FUNC_1(VAR_3)) {
  tree VAR_4 = FUNC_4(VAR_3);
  enum tree_code VAR_5 = FUNC_2(VAR_4);

  if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
   if (FUNC_6(VAR_4))
    return 1;

  if (FUNC_5("user", FUNC_0(VAR_3)))
   return 1;
 }
 return 0;
}
