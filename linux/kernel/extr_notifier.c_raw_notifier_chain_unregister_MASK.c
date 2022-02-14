
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_notifier_head {int head; } ;
struct notifier_block {int dummy; } ;


 int FUNC_0 (int *,struct notifier_block*) ;

int FUNC_1(struct raw_notifier_head *VAR_0,
  struct notifier_block *VAR_1)
{
 return FUNC_0(&VAR_0->head, VAR_1);
}
