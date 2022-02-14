
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int gimple_stmt_iterator ;
typedef int gimple ;
typedef int gcall ;
typedef int basic_block ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(basic_block VAR_0, tree VAR_1)
{
 gimple_stmt_iterator VAR_2;

 for (VAR_2 = FUNC_5(VAR_0); !FUNC_3(VAR_2); FUNC_4(&VAR_2)) {
  gcall *VAR_3;
  gimple VAR_4 = FUNC_6(VAR_2);

  if (!FUNC_7(VAR_4))
   continue;

  VAR_3 = FUNC_1(VAR_4);
  if (!FUNC_2(VAR_3))
   continue;

  FUNC_0(&VAR_2, VAR_1);
  return 1;
 }

 return 0;
}
