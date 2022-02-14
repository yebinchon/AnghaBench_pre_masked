
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
typedef enum profile_type { ____Placeholder_profile_type } profile_type ;


 int VAR_0 ;


 int FUNC_0 (int *,struct notifier_block*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(enum profile_type VAR_3, struct notifier_block *VAR_4)
{
 int VAR_5 = -VAR_0;

 switch (VAR_3) {
 case 128:
  VAR_5 = FUNC_0(
    &VAR_2, VAR_4);
  break;
 case 129:
  VAR_5 = FUNC_0(
    &VAR_1, VAR_4);
  break;
 }

 return VAR_5;
}
