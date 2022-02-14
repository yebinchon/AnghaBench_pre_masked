
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 struct notifier_block VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct notifier_block*) ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
 struct notifier_block *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_1;
 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  FUNC_0("DSA: failed to unregister switchdev blocking notifier (%d)\n", VAR_4);

 VAR_4 = FUNC_3(&VAR_2);
 if (VAR_4)
  FUNC_0("DSA: failed to unregister switchdev notifier (%d)\n", VAR_4);

 VAR_4 = FUNC_1(&VAR_0);
 if (VAR_4)
  FUNC_0("DSA: failed to unregister slave notifier (%d)\n", VAR_4);
}
