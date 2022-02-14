
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct blocking_notifier_head {int dummy; } ;


 int FUNC_0 (struct blocking_notifier_head*,struct notifier_block*) ;
 struct blocking_notifier_head VAR_0 ;

int FUNC_1(struct notifier_block *VAR_1)
{
 struct blocking_notifier_head *VAR_2 = &VAR_0;

 return FUNC_0(VAR_2, VAR_1);
}
