
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef scalar_t__ const_tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(const_tree VAR_2)
{
 const_tree VAR_3;

 FUNC_3(FUNC_1(VAR_2) == VAR_0 || FUNC_1(VAR_2) == VAR_1);

 for (VAR_3 = FUNC_2(VAR_2); VAR_3; VAR_3 = FUNC_0(VAR_3)) {
  const_tree VAR_4 = FUNC_4(VAR_3);
  enum tree_code VAR_5 = FUNC_1(VAR_4);

  if (VAR_2 == VAR_4)
   continue;

  if (VAR_5 == VAR_0 || VAR_5 == VAR_1) {
   if (!FUNC_6(VAR_4))
    return 0;
   continue;
  }

  if (!FUNC_5(VAR_4))
   return 0;
 }

 return 1;
}
