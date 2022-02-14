
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct genl_ops {scalar_t__ cmd; } ;
struct genl_family {int n_ops; struct genl_ops const* ops; } ;



__attribute__((used)) static const struct genl_ops *FUNC_0(u8 VAR_0,
        const struct genl_family *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->n_ops; VAR_2++)
  if (VAR_1->ops[VAR_2].cmd == VAR_0)
   return &VAR_1->ops[VAR_2];

 return ((void*)0);
}
