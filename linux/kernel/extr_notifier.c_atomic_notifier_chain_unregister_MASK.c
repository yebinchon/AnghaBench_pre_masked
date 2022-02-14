
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct atomic_notifier_head {int lock; int head; } ;


 int FUNC_0 (int *,struct notifier_block*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 () ;

int FUNC_4(struct atomic_notifier_head *VAR_0,
  struct notifier_block *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(&VAR_0->lock, VAR_2);
 VAR_3 = FUNC_0(&VAR_0->head, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_3();
 return VAR_3;
}
