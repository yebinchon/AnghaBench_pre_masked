
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;






 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct notifier_block *VAR_2,
         unsigned long VAR_3, void *VAR_4)
{
 switch (VAR_3) {
 case 128:
 case 133:
 case 129:
  VAR_1 = 1;
  break;
 case 130:
 case 132:
 case 131:
  VAR_1 = 0;
  break;
 default:
  break;
 }
 return VAR_0;
}
