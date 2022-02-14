
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void ltree ;
typedef int PGCALL2 ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static bool
FUNC_12(ArrayType *VAR_3, PGCALL2 VAR_4, void *VAR_5, ltree **VAR_6)
{
 int VAR_7 = FUNC_3(FUNC_2(VAR_3), FUNC_1(VAR_3));
 ltree *VAR_8 = (ltree *) FUNC_0(VAR_3);

 if (FUNC_2(VAR_3) > 1)
  FUNC_9(VAR_2,
    (FUNC_10(VAR_0),
     FUNC_11("array must be one-dimensional")));
 if (FUNC_8(VAR_3))
  FUNC_9(VAR_2,
    (FUNC_10(VAR_1),
     FUNC_11("array must not contain nulls")));

 if (VAR_6)
  *VAR_6 = ((void*)0);
 while (VAR_7 > 0)
 {
  if (FUNC_4(FUNC_5(VAR_4,
            FUNC_7(VAR_8), FUNC_7(VAR_5))))
  {

   if (VAR_6)
    *VAR_6 = VAR_8;
   return 1;
  }
  VAR_7--;
  VAR_8 = FUNC_6(VAR_8);
 }

 return 0;
}
