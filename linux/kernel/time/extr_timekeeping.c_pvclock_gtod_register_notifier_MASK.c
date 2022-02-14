
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timekeeper {int dummy; } ;
struct notifier_block {int dummy; } ;
struct TYPE_2__ {struct timekeeper timekeeper; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct notifier_block*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (struct timekeeper*,int) ;

int FUNC_4(struct notifier_block *VAR_3)
{
 struct timekeeper *VAR_4 = &VAR_2.timekeeper;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(&VAR_1, VAR_5);
 VAR_6 = FUNC_0(&VAR_0, VAR_3);
 FUNC_3(VAR_4, 1);
 FUNC_2(&VAR_1, VAR_5);

 return VAR_6;
}
