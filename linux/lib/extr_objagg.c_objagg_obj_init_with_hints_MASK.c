
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objagg_obj {int obj; } ;
struct objagg_hints_node {TYPE_1__* parent; } ;
struct objagg {int hints; } ;
struct TYPE_2__ {int obj; } ;


 scalar_t__ FUNC_0 (struct objagg_obj*) ;
 int FUNC_1 (struct objagg_obj*) ;
 struct objagg_obj* FUNC_2 (struct objagg*,int ) ;
 struct objagg_hints_node* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct objagg*,struct objagg_obj*,struct objagg_obj*,int) ;
 int FUNC_5 (struct objagg*,struct objagg_obj*) ;
 int FUNC_6 (struct objagg*,struct objagg_obj*,struct objagg_hints_node*) ;

__attribute__((used)) static int FUNC_7(struct objagg *VAR_0,
          struct objagg_obj *VAR_1,
          bool *VAR_2)
{
 struct objagg_hints_node *VAR_3;
 struct objagg_obj *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_0->hints, VAR_1->obj);
 if (!VAR_3) {
  *VAR_2 = 0;
  return 0;
 }
 *VAR_2 = 1;

 if (!VAR_3->parent)
  return FUNC_6(VAR_0, VAR_1, VAR_3);

 VAR_4 = FUNC_2(VAR_0, VAR_3->parent->obj);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_4, 0);
 if (VAR_5) {
  *VAR_2 = 0;
  VAR_5 = 0;
  goto err_parent_assign;
 }

 return 0;

err_parent_assign:
 FUNC_5(VAR_0, VAR_4);
 return VAR_5;
}
