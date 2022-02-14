
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg {scalar_t__ hints; int obj_ht; int obj_list; int root_ida; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct objagg*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct objagg*) ;

void FUNC_7(struct objagg *VAR_0)
{
 FUNC_6(VAR_0);
 FUNC_1(&VAR_0->root_ida);
 FUNC_0(!FUNC_3(&VAR_0->obj_list));
 FUNC_5(&VAR_0->obj_ht);
 if (VAR_0->hints)
  FUNC_4(VAR_0->hints);
 FUNC_2(VAR_0);
}
