
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ltree_gist ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(ltree_gist *VAR_1, ltree_gist *VAR_2)
{
 if (FUNC_0(VAR_1))
 {
  if (FUNC_0(VAR_2))
   return 0;
  else
   return VAR_0 - FUNC_3(FUNC_1(VAR_2));
 }
 else if (FUNC_0(VAR_2))
  return VAR_0 - FUNC_3(FUNC_1(VAR_1));

 return FUNC_2(FUNC_1(VAR_1), FUNC_1(VAR_2));
}
