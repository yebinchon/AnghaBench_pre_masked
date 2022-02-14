
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objagg_obj {int root_priv; int root_id; int obj; } ;
struct objagg_hints_node {int dummy; } ;
struct objagg {int priv; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* root_create ) (int ,int ,int ) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct objagg*,struct objagg_obj*,struct objagg_hints_node*) ;
 int FUNC_3 (struct objagg*,struct objagg_obj*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct objagg*,struct objagg_obj*) ;

__attribute__((used)) static int FUNC_6(struct objagg *VAR_0,
      struct objagg_obj *VAR_1,
      struct objagg_hints_node *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_1->root_priv = VAR_0->ops->root_create(VAR_0->priv,
        VAR_1->obj,
        VAR_1->root_id);
 if (FUNC_0(VAR_1->root_priv)) {
  VAR_3 = FUNC_1(VAR_1->root_priv);
  goto err_root_create;
 }
 FUNC_5(VAR_0, VAR_1);
 return 0;

err_root_create:
 FUNC_3(VAR_0, VAR_1);
 return VAR_3;
}
