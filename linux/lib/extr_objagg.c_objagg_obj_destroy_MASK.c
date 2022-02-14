
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {int ht_node; int list; } ;
struct objagg {int ht_params; int obj_ht; int obj_count; } ;


 int FUNC_0 (struct objagg_obj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct objagg*,struct objagg_obj*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct objagg*,struct objagg_obj*) ;

__attribute__((used)) static void FUNC_5(struct objagg *VAR_0,
          struct objagg_obj *VAR_1)
{
 FUNC_4(VAR_0, VAR_1);
 --VAR_0->obj_count;
 FUNC_1(&VAR_1->list);
 FUNC_3(&VAR_0->obj_ht, &VAR_1->ht_node,
          VAR_0->ht_params);
 FUNC_2(VAR_0, VAR_1);
 FUNC_0(VAR_1);
}
