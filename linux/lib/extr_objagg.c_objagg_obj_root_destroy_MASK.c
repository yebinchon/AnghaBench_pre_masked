
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objagg_obj {int root_priv; } ;
struct objagg {int priv; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* root_destroy ) (int ,int ) ;} ;


 int FUNC_0 (struct objagg*,struct objagg_obj*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct objagg*,struct objagg_obj*) ;

__attribute__((used)) static void FUNC_3(struct objagg *VAR_0,
        struct objagg_obj *VAR_1)
{
 FUNC_2(VAR_0, VAR_1);
 VAR_0->ops->root_destroy(VAR_0->priv, VAR_1->root_priv);
 FUNC_0(VAR_0, VAR_1);
}
