
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {scalar_t__ level; struct user_namespace* parent; } ;



bool FUNC_0(const struct user_namespace *VAR_0,
        const struct user_namespace *VAR_1)
{
 const struct user_namespace *VAR_2;
 for (VAR_2 = VAR_1; VAR_2->level > VAR_0->level; VAR_2 = VAR_2->parent)
  ;
 return (VAR_2 == VAR_0);
}
