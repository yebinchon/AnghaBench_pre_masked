
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ltree_gist ;
typedef int lquery ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int *,int *) ;

__attribute__((used)) static bool
FUNC_10(ltree_gist *VAR_3, ArrayType *VAR_4)
{
 lquery *VAR_5 = (lquery *) FUNC_0(VAR_4);
 int VAR_6 = FUNC_3(FUNC_2(VAR_4), FUNC_1(VAR_4));

 if (FUNC_2(VAR_4) > 1)
  FUNC_6(VAR_2,
    (FUNC_7(VAR_0),
     FUNC_8("array must be one-dimensional")));
 if (FUNC_5(VAR_4))
  FUNC_6(VAR_2,
    (FUNC_7(VAR_1),
     FUNC_8("array must not contain nulls")));

 while (VAR_6 > 0)
 {
  if (FUNC_9(VAR_3, VAR_5))
   return 1;
  VAR_6--;
  VAR_5 = (lquery *) FUNC_4(VAR_5);
 }
 return 0;
}
