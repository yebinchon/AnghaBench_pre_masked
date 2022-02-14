
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {void const* root_priv; struct objagg_obj const* parent; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct objagg_obj const*) ;

const void *FUNC_2(const struct objagg_obj *VAR_0)
{
 if (FUNC_1(VAR_0))
  return VAR_0->root_priv;
 FUNC_0(!FUNC_1(VAR_0->parent));
 return VAR_0->parent->root_priv;
}
