
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_action_ops {int owner; } ;
struct tc_action {struct tc_action_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tc_action*) ;

__attribute__((used)) static void FUNC_2(struct tc_action *VAR_1[])
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct tc_action *VAR_3 = VAR_1[VAR_2];
  const struct tc_action_ops *VAR_4;

  if (!VAR_3)
   continue;
  VAR_4 = VAR_3->ops;
  if (FUNC_1(VAR_3))
   FUNC_0(VAR_4->owner);
 }
}
