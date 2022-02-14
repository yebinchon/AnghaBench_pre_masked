
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct world {int dummy; } ;
struct objagg {int dummy; } ;


 scalar_t__ FUNC_0 (struct objagg*) ;
 int VAR_0 ;
 int FUNC_1 (struct objagg*) ;
 int FUNC_2 (struct objagg*) ;
 int FUNC_3 (struct objagg*) ;
 int VAR_1 ;
 struct objagg* FUNC_4 (int *,int *,struct world*) ;
 int FUNC_5 (struct objagg*) ;
 int FUNC_6 (struct world*,struct objagg*,int,int) ;
 int FUNC_7 (struct world*,struct objagg*,int,int) ;
 int FUNC_8 (struct world*,struct objagg*,int) ;

__attribute__((used)) static int FUNC_9(void)
{
 struct world VAR_2 = {};
 struct objagg *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = FUNC_4(&VAR_1, ((void*)0), &VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5)
  goto err_stats_first_zero;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_6(&VAR_2, VAR_3, VAR_4, 1);
  if (VAR_5)
   goto err_obj_first_get;
 }




 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_6(&VAR_2, VAR_3, VAR_4, 0);
  if (VAR_5)
   goto err_obj_second_get;
 }

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  goto err_stats_nodelta;

 for (VAR_4 = VAR_0 - 1; VAR_4 >= 0; VAR_4--) {
  VAR_5 = FUNC_7(&VAR_2, VAR_3, VAR_4, 0);
  if (VAR_5)
   goto err_obj_first_put;
 }
 for (VAR_4 = VAR_0 - 1; VAR_4 >= 0; VAR_4--) {
  VAR_5 = FUNC_7(&VAR_2, VAR_3, VAR_4, 1);
  if (VAR_5)
   goto err_obj_second_put;
 }

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5)
  goto err_stats_second_zero;

 FUNC_5(VAR_3);
 return 0;

err_stats_nodelta:
err_obj_first_put:
err_obj_second_get:
 for (VAR_4--; VAR_4 >= 0; VAR_4--)
  FUNC_8(&VAR_2, VAR_3, VAR_4);

 VAR_4 = VAR_0;
err_obj_first_get:
err_obj_second_put:
 for (VAR_4--; VAR_4 >= 0; VAR_4--)
  FUNC_8(&VAR_2, VAR_3, VAR_4);
err_stats_first_zero:
err_stats_second_zero:
 FUNC_5(VAR_3);
 return VAR_5;
}
