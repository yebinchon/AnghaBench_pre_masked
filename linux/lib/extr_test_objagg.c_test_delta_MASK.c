
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct world {int dummy; } ;
struct objagg {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct objagg*) ;
 int FUNC_2 (struct objagg*) ;
 int * VAR_0 ;
 int VAR_1 ;
 struct objagg* FUNC_3 (int *,int *,struct world*) ;
 int FUNC_4 (struct objagg*) ;
 int FUNC_5 (struct world*,struct objagg*,int *,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct world VAR_2 = {};
 struct objagg *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(&VAR_1, ((void*)0), &VAR_2);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_5 = FUNC_5(&VAR_2, VAR_3,
          &VAR_0[VAR_4], 0);
  if (VAR_5)
   goto err_do_action_item;
 }

 FUNC_4(VAR_3);
 return 0;

err_do_action_item:
 for (VAR_4--; VAR_4 >= 0; VAR_4--)
  FUNC_5(&VAR_2, VAR_3, &VAR_0[VAR_4], 1);

 FUNC_4(VAR_3);
 return VAR_5;
}
