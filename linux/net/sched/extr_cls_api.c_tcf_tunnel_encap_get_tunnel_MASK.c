
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_action {int dummy; } ;
struct flow_action_entry {scalar_t__ tunnel; scalar_t__ destructor_priv; int destructor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_1(struct flow_action_entry *VAR_2,
           const struct tc_action *VAR_3)
{
 VAR_2->tunnel = FUNC_0(VAR_3);
 if (!VAR_2->tunnel)
  return -VAR_0;
 VAR_2->destructor = VAR_1;
 VAR_2->destructor_priv = VAR_2->tunnel;
 return 0;
}
