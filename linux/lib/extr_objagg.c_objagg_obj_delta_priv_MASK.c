
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {void const* delta_priv; } ;


 scalar_t__ FUNC_0 (struct objagg_obj const*) ;

const void *FUNC_1(const struct objagg_obj *VAR_0)
{
 if (FUNC_0(VAR_0))
  return ((void*)0);
 return VAR_0->delta_priv;
}
