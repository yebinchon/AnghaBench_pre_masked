
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable_iter {int dummy; } ;
struct netlink_callback {int* args; } ;


 int FUNC_0 (struct rhashtable_iter*) ;
 int FUNC_1 (struct rhashtable_iter*) ;

__attribute__((used)) static int FUNC_2(struct netlink_callback *VAR_0)
{
 struct rhashtable_iter *VAR_1 = (void *)VAR_0->args[2];

 if (VAR_0->args[0] == 1)
  FUNC_1(VAR_1);

 FUNC_0(VAR_1);

 return 0;
}
