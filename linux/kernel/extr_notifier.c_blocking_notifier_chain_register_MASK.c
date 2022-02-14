
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct blocking_notifier_head {int rwsem; int head; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct notifier_block*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct blocking_notifier_head *VAR_2,
  struct notifier_block *VAR_3)
{
 int VAR_4;






 if (FUNC_2(VAR_1 == VAR_0))
  return FUNC_1(&VAR_2->head, VAR_3);

 FUNC_0(&VAR_2->rwsem);
 VAR_4 = FUNC_1(&VAR_2->head, VAR_3);
 FUNC_3(&VAR_2->rwsem);
 return VAR_4;
}
