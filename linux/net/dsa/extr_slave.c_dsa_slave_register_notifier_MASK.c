
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 struct notifier_block VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct notifier_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(void)
{
 struct notifier_block *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(&VAR_2);
 if (VAR_4)
  goto err_switchdev_nb;

 VAR_3 = &VAR_1;
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto err_switchdev_blocking_nb;

 return 0;

err_switchdev_blocking_nb:
 FUNC_4(&VAR_2);
err_switchdev_nb:
 FUNC_3(&VAR_0);
 return VAR_4;
}
