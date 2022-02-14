
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objagg_obj {int refcount; struct objagg_obj* parent; void* delta_priv; int obj; } ;
struct objagg {int priv; TYPE_1__* ops; } ;
struct TYPE_2__ {void* (* delta_create ) (int ,int ,int ) ;} ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct objagg_obj*) ;
 void* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct objagg*,struct objagg_obj*,struct objagg_obj*,int ) ;

__attribute__((used)) static int FUNC_5(struct objagg *VAR_0,
        struct objagg_obj *VAR_1,
        struct objagg_obj *VAR_2,
        bool VAR_3)
{
 void *VAR_4;

 VAR_4 = VAR_0->ops->delta_create(VAR_0->priv, VAR_2->obj,
            VAR_1->obj);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);




 VAR_1->parent = VAR_2;
 VAR_1->delta_priv = VAR_4;
 if (VAR_3)
  FUNC_2(VAR_1->parent);
 FUNC_4(VAR_0, VAR_1,
           VAR_2,
           VAR_2->refcount);
 return 0;
}
