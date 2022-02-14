
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_ops {scalar_t__ cmd; int * doit; int * dumpit; } ;
struct genl_family {unsigned int n_ops; struct genl_ops* ops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const struct genl_family *VAR_1)
{
 const struct genl_ops *VAR_2 = VAR_1->ops;
 unsigned int VAR_3 = VAR_1->n_ops;
 int VAR_4, VAR_5;

 if (FUNC_0(VAR_3 && !VAR_2))
  return -VAR_0;

 if (!VAR_3)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4].dumpit == ((void*)0) && VAR_2[VAR_4].doit == ((void*)0))
   return -VAR_0;
  for (VAR_5 = VAR_4 + 1; VAR_5 < VAR_3; VAR_5++)
   if (VAR_2[VAR_4].cmd == VAR_2[VAR_5].cmd)
    return -VAR_0;
 }

 return 0;
}
