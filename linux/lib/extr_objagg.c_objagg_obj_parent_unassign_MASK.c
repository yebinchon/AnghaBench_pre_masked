
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct objagg_obj {TYPE_2__* parent; int delta_priv; } ;
struct objagg {int priv; TYPE_1__* ops; } ;
struct TYPE_5__ {int refcount; } ;
struct TYPE_4__ {int (* delta_destroy ) (int ,int ) ;} ;


 int FUNC_0 (struct objagg*,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct objagg*,struct objagg_obj*,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_3(struct objagg *VAR_0,
           struct objagg_obj *VAR_1)
{
 FUNC_2(VAR_0, VAR_1,
      VAR_1->parent,
      VAR_1->parent->refcount);
 VAR_0->ops->delta_destroy(VAR_0->priv, VAR_1->delta_priv);
 FUNC_0(VAR_0, VAR_1->parent);
}
