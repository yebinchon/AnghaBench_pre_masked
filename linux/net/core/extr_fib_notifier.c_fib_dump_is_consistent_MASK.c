
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int FUNC_0 (int *,struct notifier_block*) ;
 int FUNC_1 (int *,struct notifier_block*) ;
 int VAR_0 ;
 unsigned int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(struct notifier_block *VAR_1,
       void (*VAR_2)(struct notifier_block *VAR_3),
       unsigned int VAR_4)
{
 FUNC_0(&VAR_0, VAR_1);
 if (VAR_4 == FUNC_2())
  return 1;
 FUNC_1(&VAR_0, VAR_1);
 if (VAR_2)
  VAR_2(VAR_1);
 return 0;
}
